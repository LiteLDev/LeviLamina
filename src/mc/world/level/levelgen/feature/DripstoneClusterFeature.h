#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class DripstoneClusterFeature : public ::IFeature {

public:
    // prevent constructor by default
    DripstoneClusterFeature& operator=(DripstoneClusterFeature const&) = delete;
    DripstoneClusterFeature(DripstoneClusterFeature const&)            = delete;
    DripstoneClusterFeature()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?place\@DripstoneClusterFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?isValidPlacement\@IFeature\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool isValidPlacement(std::string const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_getDripstoneHeight\@DripstoneClusterFeature\@\@CAHAEAVRandom\@\@HHMH\@Z
     */
    MCAPI static int32_t _getDripstoneHeight(class Random&, int32_t, int32_t, float, int32_t);
    /**
     * @symbol
     * ?_placeColumn\@DripstoneClusterFeature\@\@CA_NAEAVIBlockWorldGenAPI\@\@AEAVRandom\@\@AEBVBlockPos\@\@HHMNHM\@Z
     */
    MCAPI static bool _placeColumn(
        class IBlockWorldGenAPI&,
        class Random&,
        class BlockPos const&,
        int32_t,
        int32_t,
        float,
        double,
        int32_t,
        float
    );
    /**
     * @symbol
     * ?_replaceBlocksWithDripstoneBlocks\@DripstoneClusterFeature\@\@CAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@HE\@Z
     */
    MCAPI static void
    _replaceBlocksWithDripstoneBlocks(class IBlockWorldGenAPI&, class BlockPos const&, int32_t, uint8_t);
    // NOLINTEND
};
