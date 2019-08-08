//
// Created by Marco Fontana on 06/08/19.
//

#include <iostream>
#include "audio.h"

void MyAudioCallback(void *userdata, Uint8 *stream, int len);

Audio::Audio()
{
    _init = false;
    _deviceName = nullptr;

    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        SDL_Log("SDL initialization failed: %s\n", SDL_GetError());
    }
    else {
        // object initialization
        if (loadEffects()) {
            _init = true;
        }
    }
}


Audio::~Audio()
{
    SDL_CloseAudioDevice(_device);
}

bool Audio::isInit()
{
    return _init;
}

int Audio::loadEffects()
{
    if (SDL_LoadWAV(_feed_sound,
                    &_sounds[FEED].wav_spec,
                    &_sounds[FEED].wav_buffer,
                    &_sounds[FEED].wav_length) == NULL) {
        SDL_Log("Could not load file %s: %s", _feed_sound, SDL_GetError());
        return 0;
    }

    // pass this as userdata so that we can access class's data
    _sounds[FEED].wav_spec.userdata = this;
    _sounds[FEED].wav_spec.callback = this->audioCallback;

    // other effects to be added...

    // open the device
    SDL_AudioSpec have;
    const char *_deviceName = SDL_GetAudioDeviceName(0, 0);
    if ((_device = SDL_OpenAudioDevice(_deviceName, 0, &_sounds[FEED].wav_spec, &have, SDL_AUDIO_ALLOW_FORMAT_CHANGE)) == 0) {
        SDL_Log("Failed to open audio device: %s", SDL_GetError());
        return 0;
    }

    return 1;
}

int Audio::playEffect(WAV_SOUND sound)
{
    if (!isInit())
        return 0;

    WAV_FILE *audioEffect = nullptr;
    switch (sound) {
        case FEED:
            audioEffect = &_sounds[FEED];
            break;
        default:
            break;
    }

    //SDL_QueueAudio(_device, audioEffect->wav_buffer, audioEffect->wav_length);
    SDL_PauseAudioDevice(_device, 0);

    while ( audioEffect->wav_length > 0 ) {
        SDL_Delay(1);
    }
    SDL_CloseAudio();
}


// forward callback
void Audio::audioCallback(void *userdata, Uint8 *stream, int len)
{
    Audio *pAudio = (Audio*)userdata;

    std::cout << "[1] pAudio->_sounds[FEED].wav_length: " << pAudio->_sounds[FEED].wav_length << '\n';
    SDL_AudioFormat deviceFormat = pAudio->_sounds[FEED].wav_spec.format;

    if (pAudio->_sounds[FEED].wav_length <= 0) {
        Uint8 buffer[256] = {0};
        SDL_MixAudioFormat(stream, buffer, deviceFormat, 256, SDL_MIX_MAXVOLUME);// mix from one buffer into another
        return;
    }

    len = ( len > pAudio->_sounds[FEED].wav_length ? pAudio->_sounds[FEED].wav_length : len );


    SDL_MixAudioFormat(stream, pAudio->_sounds[FEED].wav_buffer, deviceFormat, len, SDL_MIX_MAXVOLUME);// mix from one buffer into another

    pAudio->_sounds[FEED].wav_buffer += len;
    pAudio->_sounds[FEED].wav_length -= len;
    std::cout << "[2] pAudio->_sounds[FEED].wav_length: " << pAudio->_sounds[FEED].wav_length << '\n';
}