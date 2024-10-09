#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DeviceIdErrorType {

struct NoCacheFound {
public:
    // prevent constructor by default
    NoCacheFound& operator=(NoCacheFound const&);
    NoCacheFound(NoCacheFound const&);
    NoCacheFound();
};

}; // namespace Bedrock::DeviceIdErrorType
