#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BasaltPillarFeature : public ::Feature {
public:
    // prevent constructor by default
    BasaltPillarFeature& operator=(BasaltPillarFeature const&);
    BasaltPillarFeature(BasaltPillarFeature const&);
    BasaltPillarFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BasaltPillarFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _growColumn(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Random&         random,
        float                 placeChance,
        class Block const&    basalt
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
