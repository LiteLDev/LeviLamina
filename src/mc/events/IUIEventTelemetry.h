#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IUIEventTelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IUIEventTelemetry() = default;

    virtual void fireScreenLoadTimeUpdateEvent(
        uint const&,
        ::std::string const&,
        ::std::chrono::nanoseconds,
        ::std::string const&
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
