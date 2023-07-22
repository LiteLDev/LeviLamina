/**
 * @file  AcaciaTreeTrunk.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AcaciaTreeTrunk.
 *
 */
class AcaciaTreeTrunk {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACACIATREETRUNK
public:
    class AcaciaTreeTrunk& operator=(class AcaciaTreeTrunk const &) = delete;
    AcaciaTreeTrunk(class AcaciaTreeTrunk const &) = delete;
    AcaciaTreeTrunk() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AcaciaTreeTrunk();
    /**
     * @vftbl  1
     * @symbol  ?placeTrunk\@AcaciaTreeTrunk\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@HAEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@PEBVITreeCanopy\@\@\@Z
     */
    virtual class std::optional<class BlockPos> placeTrunk(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, int, class RenderParams &, struct TreeHelper::TreeParams const &, class ITreeCanopy const *) const;
    /**
     * @vftbl  2
     * @symbol  ?getTreeHeight\@AcaciaTreeTrunk\@\@UEBAHAEAVRandom\@\@\@Z
     */
    virtual int getTreeHeight(class Random &) const;

//private:
    /**
     * @symbol  ?_placeLeaningBranches\@AcaciaTreeTrunk\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@1AEAVRandom\@\@AEAVRenderParams\@\@HHHAEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI void _placeLeaningBranches(class IBlockWorldGenAPI &, class BlockPos const &, class BlockPos const &, class Random &, class RenderParams &, int, int, int, struct TreeHelper::TreeParams const &) const;
    /**
     * @symbol  ?_placeVerticalBranches\@AcaciaTreeTrunk\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@1AEAVRandom\@\@AEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI void _placeVerticalBranches(class IBlockWorldGenAPI &, class BlockPos const &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &) const;

private:

};