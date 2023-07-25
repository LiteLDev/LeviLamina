#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct DeviceIdContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_DEVICEIDCONTEXT
public:
    DeviceIdContext& operator=(DeviceIdContext const&) = delete;
    DeviceIdContext(DeviceIdContext const&)            = delete;
    DeviceIdContext()                                  = delete;
#endif

public:
};

}; // namespace Bedrock
