#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class ChannelLayout : int {
    None                     = 0,
    Unsupported              = 1,
    Mono                     = 2,
    Stereo                   = 3,
    ChannelLayout2_1         = 4,
    Surround                 = 5,
    ChannelLayout4_0         = 6,
    ChannelLayout2_2         = 7,
    Quad                     = 8,
    ChannelLayout5_0         = 9,
    ChannelLayout5_1         = 10,
    ChannelLayout5_0Back     = 11,
    ChannelLayout5_1Back     = 12,
    ChannelLayout7_0         = 13,
    ChannelLayout7_1         = 14,
    ChannelLayout7_1Wide     = 15,
    StereoDownmix            = 16,
    ChannelLayout2point1     = 17,
    ChannelLayout3_1         = 18,
    ChannelLayout4_1         = 19,
    ChannelLayout6_0         = 20,
    ChannelLayout6_0Front    = 21,
    Hexagonal                = 22,
    ChannelLayout6_1         = 23,
    ChannelLayout6_1Back     = 24,
    ChannelLayout6_1Front    = 25,
    ChannelLayout7_0Front    = 26,
    ChannelLayout7_1WideBack = 27,
    Octagonal                = 28,
    Discrete                 = 29,
    StereoAndKeyboardMic     = 30,
    ChannelLayout4_1QuadSide = 31,
    Bitstream                = 32,
    Max                      = 32,
};

}
