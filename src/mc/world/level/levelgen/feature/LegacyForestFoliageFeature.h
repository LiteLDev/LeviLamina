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
    LegacyForestFoliageFeature& operator=(LegacyForestFoliageFeature const&) = delete;
    LegacyForestFoliageFeature(LegacyForestFoliageFeature const&)            = delete;
    LegacyForestFoliageFeature()                                             = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@LegacyForestFoliageFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??0LegacyForestFoliageFeature@@QEAA@W4Type@0@AEAVFeatureRegistry@@@Z
    MCAPI LegacyForestFoliageFeature(::LegacyForestFoliageFeature::Type, class FeatureRegistry&);

    // NOLINTEND
};
