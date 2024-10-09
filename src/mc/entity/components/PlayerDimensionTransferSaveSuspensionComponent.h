#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerDimensionTransferSaveSuspensionComponent {
public:
    // prevent constructor by default
    PlayerDimensionTransferSaveSuspensionComponent& operator=(PlayerDimensionTransferSaveSuspensionComponent const&);
    PlayerDimensionTransferSaveSuspensionComponent(PlayerDimensionTransferSaveSuspensionComponent const&);
    PlayerDimensionTransferSaveSuspensionComponent();

public:
    // NOLINTBEGIN
    MCAPI explicit PlayerDimensionTransferSaveSuspensionComponent(
        class PlayerSuspendLevelStorageSaveToken playerSuspendLevelStorageSaveToken
    );

    MCAPI ~PlayerDimensionTransferSaveSuspensionComponent();

    // NOLINTEND
};
