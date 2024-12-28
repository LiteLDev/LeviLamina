#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
struct PlayerMovementSettings;
// clang-format on

class PlayerMovementSettingsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk59c78a;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMovementSettingsManager& operator=(PlayerMovementSettingsManager const&);
    PlayerMovementSettingsManager(PlayerMovementSettingsManager const&);
    PlayerMovementSettingsManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerMovementSettingsManager(
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry
    );

    MCAPI ::PlayerMovementSettings const& getPlayerMovementSettings() const;

    MCAPI void setPlayerMovementSettings(::PlayerMovementSettings const& settings);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry);
    // NOLINTEND
};
