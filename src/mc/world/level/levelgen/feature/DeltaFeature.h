#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DeltaFeature : public ::Feature {
public:
    // prevent constructor by default
    DeltaFeature& operator=(DeltaFeature const&);
    DeltaFeature(DeltaFeature const&);
    DeltaFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeltaFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& centerPos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isValidPlacement(class BlockSource& region, class BlockPos cursor) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& centerPos, class Random& random) const;

    // NOLINTEND
};
