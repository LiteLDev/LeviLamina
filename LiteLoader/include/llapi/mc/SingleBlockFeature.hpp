/**
 * @file  SingleBlockFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SingleBlockFeature.
 *
 */
class SingleBlockFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SINGLEBLOCKFEATURE
public:
    class SingleBlockFeature& operator=(class SingleBlockFeature const &) = delete;
    SingleBlockFeature(class SingleBlockFeature const &) = delete;
    SingleBlockFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SingleBlockFeature();
    /**
     * @hash   1407891548
     * @vftbl  1
     * @symbol  ?place\@SingleBlockFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;

//private:
    /**
     * @hash   2008768209
     * @symbol  ?_mayAttach\@SingleBlockFeature\@\@AEBAPEBVBlock\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Block const * _mayAttach(class IBlockWorldGenAPI &, class BlockPos const &) const;

private:

};