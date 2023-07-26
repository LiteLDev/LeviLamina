#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DefaultSculkBehavior {

public:
    // prevent constructor by default
    DefaultSculkBehavior& operator=(DefaultSculkBehavior const&) = delete;
    DefaultSculkBehavior(DefaultSculkBehavior const&)            = delete;
    DefaultSculkBehavior()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?updateDecayDelay\@DefaultSculkBehavior\@\@UEBAHH\@Z
     */
    virtual int updateDecayDelay(int) const; // NOLINT
    /**
     * @vftbl 1
     * @symbol ?updateFacingData\@DefaultSculkBehavior\@\@UEBAHHAEBVBlock\@\@\@Z
     */
    virtual int updateFacingData(int, class Block const&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canChangeBlockOnSpread\@DefaultSculkBehavior\@\@UEBA_NXZ
     */
    virtual bool canChangeBlockOnSpread() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?attemptSpreadVeins\@DefaultSculkBehavior\@\@UEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@HAEAVSculkSpreader\@\@\@Z
     */
    virtual bool
    attemptSpreadVeins(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&, int, class SculkSpreader&)
        const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?attemptUseCharge\@DefaultSculkBehavior\@\@UEBAHAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@2HHAEAVRandom\@\@AEAVSculkSpreader\@\@_N\@Z
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
     * ?onDischarged\@DefaultSculkBehavior\@\@UEBAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onDischarged(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&) const; // NOLINT
};
