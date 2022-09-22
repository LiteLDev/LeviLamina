/**
 * @file  SculkBlockBehavior.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkBlockBehavior.
 *
 */
class SculkBlockBehavior {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKBLOCKBEHAVIOR
public:
    class SculkBlockBehavior& operator=(class SculkBlockBehavior const &) = delete;
    SculkBlockBehavior(class SculkBlockBehavior const &) = delete;
    SculkBlockBehavior() = delete;
#endif

public:
    /**
     * @hash   1081615723
     * @vftbl  0
     * @symbol ?updateDecayDelay@SculkBlockBehavior@@UEBAHH@Z
     */
    virtual int updateDecayDelay(int) const;
    /**
     * @hash   662299082
     * @vftbl  1
     * @symbol ?updateFacingData@SculkBlockBehavior@@UEBAHHAEBVBlock@@@Z
     */
    virtual int updateFacingData(int, class Block const &) const;
    /**
     * @hash   1135055708
     * @vftbl  2
     * @symbol ?canChangeBlockOnSpread@SculkBlockBehavior@@UEBA_NXZ
     */
    virtual bool canChangeBlockOnSpread() const;
    /**
     * @hash   -1301825967
     * @vftbl  3
     * @symbol ?attemptSpreadVeins@SculkBlockBehavior@@UEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@HAEAVSculkSpreader@@@Z
     */
    virtual bool attemptSpreadVeins(class IBlockWorldGenAPI &, class BlockPos const &, class Block const &, int, class SculkSpreader &) const;
    /**
     * @hash   -939169327
     * @vftbl  4
     * @symbol ?attemptUseCharge@SculkBlockBehavior@@UEBAHAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@2HHAEAVRandom@@AEAVSculkSpreader@@_N@Z
     */
    virtual int attemptUseCharge(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class BlockPos const &, int, int, class Random &, class SculkSpreader &, bool) const;
    /**
     * @hash   -2048948048
     * @vftbl  5
     * @symbol ?onDischarged@SculkBlockBehavior@@UEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onDischarged(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &) const;

//private:
    /**
     * @hash   -878665966
     * @symbol ?_placeGrowthAt@SculkBlockBehavior@@CAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAVSculkSpreader@@@Z
     */
    MCAPI static void _placeGrowthAt(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class Random &, class SculkSpreader &);

private:

};