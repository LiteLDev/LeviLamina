#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class GlowStoneFeature : public ::Feature {
public:
    // prevent constructor by default
    GlowStoneFeature& operator=(GlowStoneFeature const&);
    GlowStoneFeature(GlowStoneFeature const&);
    GlowStoneFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GlowStoneFeature();

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
