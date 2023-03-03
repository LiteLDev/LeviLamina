/**
 * @file  DripstoneClusterFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DripstoneClusterFeature.
 *
 */
class DripstoneClusterFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRIPSTONECLUSTERFEATURE
public:
    class DripstoneClusterFeature& operator=(class DripstoneClusterFeature const &) = delete;
    DripstoneClusterFeature(class DripstoneClusterFeature const &) = delete;
    DripstoneClusterFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DripstoneClusterFeature();
    /**
     * @vftbl  1
     * @symbol  ?place\@DripstoneClusterFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;

//private:
    /**
     * @symbol  ?_getDripstoneHeight\@DripstoneClusterFeature\@\@CAHAEAVRandom\@\@HHMH\@Z
     */
    MCAPI static int _getDripstoneHeight(class Random &, int, int, float, int);
    /**
     * @symbol  ?_placeColumn\@DripstoneClusterFeature\@\@CA_NAEAVIBlockWorldGenAPI\@\@AEAVRandom\@\@AEBVBlockPos\@\@HHMNHM\@Z
     */
    MCAPI static bool _placeColumn(class IBlockWorldGenAPI &, class Random &, class BlockPos const &, int, int, float, double, int, float);
    /**
     * @symbol  ?_replaceBlocksWithDripstoneBlocks\@DripstoneClusterFeature\@\@CAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@HE\@Z
     */
    MCAPI static void _replaceBlocksWithDripstoneBlocks(class IBlockWorldGenAPI &, class BlockPos const &, int, unsigned char);

private:

};