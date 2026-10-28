#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SoundDataEventType : uchar {
    Stop      = 0,
    SetVolume = 1,
    SetPitch  = 2,
    Fade      = 3,
    SeekTo    = 4,
    Pause     = 5,
    Resume    = 6,
};
