#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class CoralCrustFeature : public ::Feature {
public:
    // prevent constructor by default
    CoralCrustFeature& operator=(CoralCrustFeature const&);
    CoralCrustFeature(CoralCrustFeature const&);
    CoralCrustFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CoralCrustFeature@@UEAA@XZ
    virtual ~CoralCrustFeature() = default;

    // vIndex: 3, symbol: ?place@CoralCrustFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getCropOffsetFromRot@CoralCrustFeature@@AEBA?AVBlockPos@@HH@Z
    MCAPI class BlockPos _getCropOffsetFromRot(int rot, int type) const;

    // symbol: ?_getOffsetFromRot@CoralCrustFeature@@AEBA?AVBlockPos@@HH@Z
    MCAPI class BlockPos _getOffsetFromRot(int rot, int type) const;

    // symbol:
    // ?_placeCoral@CoralCrustFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAV?$vector@U?$pair@VBlockPos@@E@std@@V?$allocator@U?$pair@VBlockPos@@E@std@@@2@@6@H@Z
    MCAPI void _placeCoral(
        class BlockSource&                             region,
        class BlockPos const&                          pos,
        class Random&                                  random,
        std::vector<class BlockPos>&                   topDec,
        std::vector<std::pair<class BlockPos, uchar>>& sideDec,
        int                                            color
    ) const;

    // symbol:
    // ?_placeCoralBase@CoralCrustFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAVLegacyStructureTemplate@@AEAVLegacyStructureSettings@@@Z
    MCAPI void _placeCoralBase(
        class BlockSource&             region,
        class BlockPos const&          pos,
        class Random&                  random,
        class LegacyStructureTemplate& structure,
        class LegacyStructureSettings& settings
    ) const;

    // symbol: ?_placeSideDecorations@CoralCrustFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@E@Z
    MCAPI void
    _placeSideDecorations(class BlockSource& region, class BlockPos const& pos, class Random& random, uchar dir) const;

    // NOLINTEND
};
