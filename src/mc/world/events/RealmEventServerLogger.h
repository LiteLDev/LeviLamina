#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/IRealmEventLogger.h"

class RealmEventServerLogger : public ::IRealmEventLogger {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void logEvent(::std::string const& message) /*override*/;

    // vIndex: 0
    virtual ~RealmEventServerLogger() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $logEvent(::std::string const& message);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
