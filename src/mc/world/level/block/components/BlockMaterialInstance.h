#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"

struct BlockMaterialInstance {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMATERIALINSTANCE
public:
    BlockMaterialInstance(BlockMaterialInstance const&) = delete;
    BlockMaterialInstance()                             = delete;
#endif

public:
    /**
     * @symbol ??4BlockMaterialInstance\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockMaterialInstance& operator=(struct BlockMaterialInstance&&);
    /**
     * @symbol ??4BlockMaterialInstance\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct BlockMaterialInstance& operator=(struct BlockMaterialInstance const&);
    /**
     * @symbol ??1BlockMaterialInstance\@\@QEAA\@XZ
     */
    MCAPI ~BlockMaterialInstance();
    /**
     * @symbol
     * ?blockRenderLayerEnumValues\@BlockMaterialInstance\@\@2V?$initializer_list\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockRenderLayer\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static class std::initializer_list<struct std::pair<std::string, enum class BlockRenderLayer>> const
        blockRenderLayerEnumValues;
    /**
     * @symbol
     * ?renderLayerNameBiMap\@BlockMaterialInstance\@\@2V?$BidirectionalUnorderedMap\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockRenderLayer\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<std::string, enum class BlockRenderLayer> const renderLayerNameBiMap;
};
