/**
 * @file  SculkVeinBlockBehavior.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkVeinBlockBehavior.
 *
 */
class SculkVeinBlockBehavior {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKVEINBLOCKBEHAVIOR
public:
    class SculkVeinBlockBehavior& operator=(class SculkVeinBlockBehavior const &) = delete;
    SculkVeinBlockBehavior(class SculkVeinBlockBehavior const &) = delete;
    SculkVeinBlockBehavior() = delete;
#endif

public:
    /**
     * @hash   -1864168393
     * @vftbl  0
     * @symbol ?updateDecayDelay@SculkVeinBlockBehavior@@UEBAHH@Z
     */
    virtual int updateDecayDelay(int) const;
    /**
     * @hash   -1093713778
     * @vftbl  1
     * @symbol ?updateFacingData@SculkVeinBlockBehavior@@UEBAHHAEBVBlock@@@Z
     */
    virtual int updateFacingData(int, class Block const &) const;
    /**
     * @hash   1040896688
     * @vftbl  2
     * @symbol ?canChangeBlockOnSpread@SculkVeinBlockBehavior@@UEBA_NXZ
     */
    virtual bool canChangeBlockOnSpread() const;
    /**
     * @hash   -1693833443
     * @vftbl  3
     * @symbol ?attemptSpreadVeins@SculkVeinBlockBehavior@@UEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@HAEAVSculkSpreader@@@Z
     */
    virtual bool attemptSpreadVeins(class IBlockWorldGenAPI &, class BlockPos const &, class Block const &, int, class SculkSpreader &) const;
    /**
     * @hash   -444558995
     * @vftbl  4
     * @symbol ?attemptUseCharge@SculkVeinBlockBehavior@@UEBAHAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@2HHAEAVRandom@@AEAVSculkSpreader@@_N@Z
     */
    virtual int attemptUseCharge(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class BlockPos const &, int, int, class Random &, class SculkSpreader &, bool) const;
    /**
     * @hash   -23082484
     * @vftbl  5
     * @symbol ?onDischarged@SculkVeinBlockBehavior@@UEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onDischarged(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &) const;

//private:
    /**
     * @hash   817305149
     * @symbol ?_attemptPlaceSculk@SculkVeinBlockBehavior@@CA_NAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@AEAVSculkSpreader@@AEAVRandom@@@Z
     */
    MCAPI static bool _attemptPlaceSculk(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class SculkSpreader &, class Random &);
    /**
     * @hash   -267596876
     * @symbol ?_cleanUpVeinsWithSculkSubstrate@SculkVeinBlockBehavior@@CAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static void _cleanUpVeinsWithSculkSubstrate(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &);

private:

};