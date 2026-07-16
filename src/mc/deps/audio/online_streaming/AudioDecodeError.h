#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

enum class AudioDecodeError : int {
    NotInitialized     = 1,
    AlreadyInitialized = 2,
    NoDataAvailable    = 3,
    InvalidArgument    = 4,
};

}
