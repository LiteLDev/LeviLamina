#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class NetherFossilFeature : public ::Feature {
public:
    // prevent constructor by default
    NetherFossilFeature& operator=(NetherFossilFeature const&);
    NetherFossilFeature(NetherFossilFeature const&);
    NetherFossilFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherFossilFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string const STRUCTURE_LOCATION_FOSSIL[];

    // NOLINTEND
};
