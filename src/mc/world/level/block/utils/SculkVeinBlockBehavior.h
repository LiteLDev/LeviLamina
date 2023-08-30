#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SculkBehavior.h"

class SculkVeinBlockBehavior : public ::SculkBehavior {

public:
    // prevent constructor by default
    SculkVeinBlockBehavior& operator=(SculkVeinBlockBehavior const&) = delete;
    SculkVeinBlockBehavior(SculkVeinBlockBehavior const&)            = delete;
    SculkVeinBlockBehavior()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?updateDecayDelay\@SculkVeinBlockBehavior\@\@UEBAHH\@Z
     */
    virtual int32_t updateDecayDelay(int32_t) const;
    /**
     * @vftbl 1
     * @symbol ?updateFacingData\@SculkVeinBlockBehavior\@\@UEBAHHAEBVBlock\@\@\@Z
     */
    virtual int32_t updateFacingData(int32_t, class Block const&) const;
    /**
     * @vftbl 2
     * @symbol ?canChangeBlockOnSpread\@SculkVeinBlockBehavior\@\@UEBA_NXZ
     */
    virtual bool canChangeBlockOnSpread() const;
    /**
     * @vftbl 3
     * @symbol
     * ?attemptSpreadVeins\@SculkVeinBlockBehavior\@\@UEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@HAEAVSculkSpreader\@\@\@Z
     */
    virtual bool
    attemptSpreadVeins(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&, int32_t, class SculkSpreader&)
        const;
    /**
     * @vftbl 4
     * @symbol
     * ?attemptUseCharge\@SculkVeinBlockBehavior\@\@UEBAHAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@2HHAEAVRandom\@\@AEAVSculkSpreader\@\@_N\@Z
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
     * ?onDischarged\@SculkVeinBlockBehavior\@\@UEBAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onDischarged(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_attemptPlaceSculk\@SculkVeinBlockBehavior\@\@CA_NAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@AEAVSculkSpreader\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static bool
    _attemptPlaceSculk(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&, class SculkSpreader&, class Random&);
    /**
     * @symbol
     * ?_cleanUpVeinsWithSculkSubstrate\@SculkVeinBlockBehavior\@\@CAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void
    _cleanUpVeinsWithSculkSubstrate(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&);
    // NOLINTEND
};
