/**
 * @file  MC/DefaultSculkBehavior.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DefaultSculkBehavior.
 *
 */
class DefaultSculkBehavior {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFAULTSCULKBEHAVIOR
public:
    class DefaultSculkBehavior& operator=(class DefaultSculkBehavior const &) = delete;
    DefaultSculkBehavior(class DefaultSculkBehavior const &) = delete;
    DefaultSculkBehavior() = delete;
#endif

public:
    /**
     * @hash   -1234713611
     * @vftbl  0
     * @symbol ?updateDecayDelay@DefaultSculkBehavior@@UEBAHH@Z
     */
    virtual int updateDecayDelay(int) const;
    /**
     * @hash   424782368
     * @vftbl  1
     * @symbol ?updateFacingData@DefaultSculkBehavior@@UEBAHHAEBVBlock@@@Z
     */
    virtual int updateFacingData(int, class Block const &) const;
    /**
     * @hash   -1341078174
     * @vftbl  2
     * @symbol ?canChangeBlockOnSpread@DefaultSculkBehavior@@UEBA_NXZ
     */
    virtual bool canChangeBlockOnSpread() const;
    /**
     * @hash   835808427
     * @vftbl  3
     * @symbol ?attemptSpreadVeins@DefaultSculkBehavior@@UEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@HAEAVSculkSpreader@@@Z
     */
    virtual bool attemptSpreadVeins(class IBlockWorldGenAPI &, class BlockPos const &, class Block const &, int, class SculkSpreader &) const;
    /**
     * @hash   -546933989
     * @vftbl  4
     * @symbol ?attemptUseCharge@DefaultSculkBehavior@@UEBAHAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@2HHAEAVRandom@@AEAVSculkSpreader@@_N@Z
     */
    virtual int attemptUseCharge(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class BlockPos const &, int, int, class Random &, class SculkSpreader &, bool) const;
    /**
     * @hash   561910154
     * @vftbl  5
     * @symbol ?onDischarged@DefaultSculkBehavior@@UEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onDischarged(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &) const;

};