#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockCollisionsSystem {

struct BlockCollisionResolutionVectorComponent {
public:
    // prevent constructor by default
    BlockCollisionResolutionVectorComponent& operator=(BlockCollisionResolutionVectorComponent const&);
    BlockCollisionResolutionVectorComponent(BlockCollisionResolutionVectorComponent const&);
    BlockCollisionResolutionVectorComponent();
};

}; // namespace BlockCollisionsSystem
