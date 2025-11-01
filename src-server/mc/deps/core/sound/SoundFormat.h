#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SoundFormat : int {
    None = 0,
    Pcm8 = 1,
    Pcm16 = 2,
    Pcm24 = 3,
    Pcm32 = 4,
    Pcmfloat = 5,
    Bitstream = 6,
};
