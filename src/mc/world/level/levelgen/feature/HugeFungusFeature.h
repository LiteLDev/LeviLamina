#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class HugeFungusFeature : public ::Feature {
public:
    // prevent constructor by default
    HugeFungusFeature& operator=(HugeFungusFeature const&);
    HugeFungusFeature(HugeFungusFeature const&);
    HugeFungusFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HugeFungusFeature();

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    MCAPI explicit HugeFungusFeature(bool isBlue);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(bool isBlue);

    MCAPI void dtor$();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND
};
