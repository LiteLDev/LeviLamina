/**
 * @file  CopperBehavior.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CopperBehavior.
 *
 */
class CopperBehavior {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COPPERBEHAVIOR
public:
    class CopperBehavior& operator=(class CopperBehavior const &) = delete;
    CopperBehavior(class CopperBehavior const &) = delete;
    CopperBehavior() = delete;
#endif

public:
    /**
     * @symbol ?getCorrespondingWaxedBlock\@CopperBehavior\@\@QEBAAEBVBlock\@\@AEBV2\@\@Z
     */
    MCAPI class Block const & getCorrespondingWaxedBlock(class Block const &) const;
    /**
     * @symbol ?isWaxable\@CopperBehavior\@\@QEBA_NXZ
     */
    MCAPI bool isWaxable() const;
    /**
     * @symbol ?isWaxed\@CopperBehavior\@\@QEBA_NXZ
     */
    MCAPI bool isWaxed() const;
    /**
     * @symbol ?tryDecrementAge\@CopperBehavior\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool tryDecrementAge(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?tryIncrementAge\@CopperBehavior\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@MM\@Z
     */
    MCAPI bool tryIncrementAge(class BlockSource &, class BlockPos const &, float, float) const;
    /**
     * @symbol ?use\@CopperBehavior\@\@QEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol ??1CopperBehavior\@\@QEAA\@XZ
     */
    MCAPI ~CopperBehavior();

//private:
    /**
     * @symbol ?_incrementAge\@CopperBehavior\@\@AEBAXAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@M\@Z
     */
    MCAPI void _incrementAge(class BlockSource &, class Block const &, class BlockPos const &, float) const;

private:

};
