#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IUIEventTelemetry {
public:
    // prevent constructor by default
    IUIEventTelemetry& operator=(IUIEventTelemetry const&);
    IUIEventTelemetry(IUIEventTelemetry const&);
    IUIEventTelemetry();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IUIEventTelemetry@@UEAA@XZ
    virtual ~IUIEventTelemetry() = default;

    // NOLINTEND
};
