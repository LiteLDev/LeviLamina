#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/IRealmEventLogger.h"

class RealmEventServerLogger : public ::IRealmEventLogger {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void logEvent(::std::string const& message) /*override*/;

    virtual ~RealmEventServerLogger() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $logEvent(::std::string const& message);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
