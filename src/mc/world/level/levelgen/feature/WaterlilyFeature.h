#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class WaterlilyFeature : public ::Feature {
public:
    // prevent constructor by default
    WaterlilyFeature& operator=(WaterlilyFeature const&);
    WaterlilyFeature(WaterlilyFeature const&);
    WaterlilyFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WaterlilyFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // NOLINTEND
};
