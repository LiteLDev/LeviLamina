#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CollisionShapes {
public:
    // prevent constructor by default
    CollisionShapes& operator=(CollisionShapes const&);
    CollisionShapes();

public:
    // NOLINTBEGIN
    // symbol: ??0CollisionShapes@@QEAA@AEBU0@@Z
    MCAPI CollisionShapes(struct CollisionShapes const&);

    // symbol: ?addCollisionShape@CollisionShapes@@QEAAXAEBVAABB@@@Z
    MCAPI void addCollisionShape(class AABB const&);

    // symbol: ?addCollisionShape@CollisionShapes@@QEAAXAEBVAABB@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI void addCollisionShape(class AABB const&, class Block const&, class BlockPos const&);

    // symbol: ?getBlockPosCurrentlyStandingOn@CollisionShapes@@QEBA?AU?$pair@VBlockPos@@AEBVBlock@@@std@@VAABB@@@Z
    MCAPI std::pair<class BlockPos, class Block const&> getBlockPosCurrentlyStandingOn(class AABB) const;

    // symbol: ??4CollisionShapes@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct CollisionShapes& operator=(struct CollisionShapes&&);

    // symbol: ?reserve@CollisionShapes@@QEAAX_K@Z
    MCAPI void reserve(uint64);

    // symbol: ?size@CollisionShapes@@QEBA_KXZ
    MCAPI uint64 size() const;

    // NOLINTEND
};
