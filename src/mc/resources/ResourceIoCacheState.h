#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

enum class ResourceIoCacheState : uchar {
    Cold    = 0,
    Warm    = 1,
    Partial = 2,
};

}
