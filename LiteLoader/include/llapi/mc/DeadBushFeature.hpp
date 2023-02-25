/**
 * @file  DeadBushFeature.hpp
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
 * @brief MC class DeadBushFeature.
 *
 */
class DeadBushFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEADBUSHFEATURE
public:
    class DeadBushFeature& operator=(class DeadBushFeature const &) = delete;
    DeadBushFeature(class DeadBushFeature const &) = delete;
    DeadBushFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DeadBushFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@DeadBushFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};