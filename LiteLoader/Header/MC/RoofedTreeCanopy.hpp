/**
 * @file  RoofedTreeCanopy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RoofedTreeCanopy.
 *
 */
class RoofedTreeCanopy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROOFEDTREECANOPY
public:
    class RoofedTreeCanopy& operator=(class RoofedTreeCanopy const &) = delete;
    RoofedTreeCanopy(class RoofedTreeCanopy const &) = delete;
    RoofedTreeCanopy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   863779267
     */
    virtual ~RoofedTreeCanopy();
    /**
     * @vftbl  1
     * @symbol ?placeCanopy@RoofedTreeCanopy@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@AEBUTreeParams@TreeHelper@@AEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@3@@Z
     * @hash   -83896035
     */
    virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &, std::vector<class BlockPos> const &) const;

};