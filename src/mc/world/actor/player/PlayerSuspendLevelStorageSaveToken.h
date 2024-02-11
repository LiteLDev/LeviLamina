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
    // symbol: ??0PlayerSuspendLevelStorageSaveToken@@QEAA@AEAVEntityContext@@@Z
    MCAPI explicit PlayerSuspendLevelStorageSaveToken(class EntityContext&);

    // symbol: ??0PlayerSuspendLevelStorageSaveToken@@QEAA@$$QEAV0@@Z
    MCAPI PlayerSuspendLevelStorageSaveToken(class PlayerSuspendLevelStorageSaveToken&&);

    // symbol: ??1PlayerSuspendLevelStorageSaveToken@@QEAA@XZ
    MCAPI ~PlayerSuspendLevelStorageSaveToken();

    // NOLINTEND
};
