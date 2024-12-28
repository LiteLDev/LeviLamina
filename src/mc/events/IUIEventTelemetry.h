#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IUIEventTelemetry {
public:
    // prevent constructor by default
    IUIEventTelemetry& operator=(IUIEventTelemetry const&);
    IUIEventTelemetry(IUIEventTelemetry const&);
    IUIEventTelemetry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IUIEventTelemetry();

    // vIndex: 1
    virtual void
    fireScreenLoadTimeUpdateEvent(uint const&, ::std::string const&, ::std::chrono::nanoseconds, ::std::string const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
