#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockCollisionsSystem {

struct BlockCollisionResolutionVectorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk9c36e9;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCollisionResolutionVectorComponent& operator=(BlockCollisionResolutionVectorComponent const&);
    BlockCollisionResolutionVectorComponent(BlockCollisionResolutionVectorComponent const&);
    BlockCollisionResolutionVectorComponent();
};

} // namespace BlockCollisionsSystem
