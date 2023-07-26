#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerMovementSettingsComponent {

public:
    // prevent constructor by default
    PlayerMovementSettingsComponent& operator=(PlayerMovementSettingsComponent const&) = delete;
    PlayerMovementSettingsComponent(PlayerMovementSettingsComponent const&)            = delete;
    PlayerMovementSettingsComponent()                                                  = delete;
};
