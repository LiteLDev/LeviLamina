#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SculkBehavior.h"

class DefaultSculkBehavior : public ::SculkBehavior {

public:
    // prevent constructor by default
    DefaultSculkBehavior& operator=(DefaultSculkBehavior const&) = delete;
    DefaultSculkBehavior(DefaultSculkBehavior const&)            = delete;
    DefaultSculkBehavior()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?updateDecayDelay\@DefaultSculkBehavior\@\@UEBAHH\@Z
     */
    virtual int32_t updateDecayDelay(int32_t) const;
    /**
     * @vftbl 1
     * @symbol ?updateFacingData\@DefaultSculkBehavior\@\@UEBAHHAEBVBlock\@\@\@Z
     */
    virtual int32_t updateFacingData(int32_t, class Block const&) const;
    /**
     * @vftbl 2
     * @symbol ?canChangeBlockOnSpread\@DefaultSculkBehavior\@\@UEBA_NXZ
     */
    virtual bool canChangeBlockOnSpread() const;
    /**
     * @vftbl 3
     * @symbol
     * ?attemptSpreadVeins\@DefaultSculkBehavior\@\@UEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@HAEAVSculkSpreader\@\@\@Z
     */
    virtual bool
    attemptSpreadVeins(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&, int32_t, class SculkSpreader&)
        const;
    /**
     * @vftbl 4
     * @symbol
     * ?attemptUseCharge\@DefaultSculkBehavior\@\@UEBAHAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@2HHAEAVRandom\@\@AEAVSculkSpreader\@\@_N\@Z
     */
    virtual int32_t attemptUseCharge(
        class IBlockWorldGenAPI&,
        class BlockSource*,
        class BlockPos const&,
        class BlockPos const&,
        int32_t,
        int32_t,
        class Random&,
        class SculkSpreader&,
        bool
    ) const;
    /**
     * @vftbl 5
     * @symbol
     * ?onDischarged\@DefaultSculkBehavior\@\@UEBAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onDischarged(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&) const;
    // NOLINTEND
};
