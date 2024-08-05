#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacySwampFoliageFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacySwampFoliageFeature& operator=(LegacySwampFoliageFeature const&);
    LegacySwampFoliageFeature(LegacySwampFoliageFeature const&);
    LegacySwampFoliageFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacySwampFoliageFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    MCAPI explicit LegacySwampFoliageFeature(class FeatureRegistry& registry);

    // NOLINTEND
};
