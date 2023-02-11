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
     * @hash   1784647089
     * @symbol  ??0CopperBehavior\@\@QEAA\@W4CopperType\@\@AEBVHashedString\@\@AEBV?$function\@$$A6AAEBVBlock\@\@AEBVHashedString\@\@AEBV1\@\@Z\@std\@\@\@Z
     */
    MCAPI CopperBehavior(enum class CopperType, class HashedString const &, class std::function<class Block const & (class HashedString const &, class Block const &)> const &);
    /**
     * @hash   -668337807
     * @symbol  ??0CopperBehavior\@\@QEAA\@W4CopperType\@\@AEBVHashedString\@\@11AEBV?$function\@$$A6AAEBVBlock\@\@AEBVHashedString\@\@AEBV1\@\@Z\@std\@\@\@Z
     */
    MCAPI CopperBehavior(enum class CopperType, class HashedString const &, class HashedString const &, class HashedString const &, class std::function<class Block const & (class HashedString const &, class Block const &)> const &);
    /**
     * @hash   -88455262
     * @symbol  ?canDecrementAge\@CopperBehavior\@\@QEBA_NXZ
     */
    MCAPI bool canDecrementAge() const;
    /**
     * @hash   -241009462
     * @symbol  ?getCorrespondingWaxedBlock\@CopperBehavior\@\@QEBAAEBVBlock\@\@AEBV2\@\@Z
     */
    MCAPI class Block const & getCorrespondingWaxedBlock(class Block const &) const;
    /**
     * @hash   -36777914
     * @symbol  ?isWaxable\@CopperBehavior\@\@QEBA_NXZ
     */
    MCAPI bool isWaxable() const;
    /**
     * @hash   15944288
     * @symbol  ?isWaxed\@CopperBehavior\@\@QEBA_NXZ
     */
    MCAPI bool isWaxed() const;
    /**
     * @hash   -265907926
     * @symbol  ?tryDecrementAge\@CopperBehavior\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool tryDecrementAge(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1079750874
     * @symbol  ?tryIncrementAge\@CopperBehavior\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@MM\@Z
     */
    MCAPI bool tryIncrementAge(class BlockSource &, class BlockPos const &, float, float) const;
    /**
     * @hash   364245524
     * @symbol  ?use\@CopperBehavior\@\@QEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   583907317
     * @symbol  ??1CopperBehavior\@\@QEAA\@XZ
     */
    MCAPI ~CopperBehavior();

//private:
    /**
     * @hash   -165241145
     * @symbol  ?_incrementAge\@CopperBehavior\@\@AEBAXAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@M\@Z
     */
    MCAPI void _incrementAge(class BlockSource &, class Block const &, class BlockPos const &, float) const;

private:

};