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
    MCAPI explicit PlayerMovementSettingsManager(gsl::not_null<class StackRefResult<class EntityRegistry>> const&);

    MCAPI struct PlayerMovementSettings const& getPlayerMovementSettings() const;

    MCAPI void setPlayerMovementSettings(struct PlayerMovementSettings const&);

    // NOLINTEND
};
