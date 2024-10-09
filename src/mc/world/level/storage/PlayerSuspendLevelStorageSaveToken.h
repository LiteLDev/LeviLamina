#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerSuspendLevelStorageSaveToken {
public:
    // prevent constructor by default
    PlayerSuspendLevelStorageSaveToken& operator=(PlayerSuspendLevelStorageSaveToken const&);
    PlayerSuspendLevelStorageSaveToken(PlayerSuspendLevelStorageSaveToken const&);
    PlayerSuspendLevelStorageSaveToken();

public:
    // NOLINTBEGIN
    MCAPI explicit PlayerSuspendLevelStorageSaveToken(class EntityContext& entity);

    MCAPI PlayerSuspendLevelStorageSaveToken(class PlayerSuspendLevelStorageSaveToken&&);

    MCAPI ~PlayerSuspendLevelStorageSaveToken();

    // NOLINTEND
};
