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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class EntityContext& entity);

    MCAPI void* ctor$(class PlayerSuspendLevelStorageSaveToken&&);

    MCAPI void dtor$();

    // NOLINTEND
};
