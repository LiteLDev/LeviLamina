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
    // symbol: ??0PlayerDimensionTransferSaveSuspensionComponent@@QEAA@VPlayerSuspendLevelStorageSaveToken@@@Z
    MCAPI explicit PlayerDimensionTransferSaveSuspensionComponent(class PlayerSuspendLevelStorageSaveToken);

    // symbol: ??1PlayerDimensionTransferSaveSuspensionComponent@@QEAA@XZ
    MCAPI ~PlayerDimensionTransferSaveSuspensionComponent();

    // NOLINTEND
};
