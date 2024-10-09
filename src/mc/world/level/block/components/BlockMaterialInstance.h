#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/level/block/BlockRenderLayer.h"

struct BlockMaterialInstance {
public:
    // prevent constructor by default
    BlockMaterialInstance(BlockMaterialInstance const&);
    BlockMaterialInstance();

public:
    // NOLINTBEGIN
    MCAPI struct BlockMaterialInstance& operator=(struct BlockMaterialInstance&&);

    MCAPI struct BlockMaterialInstance& operator=(struct BlockMaterialInstance const&);

    MCAPI ~BlockMaterialInstance();

    MCAPI static std::initializer_list<std::pair<std::string const, ::BlockRenderLayer>> const
        blockRenderLayerEnumValues;

    MCAPI static class BidirectionalUnorderedMap<std::string, ::BlockRenderLayer> const renderLayerNameBiMap;

    // NOLINTEND
};
