#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct DeviceIdContext {

public:
    // prevent constructor by default
    DeviceIdContext& operator=(DeviceIdContext const&) = delete;
    DeviceIdContext(DeviceIdContext const&)            = delete;
    DeviceIdContext()                                  = delete;
};

}; // namespace Bedrock
