#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"

struct BlockMaterialInstance {
public:
    // prevent constructor by default
    BlockMaterialInstance(BlockMaterialInstance const&);
    BlockMaterialInstance();

public:
    // NOLINTBEGIN
    // symbol: ??4BlockMaterialInstance@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct BlockMaterialInstance& operator=(struct BlockMaterialInstance&&);

    // symbol: ??4BlockMaterialInstance@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct BlockMaterialInstance& operator=(struct BlockMaterialInstance const&);

    // symbol: ??1BlockMaterialInstance@@QEAA@XZ
    MCAPI ~BlockMaterialInstance();

    // symbol:
    // ?blockRenderLayerEnumValues@BlockMaterialInstance@@2V?$initializer_list@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockRenderLayer@@@std@@@std@@B
    MCAPI static std::initializer_list<std::pair<std::string const, ::BlockRenderLayer>> const
        blockRenderLayerEnumValues;

    // symbol:
    // ?renderLayerNameBiMap@BlockMaterialInstance@@2V?$BidirectionalUnorderedMap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockRenderLayer@@@@B
    MCAPI static class BidirectionalUnorderedMap<std::string, ::BlockRenderLayer> const renderLayerNameBiMap;

    // NOLINTEND
};
