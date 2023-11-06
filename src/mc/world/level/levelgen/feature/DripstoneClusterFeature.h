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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DripstoneClusterFeature();

    // vIndex: 1, symbol:
    // ?place@DripstoneClusterFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getDripstoneHeight@DripstoneClusterFeature@@CAHAEAVRandom@@HHMH@Z
    MCAPI static int _getDripstoneHeight(class Random&, int, int, float, int);

    // symbol: ?_placeColumn@DripstoneClusterFeature@@CA_NAEAVIBlockWorldGenAPI@@AEAVRandom@@AEBVBlockPos@@HHMNHM@Z
    MCAPI static bool
    _placeColumn(class IBlockWorldGenAPI&, class Random&, class BlockPos const&, int, int, float, double, int, float);

    // symbol: ?_replaceBlocksWithDripstoneBlocks@DripstoneClusterFeature@@CAXAEAVIBlockWorldGenAPI@@AEBVBlockPos@@HE@Z
    MCAPI static void _replaceBlocksWithDripstoneBlocks(class IBlockWorldGenAPI&, class BlockPos const&, int, uchar);

    // NOLINTEND
};
