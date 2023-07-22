/**
 * @file  SculkSpreader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkSpreader.
 *
 */
class SculkSpreader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSPREADER
public:
    class SculkSpreader& operator=(class SculkSpreader const &) = delete;
    SculkSpreader(class SculkSpreader const &) = delete;
#endif

public:
    /**
     * @symbol  ??0SculkSpreader\@\@QEAA\@_NHHHH\@Z
     */
    MCAPI SculkSpreader(bool, int, int, int, int);
    /**
     * @symbol  ??0SculkSpreader\@\@QEAA\@XZ
     */
    MCAPI SculkSpreader();
    /**
     * @symbol  ?addCursors\@SculkSpreader\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addCursors(class BlockPos const &, int);
    /**
     * @symbol  ?clearCursors\@SculkSpreader\@\@QEAAXXZ
     */
    MCAPI void clearCursors();
    /**
     * @symbol  ?getAdditionalDecayRate\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getAdditionalDecayRate() const;
    /**
     * @symbol  ?getChargeDecayRate\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getChargeDecayRate() const;
    /**
     * @symbol  ?getCursorPosition\@SculkSpreader\@\@QEBA?AVBlockPos\@\@H\@Z
     */
    MCAPI class BlockPos getCursorPosition(int) const;
    /**
     * @symbol  ?getGrowthSpawnCost\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getGrowthSpawnCost() const;
    /**
     * @symbol  ?getMaxCharge\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getMaxCharge() const;
    /**
     * @symbol  ?getNoGrowthRadius\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getNoGrowthRadius() const;
    /**
     * @symbol  ?getNumberOfCursors\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getNumberOfCursors() const;
    /**
     * @symbol  ?getSculkReplaceableBlocks\@SculkSpreader\@\@QEAAAEBV?$set\@PEBVBlock\@\@U?$less\@PEBVBlock\@\@\@std\@\@V?$allocator\@PEBVBlock\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const & getSculkReplaceableBlocks();
    /**
     * @symbol  ?getTotalCharge\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getTotalCharge() const;
    /**
     * @symbol  ?isWorldGen\@SculkSpreader\@\@QEBA_NXZ
     */
    MCAPI bool isWorldGen() const;
    /**
     * @symbol  ?load\@SculkSpreader\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @symbol  ?save\@SculkSpreader\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @symbol  ?updateCursors\@SculkSpreader\@\@QEAAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@_N\@Z
     */
    MCAPI void updateCursors(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class Random &, bool);
    /**
     * @symbol  ??1SculkSpreader\@\@QEAA\@XZ
     */
    MCAPI ~SculkSpreader();

};