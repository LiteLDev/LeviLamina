#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::H264 {

enum class NaluType : uchar {
    KSlice         = 1,
    KIdr           = 5,
    KSei           = 6,
    KSps           = 7,
    KPps           = 8,
    KAud           = 9,
    KEndOfSequence = 10,
    KEndOfStream   = 11,
    KFiller        = 12,
    KPrefix        = 14,
    KStapA         = 24,
    KFuA           = 28,
};

}
