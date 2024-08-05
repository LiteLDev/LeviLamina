#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CollisionShapes {
public:
    // prevent constructor by default
    CollisionShapes& operator=(CollisionShapes const&);
    CollisionShapes();

public:
    // NOLINTBEGIN
    MCAPI CollisionShapes(struct CollisionShapes const&);

    MCAPI void addCollisionShape(class AABB const&);

    MCAPI void addCollisionShape(class AABB const&, class Block const&, class BlockPos const&);

    MCAPI std::pair<class BlockPos, class Block const&> getBlockPosCurrentlyStandingOn(class AABB) const;

    MCAPI struct CollisionShapes& operator=(struct CollisionShapes&&);

    MCAPI void reserve(uint64);

    // NOLINTEND
};
