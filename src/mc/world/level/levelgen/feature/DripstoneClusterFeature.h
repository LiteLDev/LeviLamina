#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class DripstoneClusterFeature : public ::IFeature {
public:
    // prevent constructor by default
    DripstoneClusterFeature& operator=(DripstoneClusterFeature const&);
    DripstoneClusterFeature(DripstoneClusterFeature const&);
    DripstoneClusterFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DripstoneClusterFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int _getDripstoneHeight(class Random& random, int dx, int dz, float, int maxHeight);

    MCAPI static bool _placeColumn(
        class IBlockWorldGenAPI& target,
        class Random&            random,
        class BlockPos const&    pos,
        int                      dx,
        int                      dz,
        float,
        double,
        int,
        float
    );

    MCAPI static void _replaceBlocksWithDripstoneBlocks(
        class IBlockWorldGenAPI& target,
        class BlockPos const&,
        int   maxCount,
        uchar direction
    );

    // NOLINTEND
};
