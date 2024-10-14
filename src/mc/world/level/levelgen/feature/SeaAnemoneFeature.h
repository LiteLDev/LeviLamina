#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SeaAnemoneFeature : public ::Feature {
public:
    // prevent constructor by default
    SeaAnemoneFeature& operator=(SeaAnemoneFeature const&);
    SeaAnemoneFeature(SeaAnemoneFeature const&);
    SeaAnemoneFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SeaAnemoneFeature() = default;

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
