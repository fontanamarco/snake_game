//
// Created by Marco Fontana
//

#ifndef CPPND_CAPSTONE_SNAKE_GAME_AUDIO_H
#define CPPND_CAPSTONE_SNAKE_GAME_AUDIO_H

#include <SDL.h>
#include <string>
#include <map>
#include <vector>

const char *_feed_sound = "../sound/feed.wav";

typedef struct {
    SDL_AudioSpec wav_spec;
    uint32_t wav_length;
    uint8_t *wav_buffer;
} WAV_FILE;

typedef enum{
    FEED,
    SOUNDTRACK
} WAV_KEYS;

class Audio {
public:
    Audio();

private:


    SDL_AudioDeviceID _device;
    // a map containing the wav files
    std::map<WAV_KEYS, WAV_FILE> _sounds;

    int loadEffects();
};


#endif //CPPND_CAPSTONE_SNAKE_GAME_AUDIO_H
