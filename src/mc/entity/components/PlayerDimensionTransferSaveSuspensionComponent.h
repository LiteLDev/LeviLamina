#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PlayerSuspendLevelStorageSaveToken;
// clang-format on

class PlayerDimensionTransferSaveSuspensionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk38f85b;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDimensionTransferSaveSuspensionComponent& operator=(PlayerDimensionTransferSaveSuspensionComponent const&);
    PlayerDimensionTransferSaveSuspensionComponent(PlayerDimensionTransferSaveSuspensionComponent const&);
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
