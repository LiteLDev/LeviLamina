/**
 * @file  DripstoneUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace DripstoneUtils.
 *
 */
namespace DripstoneUtils {

#define AFTER_EXTRA
// Add Member There
struct PointedDripstoneBasePos {
    PointedDripstoneBasePos() = delete;
    PointedDripstoneBasePos(PointedDripstoneBasePos const&) = delete;
    PointedDripstoneBasePos(PointedDripstoneBasePos const&&) = delete;
};

#undef AFTER_EXTRA
    /**
     * @hash   1763549390
     * @symbol ?buildBaseToTipColumn@DripstoneUtils@@YAXAEAVIBlockWorldGenAPI@@AEBVBlockPos@@EH_N@Z
     */
    MCAPI void buildBaseToTipColumn(class IBlockWorldGenAPI &, class BlockPos const &, unsigned char, int, bool);
    /**
     * @hash   -538839785
     * @symbol ?canBeAdjacentToWater@DripstoneUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
     */
    MCAPI bool canBeAdjacentToWater(class IBlockWorldGenAPI &, class BlockPos const &);
    /**
     * @hash   500290951
     * @symbol ?canPlacePool@DripstoneUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
     */
    MCAPI bool canPlacePool(class IBlockWorldGenAPI &, class BlockPos const &);
    /**
     * @hash   1489220601
     * @symbol ?getDripstoneHeight@DripstoneUtils@@YAMMMMM@Z
     */
    MCAPI float getDripstoneHeight(float, float, float, float);
    /**
     * @hash   -975823824
     * @symbol ?getPlacementBlock@DripstoneUtils@@YAAEBVBlock@@EAEBW4DripstoneThickness@@@Z
     */
    MCAPI class Block const & getPlacementBlock(unsigned char, enum DripstoneThickness const &);
    /**
     * @hash   -981291143
     * @symbol ?getPointedDripstoneBasePos@DripstoneUtils@@YA?AV?$optional@UPointedDripstoneBasePos@DripstoneUtils@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    MCAPI class std::optional<struct DripstoneUtils::PointedDripstoneBasePos> getPointedDripstoneBasePos(class IBlockWorldGenAPI &, class BlockPos const &, class Random &);
    /**
     * @hash   -1420145006
     * @symbol ?isCircleMostlyEmbeddedInStone@DripstoneUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@H@Z
     */
    MCAPI bool isCircleMostlyEmbeddedInStone(class IBlockWorldGenAPI &, class BlockPos const &, int);
    /**
     * @hash   354873847
     * @symbol ?isDripstoneBaseOrLava@DripstoneUtils@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
     */
    MCAPI bool isDripstoneBaseOrLava(class IBlockWorldGenAPI const &, class BlockPos const &);
    /**
     * @hash   1280535673
     * @symbol ?isEmptyOrWater@DripstoneUtils@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
     */
    MCAPI bool isEmptyOrWater(class IBlockWorldGenAPI const &, class BlockPos const &);
    /**
     * @hash   -1888210759
     * @symbol ?isEmptyOrWaterOrLava@DripstoneUtils@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
     */
    MCAPI bool isEmptyOrWaterOrLava(class IBlockWorldGenAPI const &, class BlockPos const &);
    /**
     * @hash   727398969
     * @symbol ?isLava@DripstoneUtils@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
     */
    MCAPI bool isLava(class IBlockWorldGenAPI const &, class BlockPos const &);
    /**
     * @hash   2034826565
     * @symbol ?placeDripstoneBlockIfPossible@DripstoneUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
     */
    MCAPI bool placeDripstoneBlockIfPossible(class IBlockWorldGenAPI &, class BlockPos const &);
    /**
     * @hash   783060490
     * @symbol ?replaceableByDripstone@DripstoneUtils@@YA_NAEBVBlockLegacy@@@Z
     */
    MCAPI bool replaceableByDripstone(class BlockLegacy const &);

};