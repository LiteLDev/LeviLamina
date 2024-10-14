#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

struct BlockFrictionComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockFrictionComponent& operator=(BlockFrictionComponent const&);
    BlockFrictionComponent(BlockFrictionComponent const&);
    BlockFrictionComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockFrictionComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
