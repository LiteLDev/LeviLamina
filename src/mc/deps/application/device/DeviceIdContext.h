#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct DeviceIdContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk9d5b51;
    ::ll::UntypedStorage<8, 32> mUnk302c87;
    ::ll::UntypedStorage<8, 48> mUnkeef6d2;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIdContext& operator=(DeviceIdContext const&);
    DeviceIdContext(DeviceIdContext const&);
    DeviceIdContext();
};

} // namespace Bedrock
