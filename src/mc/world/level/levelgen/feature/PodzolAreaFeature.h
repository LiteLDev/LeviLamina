#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class PodzolAreaFeature : public ::Feature {
public:
    // prevent constructor by default
    PodzolAreaFeature& operator=(PodzolAreaFeature const&);
    PodzolAreaFeature(PodzolAreaFeature const&);
    PodzolAreaFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PodzolAreaFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND
};
