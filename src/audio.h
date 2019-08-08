//
// Created by Marco Fontana
//

#ifndef AUDIO_H
#define AUDIO_H

#include "SDL.h"
#include <string>
#include <map>
#include <vector>

typedef struct {
    SDL_AudioSpec wav_spec;
    uint32_t wav_length;
    uint8_t *wav_buffer;
} WAV_FILE;

typedef enum{
    FEED,
    SOUNDTRACK
} WAV_SOUND;


class Audio {
public:
    Audio();
    ~Audio();
    int playEffect(WAV_SOUND sound);

private:
    static void audioCallback(void *udata, Uint8 *stream, int len);

    const char *_feed_sound{"../sound/feed.wav"};
    char *_deviceName;
    bool _init;

    SDL_AudioDeviceID _device;
    std::map<WAV_SOUND, WAV_FILE> _sounds;

    bool isInit();
    int loadEffects();
};


#endif //AUDIO_H
