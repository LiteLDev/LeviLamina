#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LakeFeature : public ::Feature {
public:
    // prevent constructor by default
    LakeFeature& operator=(LakeFeature const&);
    LakeFeature(LakeFeature const&);
    LakeFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LakeFeature();

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI LakeFeature(
        class Block const&                                    block,
        std::optional<class XoroshiroPositionalRandomFactory> xoroshiroPositionalRandomFactory
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _check(class BlockPos const& pos, gsl::span<bool, 2048> grid) const;

    // NOLINTEND
};
