#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/ILevelCrashDumpManager.h"
#include "mc/enums/CrashDumpLogStringID.h"

class LevelCrashDumpManager : public ::ILevelCrashDumpManager {
public:
    // prevent constructor by default
    LevelCrashDumpManager& operator=(LevelCrashDumpManager const&);
    LevelCrashDumpManager(LevelCrashDumpManager const&);
    LevelCrashDumpManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LevelCrashDumpManager@@UEAA@XZ
    virtual ~LevelCrashDumpManager();

    // vIndex: 1, symbol: ?setCrashDumpLogStringID@LevelCrashDumpManager@@UEBAXW4CrashDumpLogStringID@@@Z
    virtual void setCrashDumpLogStringID(::CrashDumpLogStringID) const;

    // NOLINTEND
};
