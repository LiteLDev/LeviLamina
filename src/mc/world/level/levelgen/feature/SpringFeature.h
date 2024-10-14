#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SpringFeature : public ::Feature {
public:
    // prevent constructor by default
    SpringFeature& operator=(SpringFeature const&);
    SpringFeature(SpringFeature const&);
    SpringFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpringFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool isValidSpringBorderBlock(class BlockLegacy const& block, class BlockSource& region) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
