#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class CactusFeature : public ::Feature {
public:
    // prevent constructor by default
    CactusFeature& operator=(CactusFeature const&);
    CactusFeature(CactusFeature const&);
    CactusFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CactusFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
