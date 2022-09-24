/**
 * @file  SculkSpreader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   946923913
     * @symbol ??0SculkSpreader@@QEAA@_NHHHH@Z
     */
    MCAPI SculkSpreader(bool, int, int, int, int);
    /**
     * @hash   -2143802448
     * @symbol ??0SculkSpreader@@QEAA@XZ
     */
    MCAPI SculkSpreader();
    /**
     * @hash   2016110161
     * @symbol ?addCursors@SculkSpreader@@QEAAXAEBVBlockPos@@H@Z
     */
    MCAPI void addCursors(class BlockPos const &, int);
    /**
     * @hash   710357219
     * @symbol ?clearCursors@SculkSpreader@@QEAAXXZ
     */
    MCAPI void clearCursors();
    /**
     * @hash   847995424
     * @symbol ?getAdditionalDecayRate@SculkSpreader@@QEBAHXZ
     */
    MCAPI int getAdditionalDecayRate() const;
    /**
     * @hash   1083662966
     * @symbol ?getChargeDecayRate@SculkSpreader@@QEBAHXZ
     */
    MCAPI int getChargeDecayRate() const;
    /**
     * @hash   -283584739
     * @symbol ?getCursorPosition@SculkSpreader@@QEBA?AVBlockPos@@H@Z
     */
    MCAPI class BlockPos getCursorPosition(int) const;
    /**
     * @hash   314468572
     * @symbol ?getGrowthSpawnCost@SculkSpreader@@QEBAHXZ
     */
    MCAPI int getGrowthSpawnCost() const;
    /**
     * @hash   -1515288038
     * @symbol ?getMaxCharge@SculkSpreader@@QEBAHXZ
     */
    MCAPI int getMaxCharge() const;
    /**
     * @hash   550418152
     * @symbol ?getNoGrowthRadius@SculkSpreader@@QEBAHXZ
     */
    MCAPI int getNoGrowthRadius() const;
    /**
     * @hash   1353068916
     * @symbol ?getNumberOfCursors@SculkSpreader@@QEBAHXZ
     */
    MCAPI int getNumberOfCursors() const;
    /**
     * @hash   -715527195
     * @symbol ?getSculkReplaceableBlocks@SculkSpreader@@QEAAAEBV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@XZ
     */
    MCAPI class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const & getSculkReplaceableBlocks();
    /**
     * @hash   -1699824294
     * @symbol ?getTotalCharge@SculkSpreader@@QEBAHXZ
     */
    MCAPI int getTotalCharge() const;
    /**
     * @hash   -1613549752
     * @symbol ?isWorldGen@SculkSpreader@@QEBA_NXZ
     */
    MCAPI bool isWorldGen() const;
    /**
     * @hash   -582549256
     * @symbol ?load@SculkSpreader@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @hash   -1324268466
     * @symbol ?save@SculkSpreader@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @hash   131857001
     * @symbol ?updateCursors@SculkSpreader@@QEAAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
     */
    MCAPI void updateCursors(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class Random &, bool);
    /**
     * @hash   296601232
     * @symbol ??1SculkSpreader@@QEAA@XZ
     */
    MCAPI ~SculkSpreader();

};