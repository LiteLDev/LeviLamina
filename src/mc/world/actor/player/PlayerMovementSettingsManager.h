#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class PlayerMovementSettingsManager {
public:
    // prevent constructor by default
    PlayerMovementSettingsManager& operator=(PlayerMovementSettingsManager const&);
    PlayerMovementSettingsManager(PlayerMovementSettingsManager const&);
    PlayerMovementSettingsManager();

public:
    // NOLINTBEGIN
    // symbol: ??0PlayerMovementSettingsManager@@QEAA@AEBV?$not_null@V?$StackRefResult@VEntityRegistry@@@@@gsl@@@Z
    MCAPI explicit PlayerMovementSettingsManager(gsl::not_null<class StackRefResult<class EntityRegistry>> const&);

    // symbol: ?getPlayerMovementSettings@PlayerMovementSettingsManager@@QEBAAEBUPlayerMovementSettings@@XZ
    MCAPI struct PlayerMovementSettings const& getPlayerMovementSettings() const;

    // symbol: ?setPlayerMovementSettings@PlayerMovementSettingsManager@@QEAAXAEBUPlayerMovementSettings@@@Z
    MCAPI void setPlayerMovementSettings(struct PlayerMovementSettings const&);

    // NOLINTEND
};
