/**
 * @file  SculkVeinBlockBehavior.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @vftbl  0
     * @symbol  ?updateDecayDelay\@SculkVeinBlockBehavior\@\@UEBAHH\@Z
     */
    virtual int updateDecayDelay(int) const;
    /**
     * @vftbl  1
     * @symbol  ?updateFacingData\@SculkVeinBlockBehavior\@\@UEBAHHAEBVBlock\@\@\@Z
     */
    virtual int updateFacingData(int, class Block const &) const;
    /**
     * @vftbl  2
     * @symbol  ?canChangeBlockOnSpread\@SculkVeinBlockBehavior\@\@UEBA_NXZ
     */
    virtual bool canChangeBlockOnSpread() const;
    /**
     * @vftbl  3
     * @symbol  ?attemptSpreadVeins\@SculkVeinBlockBehavior\@\@UEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@HAEAVSculkSpreader\@\@\@Z
     */
    virtual bool attemptSpreadVeins(class IBlockWorldGenAPI &, class BlockPos const &, class Block const &, int, class SculkSpreader &) const;
    /**
     * @vftbl  4
     * @symbol  ?attemptUseCharge\@SculkVeinBlockBehavior\@\@UEBAHAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@2HHAEAVRandom\@\@AEAVSculkSpreader\@\@_N\@Z
     */
    virtual int attemptUseCharge(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class BlockPos const &, int, int, class Random &, class SculkSpreader &, bool) const;
    /**
     * @vftbl  5
     * @symbol  ?onDischarged\@SculkVeinBlockBehavior\@\@UEBAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onDischarged(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &) const;

//private:
    /**
     * @symbol  ?_attemptPlaceSculk\@SculkVeinBlockBehavior\@\@CA_NAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@AEAVSculkSpreader\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static bool _attemptPlaceSculk(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class SculkSpreader &, class Random &);
    /**
     * @symbol  ?_cleanUpVeinsWithSculkSubstrate\@SculkVeinBlockBehavior\@\@CAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void _cleanUpVeinsWithSculkSubstrate(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &);

private:

};