#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IUIEventTelemetry {

public:
    // prevent constructor by default
    IUIEventTelemetry& operator=(IUIEventTelemetry const&) = delete;
    IUIEventTelemetry(IUIEventTelemetry const&)            = delete;
    IUIEventTelemetry()                                    = delete;
};
