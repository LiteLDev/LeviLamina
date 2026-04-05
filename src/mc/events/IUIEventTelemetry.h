#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IUIEventTelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IUIEventTelemetry() = default;

    virtual void fireScreenLoadTimeUpdateEvent(
        uint const&                userId,
        ::std::string const&       screenName,
        ::std::chrono::nanoseconds duration,
        ::std::string const&       loadInstanceId
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
