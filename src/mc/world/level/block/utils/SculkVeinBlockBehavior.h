#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SculkVeinBlockBehavior {

public:
    // prevent constructor by default
    SculkVeinBlockBehavior& operator=(SculkVeinBlockBehavior const&) = delete;
    SculkVeinBlockBehavior(SculkVeinBlockBehavior const&)            = delete;
    SculkVeinBlockBehavior()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?updateDecayDelay\@SculkVeinBlockBehavior\@\@UEBAHH\@Z
     */
    virtual int updateDecayDelay(int) const; // NOLINT
    /**
     * @vftbl 1
     * @symbol ?updateFacingData\@SculkVeinBlockBehavior\@\@UEBAHHAEBVBlock\@\@\@Z
     */
    virtual int updateFacingData(int, class Block const&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canChangeBlockOnSpread\@SculkVeinBlockBehavior\@\@UEBA_NXZ
     */
    virtual bool canChangeBlockOnSpread() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?attemptSpreadVeins\@SculkVeinBlockBehavior\@\@UEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@HAEAVSculkSpreader\@\@\@Z
     */
    virtual bool
    attemptSpreadVeins(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&, int, class SculkSpreader&)
        const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?attemptUseCharge\@SculkVeinBlockBehavior\@\@UEBAHAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@2HHAEAVRandom\@\@AEAVSculkSpreader\@\@_N\@Z
     */
    virtual int attemptUseCharge(
        class IBlockWorldGenAPI&,
        class BlockSource*,
        class BlockPos const&,
        class BlockPos const&,
        int,
        int,
        class Random&,
        class SculkSpreader&,
        bool
    ) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?onDischarged\@SculkVeinBlockBehavior\@\@UEBAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onDischarged(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&) const; // NOLINT

    // private:
    /**
     * @symbol
     * ?_attemptPlaceSculk\@SculkVeinBlockBehavior\@\@CA_NAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@AEAVSculkSpreader\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static bool
    _attemptPlaceSculk(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&, class SculkSpreader&, class Random&); // NOLINT
    /**
     * @symbol
     * ?_cleanUpVeinsWithSculkSubstrate\@SculkVeinBlockBehavior\@\@CAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void
    _cleanUpVeinsWithSculkSubstrate(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&); // NOLINT

private:
};
