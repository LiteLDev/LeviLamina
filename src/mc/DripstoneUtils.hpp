/**
 * @file  DripstoneUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?buildBaseToTipColumn\@DripstoneUtils\@\@YAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@EH_N\@Z
     */
    MCAPI void buildBaseToTipColumn(class IBlockWorldGenAPI &, class BlockPos const &, unsigned char, int, bool);
    /**
     * @symbol  ?canBeAdjacentToWater\@DripstoneUtils\@\@YA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canBeAdjacentToWater(class IBlockWorldGenAPI &, class BlockPos const &);
    /**
     * @symbol  ?canPlacePool\@DripstoneUtils\@\@YA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canPlacePool(class IBlockWorldGenAPI &, class BlockPos const &);
    /**
     * @symbol  ?getDripstoneHeight\@DripstoneUtils\@\@YAMMMMM\@Z
     */
    MCAPI float getDripstoneHeight(float, float, float, float);
    /**
     * @symbol  ?getPlacementBlock\@DripstoneUtils\@\@YAAEBVBlock\@\@EAEBW4DripstoneThickness\@\@\@Z
     */
    MCAPI class Block const & getPlacementBlock(unsigned char, enum class DripstoneThickness const &);
    /**
     * @symbol  ?getPointedDripstoneBasePos\@DripstoneUtils\@\@YA?AV?$optional\@UPointedDripstoneBasePos\@DripstoneUtils\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI class std::optional<struct DripstoneUtils::PointedDripstoneBasePos> getPointedDripstoneBasePos(class IBlockWorldGenAPI &, class BlockPos const &, class Random &);
    /**
     * @symbol  ?isCircleMostlyEmbeddedInStone\@DripstoneUtils\@\@YA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI bool isCircleMostlyEmbeddedInStone(class IBlockWorldGenAPI &, class BlockPos const &, int);
    /**
     * @symbol  ?isDripstoneBaseOrLava\@DripstoneUtils\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isDripstoneBaseOrLava(class IBlockWorldGenAPI const &, class BlockPos const &);
    /**
     * @symbol  ?isEmptyOrWater\@DripstoneUtils\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isEmptyOrWater(class IBlockWorldGenAPI const &, class BlockPos const &);
    /**
     * @symbol  ?isEmptyOrWaterOrLava\@DripstoneUtils\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isEmptyOrWaterOrLava(class IBlockWorldGenAPI const &, class BlockPos const &);
    /**
     * @symbol  ?isLava\@DripstoneUtils\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isLava(class IBlockWorldGenAPI const &, class BlockPos const &);
    /**
     * @symbol  ?placeDripstoneBlockIfPossible\@DripstoneUtils\@\@YA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool placeDripstoneBlockIfPossible(class IBlockWorldGenAPI &, class BlockPos const &);
    /**
     * @symbol  ?replaceableByDripstone\@DripstoneUtils\@\@YA_NAEBVBlockLegacy\@\@\@Z
     */
    MCAPI bool replaceableByDripstone(class BlockLegacy const &);

};