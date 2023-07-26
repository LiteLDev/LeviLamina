#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPackTelemetry {

public:
    // prevent constructor by default
    IPackTelemetry& operator=(IPackTelemetry const&) = delete;
    IPackTelemetry(IPackTelemetry const&)            = delete;
    IPackTelemetry()                                 = delete;
};
