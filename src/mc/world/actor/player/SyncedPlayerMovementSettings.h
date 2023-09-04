#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/ServerAuthMovementMode.h"

struct SyncedPlayerMovementSettings {
public:
    ServerAuthMovementMode AuthorityMode;
    int                    mRewindHistorySize;
    bool                   ServerAuthBlockBreaking;

    // prevent constructor by default
    SyncedPlayerMovementSettings& operator=(SyncedPlayerMovementSettings const&) = delete;
    SyncedPlayerMovementSettings(SyncedPlayerMovementSettings const&)            = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0SyncedPlayerMovementSettings@@QEAA@XZ
    MCAPI SyncedPlayerMovementSettings();

    // symbol: ??0SyncedPlayerMovementSettings@@QEAA@AEBUPlayerMovementSettings@@@Z
    MCAPI SyncedPlayerMovementSettings(struct PlayerMovementSettings const&);

    // NOLINTEND
};
