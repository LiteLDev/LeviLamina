#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncedPlayerMovementSettings {

public:
    // prevent constructor by default
    SyncedPlayerMovementSettings& operator=(SyncedPlayerMovementSettings const&) = delete;
    SyncedPlayerMovementSettings(SyncedPlayerMovementSettings const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SyncedPlayerMovementSettings\@\@QEAA\@XZ
     */
    MCAPI SyncedPlayerMovementSettings();
    /**
     * @symbol ??0SyncedPlayerMovementSettings\@\@QEAA\@AEBUPlayerMovementSettings\@\@\@Z
     */
    MCAPI SyncedPlayerMovementSettings(struct PlayerMovementSettings const&);
    // NOLINTEND
};
