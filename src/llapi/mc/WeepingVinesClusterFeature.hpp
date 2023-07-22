/**
 * @file  WeepingVinesClusterFeature.hpp
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
 * @brief MC class WeepingVinesClusterFeature.
 *
 */
class WeepingVinesClusterFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEEPINGVINESCLUSTERFEATURE
public:
    class WeepingVinesClusterFeature& operator=(class WeepingVinesClusterFeature const &) = delete;
    WeepingVinesClusterFeature(class WeepingVinesClusterFeature const &) = delete;
    WeepingVinesClusterFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WeepingVinesClusterFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@WeepingVinesClusterFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @symbol  ?_isInvalidPlacementLocation\@WeepingVinesClusterFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _isInvalidPlacementLocation(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?_placeRoofNetherWart\@WeepingVinesClusterFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _placeRoofNetherWart(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ?_placeRoofWeepingVines\@WeepingVinesClusterFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _placeRoofWeepingVines(class BlockSource &, class BlockPos const &, class Random &) const;

private:

};