/**
 * @file  SandFeature.hpp
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
 * @brief MC class SandFeature.
 *
 */
class SandFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SANDFEATURE
public:
    class SandFeature& operator=(class SandFeature const &) = delete;
    SandFeature(class SandFeature const &) = delete;
    SandFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SandFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@SandFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ??0SandFeature\@\@QEAA\@AEBVBlock\@\@H\@Z
     */
    MCAPI SandFeature(class Block const &, int);

};