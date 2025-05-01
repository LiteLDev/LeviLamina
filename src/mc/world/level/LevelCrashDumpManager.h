#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#include "mc/world/level/ILevelCrashDumpManager.h"

class LevelCrashDumpManager : public ::ILevelCrashDumpManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd9b23f;
    ::ll::UntypedStorage<1, 1> mUnkf2302b;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelCrashDumpManager& operator=(LevelCrashDumpManager const&);
    LevelCrashDumpManager(LevelCrashDumpManager const&);
    LevelCrashDumpManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelCrashDumpManager() /*override*/;

    // vIndex: 1
    virtual void setCrashDumpLogStringID(::CrashDumpLogStringID) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
