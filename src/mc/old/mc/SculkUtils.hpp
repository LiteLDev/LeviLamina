/**
 * @file  SculkUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace SculkUtils.
 *
 */
namespace SculkUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?canSpreadIntoBlock\@SculkUtils\@\@YA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canSpreadIntoBlock(class IBlockWorldGenAPI &, class Block const &, class BlockPos const &);
    /**
     * @symbol  ?generateSculkReplaceableBlocks\@SculkUtils\@\@YA?BV?$set\@PEBVBlock\@\@U?$less\@PEBVBlock\@\@\@std\@\@V?$allocator\@PEBVBlock\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const generateSculkReplaceableBlocks();
    /**
     * @symbol  ?generateSculkReplaceableBlocksWorldgen\@SculkUtils\@\@YA?BV?$set\@PEBVBlock\@\@U?$less\@PEBVBlock\@\@\@std\@\@V?$allocator\@PEBVBlock\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const generateSculkReplaceableBlocksWorldgen();
    /**
     * @symbol  ?isPosInTickingRange\@SculkUtils\@\@YA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isPosInTickingRange(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?isSculk\@SculkUtils\@\@YA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isSculk(class Block const &);
    /**
     * @symbol  ?isSculkOrSculkVein\@SculkUtils\@\@YA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isSculkOrSculkVein(class Block const &);
    /**
     * @symbol  ?isSculkReplaceable\@SculkUtils\@\@YA_NAEBVBlock\@\@AEBV?$set\@PEBVBlock\@\@U?$less\@PEBVBlock\@\@\@std\@\@V?$allocator\@PEBVBlock\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI bool isSculkReplaceable(class Block const &, class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const &);
    /**
     * @symbol  ?isSculkVein\@SculkUtils\@\@YA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isSculkVein(class Block const &);
    /**
     * @symbol  ?isSculkVeinWithSubstrateAccess\@SculkUtils\@\@YA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@AEBVBlockPos\@\@AEAVSculkSpreader\@\@\@Z
     */
    MCAPI bool isSculkVeinWithSubstrateAccess(class IBlockWorldGenAPI &, class Block const &, class BlockPos const &, class SculkSpreader &);
    /**
     * @symbol  ?requestChargeEffects\@SculkUtils\@\@YAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI void requestChargeEffects(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, int, int);
    /**
     * @symbol  ?requestChargePopEffects\@SculkUtils\@\@YAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void requestChargePopEffects(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &);

};