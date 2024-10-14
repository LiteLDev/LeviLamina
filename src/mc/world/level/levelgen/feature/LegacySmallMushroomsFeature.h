#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacySmallMushroomsFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacySmallMushroomsFeature& operator=(LegacySmallMushroomsFeature const&);
    LegacySmallMushroomsFeature(LegacySmallMushroomsFeature const&);
    LegacySmallMushroomsFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacySmallMushroomsFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    MCAPI explicit LegacySmallMushroomsFeature(class FeatureRegistry const& registry);

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
