#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyIceFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacyIceFeature& operator=(LegacyIceFeature const&);
    LegacyIceFeature(LegacyIceFeature const&);
    LegacyIceFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyIceFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    MCAPI explicit LegacyIceFeature(class FeatureRegistry const& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class FeatureRegistry const& registry);

    MCAPI bool place$(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND
};
