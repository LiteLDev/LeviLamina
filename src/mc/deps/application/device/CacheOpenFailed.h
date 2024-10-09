#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DeviceIdErrorType {

struct CacheOpenFailed {
public:
    // prevent constructor by default
    CacheOpenFailed& operator=(CacheOpenFailed const&);
    CacheOpenFailed(CacheOpenFailed const&);
    CacheOpenFailed();
};

}; // namespace Bedrock::DeviceIdErrorType
