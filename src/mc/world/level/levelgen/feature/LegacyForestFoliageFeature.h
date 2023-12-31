#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyForestFoliageFeature : public ::Feature {
public:
    // LegacyForestFoliageFeature inner types define
    enum class Type {};

public:
    // prevent constructor by default
    LegacyForestFoliageFeature& operator=(LegacyForestFoliageFeature const&);
    LegacyForestFoliageFeature(LegacyForestFoliageFeature const&);
    LegacyForestFoliageFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyForestFoliageFeature@@UEAA@XZ
    virtual ~LegacyForestFoliageFeature() = default;

    // vIndex: 3, symbol: ?place@LegacyForestFoliageFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // symbol: ??0LegacyForestFoliageFeature@@QEAA@W4Type@0@AEAVFeatureRegistry@@@Z
    MCAPI LegacyForestFoliageFeature(::LegacyForestFoliageFeature::Type forestType, class FeatureRegistry& registry);

    // NOLINTEND
};
