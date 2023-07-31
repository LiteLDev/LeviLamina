#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DeltaFeature : public ::Feature {

public:
    // prevent constructor by default
    DeltaFeature& operator=(DeltaFeature const&) = delete;
    DeltaFeature(DeltaFeature const&)            = delete;
    DeltaFeature()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@DeltaFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_isValidPlacement\@DeltaFeature\@\@AEBA_NAEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI bool _isValidPlacement(class BlockSource&, class BlockPos) const;
    // NOLINTEND
};
