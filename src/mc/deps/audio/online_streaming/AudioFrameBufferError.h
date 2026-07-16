#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

enum class AudioFrameBufferError : int {
    InvalidChannelCount = 1,
    EmptyBuffer         = 2,
    InvalidFrameCount   = 3,
    BufferTooSmall      = 4,
};

}
