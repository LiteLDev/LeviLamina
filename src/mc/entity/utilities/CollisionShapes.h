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

    MCAPI void addCollisionShape(class AABB const& aabb);

    MCAPI void addCollisionShape(class AABB const& aabb, class Block const& block, class BlockPos const& blockPos);

    MCAPI std::pair<class BlockPos, class Block const&> getBlockPosCurrentlyStandingOn(class AABB box) const;

    MCAPI struct CollisionShapes& operator=(struct CollisionShapes&&);

    MCAPI void reserve(uint64 size);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct CollisionShapes const&);

    // NOLINTEND
};
