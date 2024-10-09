#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct DeviceIdContext {
public:
    // prevent constructor by default
    DeviceIdContext& operator=(DeviceIdContext const&);
    DeviceIdContext(DeviceIdContext const&);
    DeviceIdContext();
};

}; // namespace Bedrock
