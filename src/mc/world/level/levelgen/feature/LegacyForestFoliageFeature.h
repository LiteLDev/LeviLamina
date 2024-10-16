#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyForestFoliageFeature : public ::Feature {
public:
    // LegacyForestFoliageFeature inner types define
    enum class Type {};

public:
    // prevent constructor by default
    LegacyForestFoliageFeature& operator=(LegacyForestFoliageFeature const&);
    LegacyForestFoliageFeature(LegacyForestFoliageFeature const&);
    LegacyForestFoliageFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyForestFoliageFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    MCAPI LegacyForestFoliageFeature(::LegacyForestFoliageFeature::Type forestType, class FeatureRegistry& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::LegacyForestFoliageFeature::Type forestType, class FeatureRegistry& registry);

    MCAPI bool place$(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND
};
