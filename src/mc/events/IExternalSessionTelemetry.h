#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IExternalSessionTelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IExternalSessionTelemetry() = default;

    virtual void fireEventReceivedUniqueWebSessionId(::std::string const& webSessionId) = 0;

    virtual void fireEventReceivedUniqueLauncherSessionId(::std::string const& launcherSessionId) = 0;
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
