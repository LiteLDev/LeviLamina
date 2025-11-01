#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class DeviceIdRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbbff58;
    ::ll::UntypedStorage<1, 1> mUnk6df0be;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIdRecord& operator=(DeviceIdRecord const&);
    DeviceIdRecord(DeviceIdRecord const&);
    DeviceIdRecord();

};

}
