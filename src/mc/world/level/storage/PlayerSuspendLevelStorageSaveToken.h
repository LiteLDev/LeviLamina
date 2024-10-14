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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
