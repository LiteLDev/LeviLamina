#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HopperComponent {
public:
    // prevent constructor by default
    HopperComponent& operator=(HopperComponent const&);
    HopperComponent(HopperComponent const&);

public:
    // NOLINTBEGIN
    MCAPI HopperComponent();

    MCAPI class BlockPos getLastPosition() const;

    MCAPI bool pullInItems(class Actor& owner);

    // NOLINTEND
};
