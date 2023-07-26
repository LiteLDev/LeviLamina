/**
 * @file  BlockMaterialInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockMaterialInstance.
 *
 */
struct BlockMaterialInstance {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMATERIALINSTANCE
public:
    BlockMaterialInstance(struct BlockMaterialInstance const &) = delete;
    BlockMaterialInstance() = delete;
#endif

public:
    /**
     * @symbol  ??4BlockMaterialInstance\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct BlockMaterialInstance & operator=(struct BlockMaterialInstance const &);
    /**
     * @symbol  ??4BlockMaterialInstance\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockMaterialInstance & operator=(struct BlockMaterialInstance &&);
    /**
     * @symbol  ??1BlockMaterialInstance\@\@QEAA\@XZ
     */
    MCAPI ~BlockMaterialInstance();
    /**
     * @symbol  ?blockRenderLayerEnumValues\@BlockMaterialInstance\@\@2V?$initializer_list\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockRenderLayer\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static class std::initializer_list<struct std::pair<std::string, enum class BlockRenderLayer>> const blockRenderLayerEnumValues;
    /**
     * @symbol  ?renderLayerNameBiMap\@BlockMaterialInstance\@\@2V?$BidirectionalUnorderedMap\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockRenderLayer\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<std::string, enum class BlockRenderLayer> const renderLayerNameBiMap;

};