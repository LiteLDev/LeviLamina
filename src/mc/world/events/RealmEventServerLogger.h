#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/IRealmEventLogger.h"

// auto generated forward declare list
// clang-format off
class LevelEventCoordinator;
// clang-format on

class RealmEventServerLogger : public ::IRealmEventLogger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelEventCoordinator&> mLevelEventCoordinator;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmEventServerLogger& operator=(RealmEventServerLogger const&);
    RealmEventServerLogger(RealmEventServerLogger const&);
    RealmEventServerLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void logEvent(::std::string const& message) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $logEvent(::std::string const& message);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
