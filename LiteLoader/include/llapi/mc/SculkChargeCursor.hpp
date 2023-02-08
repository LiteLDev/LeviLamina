/**
 * @file  SculkChargeCursor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkChargeCursor.
 *
 */
class SculkChargeCursor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKCHARGECURSOR
public:
    class SculkChargeCursor& operator=(class SculkChargeCursor const &) = delete;
    SculkChargeCursor(class SculkChargeCursor const &) = delete;
    SculkChargeCursor() = delete;
#endif

public:
    /**
     * @hash   -1755086323
     * @symbol  ??0SculkChargeCursor\@\@QEAA\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI SculkChargeCursor(class CompoundTag const &);
    /**
     * @hash   1416953186
     * @symbol  ??0SculkChargeCursor\@\@QEAA\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI SculkChargeCursor(class BlockPos const &, int);
    /**
     * @hash   -1082369047
     * @symbol  ?addFrom\@SculkChargeCursor\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void addFrom(class SculkChargeCursor const &);
    /**
     * @hash   829153144
     * @symbol  ?load\@SculkChargeCursor\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @hash   -835810178
     * @symbol  ?save\@SculkChargeCursor\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @hash   -1457756632
     * @symbol  ?update\@SculkChargeCursor\@\@QEAAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVSculkSpreader\@\@_N\@Z
     */
    MCAPI void update(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class Random &, class SculkSpreader &, bool);

//private:
    /**
     * @hash   -1214032458
     * @symbol  ?_getNonCornerNeighborsOffsets\@SculkChargeCursor\@\@CA?AV?$array\@VBlockPos\@\@$0BC\@\@std\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static class std::array<class BlockPos, 18> _getNonCornerNeighborsOffsets(class Random &);
    /**
     * @hash   1746838646
     * @symbol  ?_getSculkBehavior\@SculkChargeCursor\@\@CAAEBVSculkBehavior\@\@AEBVBlock\@\@\@Z
     */
    MCAPI static class SculkBehavior const & _getSculkBehavior(class Block const &);
    /**
     * @hash   -1012477852
     * @symbol  ?_isMovementUnobstructed\@SculkChargeCursor\@\@CA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI static bool _isMovementUnobstructed(class IBlockWorldGenAPI &, class BlockPos const &, class BlockPos const &);

private:
    /**
     * @hash   1288309977
     * @symbol  ?sDefaultSculkBehavior\@SculkChargeCursor\@\@0VDefaultSculkBehavior\@\@B
     */
    MCAPI static class DefaultSculkBehavior const sDefaultSculkBehavior;
    /**
     * @hash   -377148575
     * @symbol  ?sSculkBlockBehavior\@SculkChargeCursor\@\@0VSculkBlockBehavior\@\@B
     */
    MCAPI static class SculkBlockBehavior const sSculkBlockBehavior;
    /**
     * @hash   -552186519
     * @symbol  ?sSculkVeinBlockBehavior\@SculkChargeCursor\@\@0VSculkVeinBlockBehavior\@\@B
     */
    MCAPI static class SculkVeinBlockBehavior const sSculkVeinBlockBehavior;

};