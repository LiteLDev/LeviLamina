#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyEmeraldOreFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacyEmeraldOreFeature& operator=(LegacyEmeraldOreFeature const&);
    LegacyEmeraldOreFeature(LegacyEmeraldOreFeature const&);
    LegacyEmeraldOreFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyEmeraldOreFeature@@UEAA@XZ
    virtual ~LegacyEmeraldOreFeature() = default;

    // vIndex: 3, symbol: ?place@LegacyEmeraldOreFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND
};
