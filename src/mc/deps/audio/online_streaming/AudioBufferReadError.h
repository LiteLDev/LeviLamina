#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

enum class AudioBufferReadError : int {
    EmptyOutputBuffer   = 1,
    DataNotAvailable    = 2,
    BeyondContentLength = 3,
};

}
