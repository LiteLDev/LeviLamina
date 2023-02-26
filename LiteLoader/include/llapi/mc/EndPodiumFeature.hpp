/**
 * @file  EndPodiumFeature.hpp
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
 * @brief MC class EndPodiumFeature.
 *
 */
class EndPodiumFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDPODIUMFEATURE
public:
    class EndPodiumFeature& operator=(class EndPodiumFeature const &) = delete;
    EndPodiumFeature(class EndPodiumFeature const &) = delete;
    EndPodiumFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EndPodiumFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@EndPodiumFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ??0EndPodiumFeature\@\@QEAA\@_N\@Z
     */
    MCAPI EndPodiumFeature(bool);
    /**
     * @symbol  ?CORNER_ROUNDING\@EndPodiumFeature\@\@2MB
     */
    MCAPI static float const CORNER_ROUNDING;
    /**
     * @symbol  ?END_PODIUM_CHUNK_POSITION\@EndPodiumFeature\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const END_PODIUM_CHUNK_POSITION;
    /**
     * @symbol  ?END_PODIUM_LOCATION\@EndPodiumFeature\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const END_PODIUM_LOCATION;
    /**
     * @symbol  ?PODIUM_PILLAR_HEIGHT\@EndPodiumFeature\@\@2HB
     */
    MCAPI static int const PODIUM_PILLAR_HEIGHT;
    /**
     * @symbol  ?PODIUM_RADIUS\@EndPodiumFeature\@\@2HB
     */
    MCAPI static int const PODIUM_RADIUS;
    /**
     * @symbol  ?RIM_RADIUS\@EndPodiumFeature\@\@2HB
     */
    MCAPI static int const RIM_RADIUS;

};