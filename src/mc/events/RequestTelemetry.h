#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RequestTelemetry {
public:
    // prevent constructor by default
    RequestTelemetry& operator=(RequestTelemetry const&);
    RequestTelemetry(RequestTelemetry const&);
    RequestTelemetry();
};
