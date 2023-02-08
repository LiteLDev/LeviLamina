/**
 * @file  SculkBlockBehavior.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1187556363
     * @vftbl  0
     * @symbol  ?updateDecayDelay\@SculkBlockBehavior\@\@UEBAHH\@Z
     */
    virtual int updateDecayDelay(int) const;
    /**
     * @hash   1366396874
     * @vftbl  1
     * @symbol  ?updateFacingData\@SculkBlockBehavior\@\@UEBAHHAEBVBlock\@\@\@Z
     */
    virtual int updateFacingData(int, class Block const &) const;
    /**
     * @hash   1235676252
     * @vftbl  2
     * @symbol  ?canChangeBlockOnSpread\@SculkBlockBehavior\@\@UEBA_NXZ
     */
    virtual bool canChangeBlockOnSpread() const;
    /**
     * @hash   -597789679
     * @vftbl  3
     * @symbol  ?attemptSpreadVeins\@SculkBlockBehavior\@\@UEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@HAEAVSculkSpreader\@\@\@Z
     */
    virtual bool attemptSpreadVeins(class IBlockWorldGenAPI &, class BlockPos const &, class Block const &, int, class SculkSpreader &) const;
    /**
     * @hash   -235133039
     * @vftbl  4
     * @symbol  ?attemptUseCharge\@SculkBlockBehavior\@\@UEBAHAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@2HHAEAVRandom\@\@AEAVSculkSpreader\@\@_N\@Z
     */
    virtual int attemptUseCharge(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class BlockPos const &, int, int, class Random &, class SculkSpreader &, bool) const;
    /**
     * @hash   -1957061072
     * @vftbl  5
     * @symbol  ?onDischarged\@SculkBlockBehavior\@\@UEBAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onDischarged(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &) const;

//private:
    /**
     * @hash   -174737310
     * @symbol  ?_placeGrowthAt\@SculkBlockBehavior\@\@CAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVSculkSpreader\@\@\@Z
     */
    MCAPI static void _placeGrowthAt(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class Random &, class SculkSpreader &);

private:

};