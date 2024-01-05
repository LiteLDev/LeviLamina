#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/ServerAuthMovementMode.h"

struct SyncedPlayerMovementSettings {
public:
    ServerAuthMovementMode AuthorityMode;
    int                    mRewindHistorySize;
    bool                   ServerAuthBlockBreaking;

    // prevent constructor by default
    SyncedPlayerMovementSettings& operator=(SyncedPlayerMovementSettings const&);
    SyncedPlayerMovementSettings(SyncedPlayerMovementSettings const&);

public:
    // NOLINTBEGIN
    // symbol: ??0SyncedPlayerMovementSettings@@QEAA@XZ
    MCAPI SyncedPlayerMovementSettings();

    // symbol: ??0SyncedPlayerMovementSettings@@QEAA@AEBUPlayerMovementSettings@@@Z
    MCAPI explicit SyncedPlayerMovementSettings(struct PlayerMovementSettings const& settings);

    // NOLINTEND
};
