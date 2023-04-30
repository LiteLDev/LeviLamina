/**
 * @file  CherryTreeTrunk.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CherryTreeTrunk {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHERRYTREETRUNK
public:
    class CherryTreeTrunk& operator=(class CherryTreeTrunk const &) = delete;
    CherryTreeTrunk(class CherryTreeTrunk const &) = delete;
    CherryTreeTrunk() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?placeTrunk\@CherryTreeTrunk\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@HAEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@PEBVITreeCanopy\@\@\@Z
     */
    virtual class std::optional<class BlockPos> placeTrunk(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, int, class RenderParams &, struct TreeHelper::TreeParams const &, class ITreeCanopy const *) const;
    /**
     * @vftbl 2
     * @symbol ?getTreeHeight\@CherryTreeTrunk\@\@UEBAHAEAVRandom\@\@\@Z
     */
    virtual int getTreeHeight(class Random &) const;

//private:
    /**
     * @symbol ?_generateBranch\@CherryTreeTrunk\@\@AEBA?AVBlockPos\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@1AEAVRandom\@\@HV2\@AEBUTreeParams\@TreeHelper\@\@3H_N\@Z
     */
    MCAPI class BlockPos _generateBranch(class IBlockWorldGenAPI &, class Block const &, class Block const &, class Random &, int, class BlockPos, struct TreeHelper::TreeParams const &, class BlockPos, int, bool) const;

private:

};
