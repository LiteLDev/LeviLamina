#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
// clang-format on

class DripstoneClusterFeature : public ::IFeature {
public:
    // prevent constructor by default
    DripstoneClusterFeature& operator=(DripstoneClusterFeature const&);
    DripstoneClusterFeature(DripstoneClusterFeature const&);
    DripstoneClusterFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams&) const /*override*/;

    // vIndex: 0
    virtual ~DripstoneClusterFeature() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int _getDripstoneHeight(::Random& random, int dx, int dz, float density, int maxHeight);

    MCAPI static bool _placeColumn(
        ::IBlockWorldGenAPI& target,
        ::Random&            random,
        ::BlockPos const&    pos,
        int                  dx,
        int                  dz,
        float                chanceOfWater,
        double               chanceOfStalagmiteOrStalactite,
        int                  clusterHeight,
        float                density
    );

    MCAPI static void _replaceBlocksWithDripstoneBlocks(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    firstPos,
        int                  maxCount,
        uchar                direction
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos>
    $place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
