#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RequestTelemetry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REQUESTTELEMETRY
public:
    RequestTelemetry& operator=(RequestTelemetry const&) = delete;
    RequestTelemetry(RequestTelemetry const&)            = delete;
    RequestTelemetry()                                   = delete;
#endif

public:
};
