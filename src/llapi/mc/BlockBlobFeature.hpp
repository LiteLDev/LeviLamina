/**
 * @file  BlockBlobFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockBlobFeature.
 *
 */
class BlockBlobFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBLOBFEATURE
public:
    class BlockBlobFeature& operator=(class BlockBlobFeature const &) = delete;
    BlockBlobFeature(class BlockBlobFeature const &) = delete;
    BlockBlobFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockBlobFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@BlockBlobFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ??0BlockBlobFeature\@\@QEAA\@AEBVBlock\@\@H\@Z
     */
    MCAPI BlockBlobFeature(class Block const &, int);

};