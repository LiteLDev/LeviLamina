#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/IRealmEventLogger.h"

class RealmEventServerLogger : public ::IRealmEventLogger {
public:
    // prevent constructor by default
    RealmEventServerLogger& operator=(RealmEventServerLogger const&);
    RealmEventServerLogger(RealmEventServerLogger const&);
    RealmEventServerLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void logEvent(::std::string const& message) /*override*/;

    // vIndex: 0
    virtual ~RealmEventServerLogger() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
