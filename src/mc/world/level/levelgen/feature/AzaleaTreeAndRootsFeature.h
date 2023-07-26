#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class AzaleaTreeAndRootsFeature : public ::Feature {

public:
    // prevent constructor by default
    AzaleaTreeAndRootsFeature& operator=(AzaleaTreeAndRootsFeature const&) = delete;
    AzaleaTreeAndRootsFeature(AzaleaTreeAndRootsFeature const&)            = delete;
    AzaleaTreeAndRootsFeature()                                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@AzaleaTreeAndRootsFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT

    // private:
    /**
     * @symbol ?_isLushGroundReplaceable\@AzaleaTreeAndRootsFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _isLushGroundReplaceable(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol
     * ?_tryPlaceAzaleaTree\@AzaleaTreeAndRootsFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@I\@Z
     */
    MCAPI bool
    _tryPlaceAzaleaTree(class BlockSource&, class BlockPos const&, class Random&, unsigned int) const; // NOLINT

private:
};
