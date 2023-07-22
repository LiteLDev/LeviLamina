/**
 * @file  SeaPickleFeature.hpp
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
 * @brief MC class SeaPickleFeature.
 *
 */
class SeaPickleFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAPICKLEFEATURE
public:
    class SeaPickleFeature& operator=(class SeaPickleFeature const &) = delete;
    SeaPickleFeature(class SeaPickleFeature const &) = delete;
    SeaPickleFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SeaPickleFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@SeaPickleFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};