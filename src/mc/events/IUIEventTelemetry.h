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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~IUIEventTelemetry();

    // NOLINTEND
};
