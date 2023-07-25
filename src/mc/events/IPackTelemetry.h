#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPackTelemetry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IPACKTELEMETRY
public:
    IPackTelemetry& operator=(IPackTelemetry const&) = delete;
    IPackTelemetry(IPackTelemetry const&)            = delete;
    IPackTelemetry()                                 = delete;
#endif

public:
};
