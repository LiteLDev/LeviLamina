#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

struct BlockFlammableComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockFlammableComponent& operator=(BlockFlammableComponent const&);
    BlockFlammableComponent(BlockFlammableComponent const&);
    BlockFlammableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockFlammableComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
