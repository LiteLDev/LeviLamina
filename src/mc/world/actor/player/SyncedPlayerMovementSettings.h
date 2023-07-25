#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncedPlayerMovementSettings {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCEDPLAYERMOVEMENTSETTINGS
public:
    SyncedPlayerMovementSettings& operator=(SyncedPlayerMovementSettings const&) = delete;
    SyncedPlayerMovementSettings(SyncedPlayerMovementSettings const&)            = delete;
#endif

public:
    /**
     * @symbol ??0SyncedPlayerMovementSettings\@\@QEAA\@AEBUPlayerMovementSettings\@\@\@Z
     */
    MCAPI SyncedPlayerMovementSettings(struct PlayerMovementSettings const&);
    /**
     * @symbol ??0SyncedPlayerMovementSettings\@\@QEAA\@XZ
     */
    MCAPI SyncedPlayerMovementSettings();
};
