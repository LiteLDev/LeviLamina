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
    // vIndex: 0, symbol: __gen_??1DripstoneClusterFeature@@UEAA@XZ
    virtual ~DripstoneClusterFeature() = default;

    // vIndex: 1, symbol:
    // ?place@DripstoneClusterFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getDripstoneHeight@DripstoneClusterFeature@@CAHAEAVRandom@@HHMH@Z
    MCAPI static int _getDripstoneHeight(class Random& random, int dx, int dz, float, int maxHeight);

    // symbol: ?_placeColumn@DripstoneClusterFeature@@CA_NAEAVIBlockWorldGenAPI@@AEAVRandom@@AEBVBlockPos@@HHMNHM@Z
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

    // symbol: ?_replaceBlocksWithDripstoneBlocks@DripstoneClusterFeature@@CAXAEAVIBlockWorldGenAPI@@AEBVBlockPos@@HE@Z
    MCAPI static void _replaceBlocksWithDripstoneBlocks(
        class IBlockWorldGenAPI& target,
        class BlockPos const&,
        int   maxCount,
        uchar direction
    );

    // NOLINTEND
};
