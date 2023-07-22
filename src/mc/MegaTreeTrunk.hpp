/**
 * @file  MegaTreeTrunk.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MegaTreeTrunk.
 *
 */
class MegaTreeTrunk {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEGATREETRUNK
public:
    class MegaTreeTrunk& operator=(class MegaTreeTrunk const &) = delete;
    MegaTreeTrunk(class MegaTreeTrunk const &) = delete;
    MegaTreeTrunk() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MegaTreeTrunk();
    /**
     * @vftbl  1
     * @symbol  ?placeTrunk\@MegaTreeTrunk\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@HAEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@PEBVITreeCanopy\@\@\@Z
     */
    virtual class std::optional<class BlockPos> placeTrunk(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, int, class RenderParams &, struct TreeHelper::TreeParams const &, class ITreeCanopy const *) const;
    /**
     * @vftbl  2
     * @symbol  ?getTreeHeight\@MegaTreeTrunk\@\@UEBAHAEAVRandom\@\@\@Z
     */
    virtual int getTreeHeight(class Random &) const;

//private:
    /**
     * @symbol  ?_prepareSpawn\@MegaTreeTrunk\@\@AEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@HAEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI bool _prepareSpawn(class IBlockWorldGenAPI &, class BlockPos const &, int, struct TreeHelper::TreeParams const &) const;

private:

};