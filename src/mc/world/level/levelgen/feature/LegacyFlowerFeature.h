#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/FlowerPlacementType.h"
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyFlowerFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacyFlowerFeature& operator=(LegacyFlowerFeature const&);
    LegacyFlowerFeature(LegacyFlowerFeature const&);
    LegacyFlowerFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyFlowerFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI explicit LegacyFlowerFeature(::FlowerPlacementType placementType);

    // NOLINTEND
};
