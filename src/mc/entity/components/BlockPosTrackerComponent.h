#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPosTrackerComponent {
public:
    // prevent constructor by default
    BlockPosTrackerComponent& operator=(BlockPosTrackerComponent const&);
    BlockPosTrackerComponent(BlockPosTrackerComponent const&);
    BlockPosTrackerComponent();

public:
    // NOLINTBEGIN
    MCAPI BlockPosTrackerComponent(bool onGround, class BlockPos const& pos);

    MCAPI void onRemove(class Actor& owner);

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
