//
// Created by Marco Fontana on 06/08/19.
//

#include "audio.h"

Audio::Audio()
{
    _init = false;

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

    // other effects to be added...

    // open the device
    SDL_AudioSpec have;
    if ((_device = SDL_OpenAudioDevice(NULL, 0, &_sounds[FEED].wav_spec, &have, SDL_AUDIO_ALLOW_FORMAT_CHANGE)) == 0) {
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

    SDL_QueueAudio(_device, audioEffect->wav_buffer, audioEffect->wav_length);
    SDL_PauseAudioDevice(_device, 0);
}


//int Audio::loadSoundtrack()
//{
//    if (SDL_LoadWAV(_feed_sound,
//                    &_sounds[SOUNDTRACK].wav_spec,
//                    &_sounds[SOUNDTRACK].wav_buffer,
//                    &_sounds[SOUNDTRACK].wav_length) == NULL) {
//        SDL_Log("Could not load file %s: %s", _feed_sound, SDL_GetError());
//        return 0;
//    }
//}
