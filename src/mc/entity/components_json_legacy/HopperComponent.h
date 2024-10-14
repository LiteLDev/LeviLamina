#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/Hopper.h"
#include "mc/world/level/BlockPos.h"

class HopperComponent : public Hopper {
public:
    class BlockPos mLastPosition;

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
