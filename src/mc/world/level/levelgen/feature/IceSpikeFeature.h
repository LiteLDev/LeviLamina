#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class IceSpikeFeature : public ::Feature {
public:
    // prevent constructor by default
    IceSpikeFeature& operator=(IceSpikeFeature const&);
    IceSpikeFeature(IceSpikeFeature const&);
    IceSpikeFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IceSpikeFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isValidPlaceBlock(class Block const& block) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
