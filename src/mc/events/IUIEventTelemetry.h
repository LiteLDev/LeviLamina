#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IUIEventTelemetry {
public:
    // prevent constructor by default
    IUIEventTelemetry& operator=(IUIEventTelemetry const&);
    IUIEventTelemetry(IUIEventTelemetry const&);
    IUIEventTelemetry();
};
