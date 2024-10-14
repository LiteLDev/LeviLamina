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
    // vIndex: 0
    virtual ~IcebergFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isIcebergBlock(class Block const& block) const;

    MCAPI void carve(
        int                   radius,
        int                   yOff,
        class BlockPos const& globalOrigin,
        class BlockSource&    region,
        bool                  underWater,
        float                 angle,
        class BlockPos const& localOrigin,
        int                   ellipseA,
        int                   ellipseC
    ) const;

    MCAPI void generateIcebergBlock(
        class BlockSource&    region,
        class Random&         random,
        class BlockPos const& origin,
        int                   height,
        int                   xo,
        int                   yOff,
        int                   zo,
        int                   radius,
        int                   a,
        bool                  snowOnTop,
        bool                  isEllipse,
        float                 shapeAngle,
        int                   elllipseC,
        class Block const&    blockToPlace
    ) const;

    MCAPI int heightDependentRadiusRound(class Random& random, int yOff, int height, int width) const;

    MCAPI void setIcebergBlock(
        class BlockPos const& pos,
        class BlockSource&    region,
        class Random&         random,
        int                   hDiff,
        int                   height,
        bool                  snowOnTop,
        bool                  isEllipse,
        class Block const&    blockToPlace
    ) const;

    MCAPI float signedDistanceEllipse(int xo, int zo, class BlockPos const& origin, int a, int c, float angle) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
