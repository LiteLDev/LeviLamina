#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerActionAcceptanceComponent {
public:
    // prevent constructor by default
    PlayerActionAcceptanceComponent& operator=(PlayerActionAcceptanceComponent const&);
    PlayerActionAcceptanceComponent(PlayerActionAcceptanceComponent const&);
    PlayerActionAcceptanceComponent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerActionAcceptanceComponent();

    // NOLINTEND
};
