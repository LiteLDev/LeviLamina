#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacySpringsFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacySpringsFeature& operator=(LegacySpringsFeature const&);
    LegacySpringsFeature(LegacySpringsFeature const&);
    LegacySpringsFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacySpringsFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    MCAPI LegacySpringsFeature(class FeatureRegistry const& registry, class BaseGameVersion const& baseGameVersion);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class FeatureRegistry const& registry, class BaseGameVersion const& baseGameVersion);

    MCAPI bool place$(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND
};
