#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncedPlayerMovementSettings {
public:
    // prevent constructor by default
    SyncedPlayerMovementSettings& operator=(SyncedPlayerMovementSettings const&);
    SyncedPlayerMovementSettings(SyncedPlayerMovementSettings const&);

public:
    // NOLINTBEGIN
    // symbol: ??0SyncedPlayerMovementSettings@@QEAA@AEBUPlayerMovementSettings@@@Z
    MCAPI explicit SyncedPlayerMovementSettings(struct PlayerMovementSettings const&);

    // symbol: ??0SyncedPlayerMovementSettings@@QEAA@XZ
    MCAPI SyncedPlayerMovementSettings();

    // NOLINTEND
};
