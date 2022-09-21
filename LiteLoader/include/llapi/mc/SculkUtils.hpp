/**
 * @file  MC/SculkUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1522601462
     * @symbol ?canSpreadIntoBlock@SculkUtils@@YA_NAEBVBlock@@@Z
     */
    MCAPI bool canSpreadIntoBlock(class Block const &);
    /**
     * @hash   51664050
     * @symbol ?generateSculkReplaceableBlocks@SculkUtils@@YA?BV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@XZ
     */
    MCAPI class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const generateSculkReplaceableBlocks();
    /**
     * @hash   -370952130
     * @symbol ?generateSculkReplaceableBlocksWorldgen@SculkUtils@@YA?BV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@XZ
     */
    MCAPI class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const generateSculkReplaceableBlocksWorldgen();
    /**
     * @hash   -652918987
     * @symbol ?isPosInTickingRange@SculkUtils@@YA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool isPosInTickingRange(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -1783172812
     * @symbol ?isSculk@SculkUtils@@YA_NAEBVBlock@@@Z
     */
    MCAPI bool isSculk(class Block const &);
    /**
     * @hash   -1709254444
     * @symbol ?isSculkOrSculkVein@SculkUtils@@YA_NAEBVBlock@@@Z
     */
    MCAPI bool isSculkOrSculkVein(class Block const &);
    /**
     * @hash   260316532
     * @symbol ?isSculkReplaceable@SculkUtils@@YA_NAEBVBlock@@AEBV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@@Z
     */
    MCAPI bool isSculkReplaceable(class Block const &, class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const &);
    /**
     * @hash   -1540285924
     * @symbol ?isSculkVein@SculkUtils@@YA_NAEBVBlock@@@Z
     */
    MCAPI bool isSculkVein(class Block const &);
    /**
     * @hash   695527087
     * @symbol ?isSculkVeinWithSubstrateAccess@SculkUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@AEAVSculkSpreader@@@Z
     */
    MCAPI bool isSculkVeinWithSubstrateAccess(class IBlockWorldGenAPI &, class Block const &, class BlockPos const &, class SculkSpreader &);
    /**
     * @hash   -1440264448
     * @symbol ?requestChargeEffects@SculkUtils@@YAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@HH@Z
     */
    MCAPI void requestChargeEffects(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, int, int);
    /**
     * @hash   983562852
     * @symbol ?requestChargePopEffects@SculkUtils@@YAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void requestChargePopEffects(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &);

};