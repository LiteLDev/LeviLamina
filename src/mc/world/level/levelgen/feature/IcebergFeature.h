#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class IcebergFeature : public ::Feature {
public:
    // prevent constructor by default
    IcebergFeature& operator=(IcebergFeature const&);
    IcebergFeature(IcebergFeature const&);
    IcebergFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IcebergFeature@@UEAA@XZ
    virtual ~IcebergFeature() = default;

    // vIndex: 3, symbol: ?place@IcebergFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isIcebergBlock@IcebergFeature@@AEBA_NAEBVBlock@@@Z
    MCAPI bool _isIcebergBlock(class Block const&) const;

    // symbol: ?carve@IcebergFeature@@AEBAXHHAEBVBlockPos@@AEAVBlockSource@@_NM0HH@Z
    MCAPI void
    carve(int, int, class BlockPos const&, class BlockSource&, bool, float, class BlockPos const&, int, int) const;

    // symbol:
    // ?generateIcebergBlock@IcebergFeature@@AEBAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@HHHHHH_N3MHAEBVBlock@@@Z
    MCAPI void
    generateIcebergBlock(class BlockSource&, class Random&, class BlockPos const&, int, int, int, int, int, int, bool, bool, float, int, class Block const&)
        const;

    // symbol: ?heightDependentRadiusRound@IcebergFeature@@AEBAHAEAVRandom@@HHH@Z
    MCAPI int heightDependentRadiusRound(class Random&, int, int, int) const;

    // symbol: ?setIcebergBlock@IcebergFeature@@AEBAXAEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@HH_N3AEBVBlock@@@Z
    MCAPI void
    setIcebergBlock(class BlockPos const&, class BlockSource&, class Random&, int, int, bool, bool, class Block const&)
        const;

    // symbol: ?signedDistanceEllipse@IcebergFeature@@AEBAMHHAEBVBlockPos@@HHM@Z
    MCAPI float signedDistanceEllipse(int, int, class BlockPos const&, int, int, float) const;

    // NOLINTEND
};
