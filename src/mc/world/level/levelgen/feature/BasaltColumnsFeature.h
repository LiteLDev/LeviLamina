#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BasaltColumnsFeature : public ::Feature {

public:
    // prevent constructor by default
    BasaltColumnsFeature& operator=(BasaltColumnsFeature const&) = delete;
    BasaltColumnsFeature(BasaltColumnsFeature const&)            = delete;
    BasaltColumnsFeature()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@BasaltColumnsFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT

    // private:
    /**
     * @symbol
     * ?_findSurface\@BasaltColumnsFeature\@\@AEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@VBlockPos\@\@HH\@Z
     */
    MCAPI class std::optional<class BlockPos>
    _findSurface(class BlockSource&, class BlockPos, int, int) const; // NOLINT
    /**
     * @symbol ?_placeColumnCluster\@BasaltColumnsFeature\@\@AEBA_NAEAVBlockSource\@\@VBlockPos\@\@HH\@Z
     */
    MCAPI bool _placeColumnCluster(class BlockSource&, class BlockPos, int, int) const; // NOLINT

private:
};
