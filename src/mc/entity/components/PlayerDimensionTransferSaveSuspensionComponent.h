#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/PlayerSuspendLevelStorageSaveToken.h"

class PlayerDimensionTransferSaveSuspensionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::PlayerSuspendLevelStorageSaveToken const> mPlayerSuspendLevelStorageSaveToken;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDimensionTransferSaveSuspensionComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerDimensionTransferSaveSuspensionComponent(
        ::PlayerSuspendLevelStorageSaveToken playerSuspendLevelStorageSaveToken
    );

    MCAPI ~PlayerDimensionTransferSaveSuspensionComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PlayerSuspendLevelStorageSaveToken playerSuspendLevelStorageSaveToken);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
