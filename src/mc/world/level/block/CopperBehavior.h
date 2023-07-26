#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CopperBehavior {

public:
    // prevent constructor by default
    CopperBehavior& operator=(CopperBehavior const&) = delete;
    CopperBehavior(CopperBehavior const&)            = delete;
    CopperBehavior()                                 = delete;

public:
    /**
     * @symbol ?getCorrespondingWaxedBlock\@CopperBehavior\@\@QEBAAEBVBlock\@\@AEBV2\@\@Z
     */
    MCAPI class Block const& getCorrespondingWaxedBlock(class Block const&) const; // NOLINT
    /**
     * @symbol ?isWaxable\@CopperBehavior\@\@QEBA_NXZ
     */
    MCAPI bool isWaxable() const; // NOLINT
    /**
     * @symbol ?isWaxed\@CopperBehavior\@\@QEBA_NXZ
     */
    MCAPI bool isWaxed() const; // NOLINT
    /**
     * @symbol ?tryDecrementAge\@CopperBehavior\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool tryDecrementAge(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?tryIncrementAge\@CopperBehavior\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@MM\@Z
     */
    MCAPI bool tryIncrementAge(class BlockSource&, class BlockPos const&, float, float) const; // NOLINT
    /**
     * @symbol ?use\@CopperBehavior\@\@QEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool use(class Player&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @symbol ??1CopperBehavior\@\@QEAA\@XZ
     */
    MCAPI ~CopperBehavior(); // NOLINT

    // private:
    /**
     * @symbol ?_incrementAge\@CopperBehavior\@\@AEBAXAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@M\@Z
     */
    MCAPI void _incrementAge(class BlockSource&, class Block const&, class BlockPos const&, float) const; // NOLINT

private:
};
