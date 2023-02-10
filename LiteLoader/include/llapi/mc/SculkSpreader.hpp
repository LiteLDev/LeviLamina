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
     * @hash   1745660985
     * @symbol  ??0SculkSpreader\@\@QEAA\@_NHHHH\@Z
     */
    MCAPI SculkSpreader(bool, int, int, int, int);
    /**
     * @hash   -1345065376
     * @symbol  ??0SculkSpreader\@\@QEAA\@XZ
     */
    MCAPI SculkSpreader();
    /**
     * @hash   -1480565967
     * @symbol  ?addCursors\@SculkSpreader\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addCursors(class BlockPos const &, int);
    /**
     * @hash   1508648387
     * @symbol  ?clearCursors\@SculkSpreader\@\@QEAAXXZ
     */
    MCAPI void clearCursors();
    /**
     * @hash   221438800
     * @symbol  ?getAdditionalDecayRate\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getAdditionalDecayRate() const;
    /**
     * @hash   1334676166
     * @symbol  ?getChargeDecayRate\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getChargeDecayRate() const;
    /**
     * @hash   514706429
     * @symbol  ?getCursorPosition\@SculkSpreader\@\@QEBA?AVBlockPos\@\@H\@Z
     */
    MCAPI class BlockPos getCursorPosition(int) const;
    /**
     * @hash   565481772
     * @symbol  ?getGrowthSpawnCost\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getGrowthSpawnCost() const;
    /**
     * @hash   744130490
     * @symbol  ?getMaxCharge\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getMaxCharge() const;
    /**
     * @hash   677854440
     * @symbol  ?getNoGrowthRadius\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getNoGrowthRadius() const;
    /**
     * @hash   -2143622588
     * @symbol  ?getNumberOfCursors\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getNumberOfCursors() const;
    /**
     * @hash   -582570923
     * @symbol  ?getSculkReplaceableBlocks\@SculkSpreader\@\@QEAAAEBV?$set\@PEBVBlock\@\@U?$less\@PEBVBlock\@\@\@std\@\@V?$allocator\@PEBVBlock\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const & getSculkReplaceableBlocks();
    /**
     * @hash   -901548502
     * @symbol  ?getTotalCharge\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getTotalCharge() const;
    /**
     * @hash   -1481669800
     * @symbol  ?isWorldGen\@SculkSpreader\@\@QEBA_NXZ
     */
    MCAPI bool isWorldGen() const;
    /**
     * @hash   215726536
     * @symbol  ?load\@SculkSpreader\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @hash   -525992674
     * @symbol  ?save\@SculkSpreader\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @hash   930132793
     * @symbol  ?updateCursors\@SculkSpreader\@\@QEAAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@_N\@Z
     */
    MCAPI void updateCursors(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class Random &, bool);
    /**
     * @hash   1180582848
     * @symbol  ??1SculkSpreader\@\@QEAA\@XZ
     */
    MCAPI ~SculkSpreader();

};