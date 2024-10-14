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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
