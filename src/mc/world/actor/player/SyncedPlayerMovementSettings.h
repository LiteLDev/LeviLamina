#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncedPlayerMovementSettings {
public:
    // prevent constructor by default
    SyncedPlayerMovementSettings& operator=(SyncedPlayerMovementSettings const&);
    SyncedPlayerMovementSettings(SyncedPlayerMovementSettings const&);

public:
    // NOLINTBEGIN
    MCAPI SyncedPlayerMovementSettings();

    MCAPI explicit SyncedPlayerMovementSettings(struct PlayerMovementSettings const& settings);

    // NOLINTEND
};
