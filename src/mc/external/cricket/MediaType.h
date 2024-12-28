#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class MediaType : int {
    Audio       = 0,
    Video       = 1,
    Data        = 2,
    Unsupported = 3,
};

}
