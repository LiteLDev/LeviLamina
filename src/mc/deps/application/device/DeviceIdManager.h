#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class DeviceIdManager {
public:
    // prevent constructor by default
    DeviceIdManager& operator=(DeviceIdManager const&);
    DeviceIdManager(DeviceIdManager const&);
    DeviceIdManager();
};

}; // namespace Bedrock
