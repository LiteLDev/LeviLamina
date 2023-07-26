#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class DeviceIdManager {

public:
    // prevent constructor by default
    DeviceIdManager& operator=(DeviceIdManager const&) = delete;
    DeviceIdManager(DeviceIdManager const&)            = delete;
    DeviceIdManager()                                  = delete;
};

}; // namespace Bedrock
