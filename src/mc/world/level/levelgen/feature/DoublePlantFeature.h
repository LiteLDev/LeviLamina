#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DoublePlantFeature : public ::Feature {
public:
    // prevent constructor by default
    DoublePlantFeature& operator=(DoublePlantFeature const&);
    DoublePlantFeature(DoublePlantFeature const&);
    DoublePlantFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DoublePlantFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool place(class BlockSource&, class BlockPos const&, class Random&, class HashedString const&) const;

    // NOLINTEND
};
