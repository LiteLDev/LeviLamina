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
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams&) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int _getDripstoneHeight(class Random& random, int dx, int dz, float density, int maxHeight);

    MCAPI static bool _placeColumn(
        class IBlockWorldGenAPI& target,
        class Random&            random,
        class BlockPos const&    pos,
        int                      dx,
        int                      dz,
        float                    chanceOfWater,
        double                   chanceOfStalagmiteOrStalactite,
        int                      clusterHeight,
        float                    density
    );

    MCAPI static void _replaceBlocksWithDripstoneBlocks(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    firstPos,
        int                      maxCount,
        uchar                    direction
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool isValidPlacement$(std::string const&);

    MCAPI std::optional<class BlockPos>
    place$(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams&) const;

    // NOLINTEND
};
