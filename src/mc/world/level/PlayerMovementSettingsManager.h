#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

class PlayerMovementSettingsManager {
public:
    // prevent constructor by default
    PlayerMovementSettingsManager& operator=(PlayerMovementSettingsManager const&);
    PlayerMovementSettingsManager(PlayerMovementSettingsManager const&);
    PlayerMovementSettingsManager();

public:
    // NOLINTBEGIN
    MCAPI explicit PlayerMovementSettingsManager(
        gsl::not_null<class StackRefResult<class EntityRegistry>> const& entityRegistry
    );

    MCAPI struct PlayerMovementSettings const& getPlayerMovementSettings() const;

    MCAPI void setPlayerMovementSettings(struct PlayerMovementSettings const& settings);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
