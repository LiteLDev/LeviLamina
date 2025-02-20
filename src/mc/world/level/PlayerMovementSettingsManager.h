#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    MCAPI ::PlayerMovementSettings const& getPlayerMovementSettings() const;
    // NOLINTEND
};
