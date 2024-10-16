#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#include "mc/world/level/ILevelCrashDumpManager.h"

class LevelCrashDumpManager : public ::ILevelCrashDumpManager {
public:
    // prevent constructor by default
    LevelCrashDumpManager& operator=(LevelCrashDumpManager const&);
    LevelCrashDumpManager(LevelCrashDumpManager const&);
    LevelCrashDumpManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelCrashDumpManager();

    // vIndex: 1
    virtual void setCrashDumpLogStringID(::CrashDumpLogStringID crashDumpLogStringID) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI void setCrashDumpLogStringID$(::CrashDumpLogStringID crashDumpLogStringID) const;

    // NOLINTEND
};
