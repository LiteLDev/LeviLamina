/**
 * @file  FancyTreeTrunk.hpp
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
 * @brief MC class FancyTreeTrunk.
 *
 */
class FancyTreeTrunk {

#define AFTER_EXTRA
// Add Member There
public:
class FoliageCoords {
public:
    FoliageCoords() = delete;
    FoliageCoords(FoliageCoords const&) = delete;
    FoliageCoords(FoliageCoords const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FANCYTREETRUNK
public:
    class FancyTreeTrunk& operator=(class FancyTreeTrunk const &) = delete;
    FancyTreeTrunk(class FancyTreeTrunk const &) = delete;
    FancyTreeTrunk() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FancyTreeTrunk();
    /**
     * @vftbl  1
     * @symbol  ?placeTrunk\@FancyTreeTrunk\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@HAEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@PEBVITreeCanopy\@\@\@Z
     */
    virtual class std::optional<class BlockPos> placeTrunk(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, int, class RenderParams &, struct TreeHelper::TreeParams const &, class ITreeCanopy const *) const;
    /**
     * @vftbl  2
     * @symbol  ?getTreeHeight\@FancyTreeTrunk\@\@UEBAHAEAVRandom\@\@\@Z
     */
    virtual int getTreeHeight(class Random &) const;

//private:
    /**
     * @symbol  ?_checkLine\@FancyTreeTrunk\@\@AEBAHAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@1AEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI int _checkLine(class IBlockWorldGenAPI &, class BlockPos const &, class BlockPos const &, struct TreeHelper::TreeParams const &) const;
    /**
     * @symbol  ?_placeLimb\@FancyTreeTrunk\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void _placeLimb(class IBlockWorldGenAPI &, class BlockPos const &, class BlockPos const &) const;

private:

};