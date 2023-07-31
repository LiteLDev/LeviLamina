#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class EndPodiumFeature : public ::Feature {

public:
    // prevent constructor by default
    EndPodiumFeature& operator=(EndPodiumFeature const&) = delete;
    EndPodiumFeature(EndPodiumFeature const&)            = delete;
    EndPodiumFeature()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@EndPodiumFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDPODIUMFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EndPodiumFeature();
#endif
    /**
     * @symbol ??0EndPodiumFeature\@\@QEAA\@_N\@Z
     */
    MCAPI EndPodiumFeature(bool);
    /**
     * @symbol ?CORNER_ROUNDING\@EndPodiumFeature\@\@2MB
     */
    MCAPI static float const CORNER_ROUNDING;
    /**
     * @symbol ?END_PODIUM_CHUNK_POSITION\@EndPodiumFeature\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const END_PODIUM_CHUNK_POSITION;
    /**
     * @symbol ?END_PODIUM_LOCATION\@EndPodiumFeature\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const END_PODIUM_LOCATION;
    /**
     * @symbol ?PODIUM_PILLAR_HEIGHT\@EndPodiumFeature\@\@2HB
     */
    MCAPI static int const PODIUM_PILLAR_HEIGHT;
    /**
     * @symbol ?PODIUM_RADIUS\@EndPodiumFeature\@\@2HB
     */
    MCAPI static int const PODIUM_RADIUS;
    /**
     * @symbol ?RIM_RADIUS\@EndPodiumFeature\@\@2HB
     */
    MCAPI static int const RIM_RADIUS;
    // NOLINTEND
};
