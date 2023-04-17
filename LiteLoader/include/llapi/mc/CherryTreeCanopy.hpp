/**
 * @file  CherryTreeCanopy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CherryTreeCanopy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHERRYTREECANOPY
public:
    class CherryTreeCanopy& operator=(class CherryTreeCanopy const &) = delete;
    CherryTreeCanopy(class CherryTreeCanopy const &) = delete;
    CherryTreeCanopy() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?placeCanopy\@CherryTreeCanopy\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@AEBV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@3\@\@Z
     */
    virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &, std::vector<class BlockPos> const &) const;

//private:
    /**
     * @symbol ?_placeLayerOfLeaves\@CherryTreeCanopy\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEAVRandom\@\@AEBVBlockPos\@\@HAEBVBlock\@\@HAEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI void _placeLayerOfLeaves(class IBlockWorldGenAPI &, class Random &, class BlockPos const &, int, class Block const &, int, struct TreeHelper::TreeParams const &) const;
    /**
     * @symbol ?_placeLayerOfLeavesWithHangingLeavesBelow\@CherryTreeCanopy\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEAVRandom\@\@AEBVBlockPos\@\@HAEBVBlock\@\@HAEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI void _placeLayerOfLeavesWithHangingLeavesBelow(class IBlockWorldGenAPI &, class Random &, class BlockPos const &, int, class Block const &, int, struct TreeHelper::TreeParams const &) const;

private:

};
