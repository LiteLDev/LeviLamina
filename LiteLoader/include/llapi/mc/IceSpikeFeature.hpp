/**
 * @file  IceSpikeFeature.hpp
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
 * @brief MC class IceSpikeFeature.
 *
 */
class IceSpikeFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICESPIKEFEATURE
public:
    class IceSpikeFeature& operator=(class IceSpikeFeature const &) = delete;
    IceSpikeFeature(class IceSpikeFeature const &) = delete;
    IceSpikeFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~IceSpikeFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@IceSpikeFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @symbol  ?_isValidPlaceBlock\@IceSpikeFeature\@\@AEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _isValidPlaceBlock(class Block const &) const;

private:

};