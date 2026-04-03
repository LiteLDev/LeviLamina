#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct DeviceIDPlatformEnvironment {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk87d0ee;
    ::ll::UntypedStorage<1, 1> mUnk1c8bba;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIDPlatformEnvironment& operator=(DeviceIDPlatformEnvironment const&);
    DeviceIDPlatformEnvironment(DeviceIDPlatformEnvironment const&);
    DeviceIDPlatformEnvironment();
};

} // namespace Bedrock
