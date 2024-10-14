#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyForestRockFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacyForestRockFeature& operator=(LegacyForestRockFeature const&);
    LegacyForestRockFeature(LegacyForestRockFeature const&);
    LegacyForestRockFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyForestRockFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    MCAPI explicit LegacyForestRockFeature(class FeatureRegistry const& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool place$(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND
};
