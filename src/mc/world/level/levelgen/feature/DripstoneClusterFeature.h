#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DripstoneClusterFeature {

public:
    // prevent constructor by default
    DripstoneClusterFeature& operator=(DripstoneClusterFeature const&) = delete;
    DripstoneClusterFeature(DripstoneClusterFeature const&)            = delete;
    DripstoneClusterFeature()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?place\@DripstoneClusterFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const; // NOLINT

    // private:
    /**
     * @symbol ?_getDripstoneHeight\@DripstoneClusterFeature\@\@CAHAEAVRandom\@\@HHMH\@Z
     */
    MCAPI static int _getDripstoneHeight(class Random&, int, int, float, int); // NOLINT
    /**
     * @symbol
     * ?_placeColumn\@DripstoneClusterFeature\@\@CA_NAEAVIBlockWorldGenAPI\@\@AEAVRandom\@\@AEBVBlockPos\@\@HHMNHM\@Z
     */
    MCAPI static bool _placeColumn(
        class IBlockWorldGenAPI&,
        class Random&,
        class BlockPos const&,
        int,
        int,
        float,
        double,
        int,
        float
    ); // NOLINT
    /**
     * @symbol
     * ?_replaceBlocksWithDripstoneBlocks\@DripstoneClusterFeature\@\@CAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@HE\@Z
     */
    MCAPI static void
    _replaceBlocksWithDripstoneBlocks(class IBlockWorldGenAPI&, class BlockPos const&, int, unsigned char); // NOLINT

private:
};
