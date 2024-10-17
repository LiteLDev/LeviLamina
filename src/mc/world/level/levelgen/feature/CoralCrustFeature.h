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
    // vIndex: 0
    virtual ~CoralCrustFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class BlockPos _getCropOffsetFromRot(int rot, int type) const;

    MCAPI class BlockPos _getOffsetFromRot(int rot, int type) const;

    MCAPI void _placeCoral(
        class BlockSource&                             region,
        class BlockPos const&                          pos,
        class Random&                                  random,
        std::vector<class BlockPos>&                   topDec,
        std::vector<std::pair<class BlockPos, uchar>>& sideDec,
        int                                            color
    ) const;

    MCAPI void _placeCoralBase(
        class BlockSource&             region,
        class BlockPos const&          pos,
        class Random&                  random,
        class LegacyStructureTemplate& structure,
        class LegacyStructureSettings& settings
    ) const;

    MCAPI void
    _placeSideDecorations(class BlockSource& region, class BlockPos const& pos, class Random& random, uchar dir) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
