#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

enum class ResponseBodyType : int {
    Buffered = 0,
    File     = 1,
    Ignored  = 2,
    Generic  = 3,
    Count    = 4,
};

}
