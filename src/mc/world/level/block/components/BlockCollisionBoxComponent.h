#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockAABBComponentData.h"

struct BlockCollisionBoxComponent : public ::BlockAABBComponentData {
public:
    // prevent constructor by default
    BlockCollisionBoxComponent& operator=(BlockCollisionBoxComponent const&);
    BlockCollisionBoxComponent(BlockCollisionBoxComponent const&);
    BlockCollisionBoxComponent();

public:
    // NOLINTBEGIN
    // symbol: ?usesNewComponentStorage@BlockCollisionBoxComponent@@SA_NXZ
    MCAPI static bool usesNewComponentStorage();

    // NOLINTEND
};
