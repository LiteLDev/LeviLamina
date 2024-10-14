#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/components/BlockComponentBase.h"

struct BlockMaterialInstancesComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockMaterialInstancesComponent& operator=(BlockMaterialInstancesComponent const&);
    BlockMaterialInstancesComponent(BlockMaterialInstancesComponent const&);
    BlockMaterialInstancesComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockMaterialInstancesComponent() = default;

    MCAPI ::BlockRenderLayer getRenderLayer() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
