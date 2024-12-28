#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInputModeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8ff5d6;
    ::ll::UntypedStorage<4, 4> mUnk9e57d6;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInputModeComponent& operator=(PlayerInputModeComponent const&);
    PlayerInputModeComponent(PlayerInputModeComponent const&);
    PlayerInputModeComponent();
};
