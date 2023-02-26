/**
 * @file  MangroveTreeTrunk.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MangroveTreeTrunk.
 *
 */
class MangroveTreeTrunk {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MANGROVETREETRUNK
public:
    class MangroveTreeTrunk& operator=(class MangroveTreeTrunk const &) = delete;
    MangroveTreeTrunk(class MangroveTreeTrunk const &) = delete;
    MangroveTreeTrunk() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MangroveTreeTrunk();
    /**
     * @vftbl  1
     * @symbol  ?placeTrunk\@MangroveTreeTrunk\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@HAEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@PEBVITreeCanopy\@\@\@Z
     */
    virtual class std::optional<class BlockPos> placeTrunk(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, int, class RenderParams &, struct TreeHelper::TreeParams const &, class ITreeCanopy const *) const;
    /**
     * @vftbl  2
     * @symbol  ?getTreeHeight\@MangroveTreeTrunk\@\@UEBAHAEAVRandom\@\@\@Z
     */
    virtual int getTreeHeight(class Random &) const;

//private:
    /**
     * @symbol  ?_placeBranch\@MangroveTreeTrunk\@\@AEBAXAEAVIBlockWorldGenAPI\@\@PEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAVRandom\@\@HAEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@AEAVBlockPos\@\@HEHHPEBVBlock\@\@\@Z
     */
    MCAPI void _placeBranch(class IBlockWorldGenAPI &, std::vector<class BlockPos> *, class Random &, int, class RenderParams &, struct TreeHelper::TreeParams const &, class BlockPos &, int, unsigned char, int, int, class Block const *) const;

private:

};