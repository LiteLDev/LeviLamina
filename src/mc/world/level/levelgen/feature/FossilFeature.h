#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class FossilFeature : public ::Feature {
public:
    // prevent constructor by default
    FossilFeature& operator=(FossilFeature const&);
    FossilFeature(FossilFeature const&);
    FossilFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FossilFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    MCAPI static ::ll::CArrayT<std::string const>& STRUCTURE_LOCATION_FOSSIL();

    // NOLINTEND
};
