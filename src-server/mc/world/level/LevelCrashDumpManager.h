#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/diagnostics/CrashDumpLogStringID.h"
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
    virtual ~LevelCrashDumpManager() /*override*/ = default;

    // vIndex: 1
    virtual void setCrashDumpLogStringID(::CrashDumpLogStringID crashDumpLogStringID) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setCrashDumpLogStringID(::CrashDumpLogStringID crashDumpLogStringID) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
