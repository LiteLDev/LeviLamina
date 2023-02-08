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
     * @hash   -2075280151
     * @vftbl  3
     * @symbol  ?place\@EndPodiumFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -839166460
     * @symbol  ??0EndPodiumFeature\@\@QEAA\@_N\@Z
     */
    MCAPI EndPodiumFeature(bool);
    /**
     * @hash   830251643
     * @symbol  ?CORNER_ROUNDING\@EndPodiumFeature\@\@2MB
     */
    MCAPI static float const CORNER_ROUNDING;
    /**
     * @hash   -198145399
     * @symbol  ?END_PODIUM_CHUNK_POSITION\@EndPodiumFeature\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const END_PODIUM_CHUNK_POSITION;
    /**
     * @hash   -462368535
     * @symbol  ?END_PODIUM_LOCATION\@EndPodiumFeature\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const END_PODIUM_LOCATION;
    /**
     * @hash   1220663421
     * @symbol  ?PODIUM_PILLAR_HEIGHT\@EndPodiumFeature\@\@2HB
     */
    MCAPI static int const PODIUM_PILLAR_HEIGHT;
    /**
     * @hash   -941634985
     * @symbol  ?PODIUM_RADIUS\@EndPodiumFeature\@\@2HB
     */
    MCAPI static int const PODIUM_RADIUS;
    /**
     * @hash   -857173631
     * @symbol  ?RIM_RADIUS\@EndPodiumFeature\@\@2HB
     */
    MCAPI static int const RIM_RADIUS;

};