//
// Created by Marco Fontana on 06/08/19.
//

#include "audio.h"

Audio::Audio()
{
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        SDL_Log("SDL initialization failed: %s\n", SDL_GetError());
        return;
    }
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
