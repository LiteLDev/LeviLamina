/**
 * @file  CopperBehavior.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -612382172
     * @symbol ??0CopperBehavior@@QEAA@W4CopperType@@AEAV?$WeakPtr@VBlockLegacy@@@@AEBV?$function@$$A6AAEBVBlock@@AEBVBlockLegacy@@AEBV1@@Z@std@@@Z
     */
    MCAPI CopperBehavior(enum class CopperType, class WeakPtr<class BlockLegacy> &, class std::function<class Block const & (class BlockLegacy const &, class Block const &)> const &);
    /**
     * @hash   -622446876
     * @symbol ??0CopperBehavior@@QEAA@W4CopperType@@AEAV?$WeakPtr@VBlockLegacy@@@@11AEBV?$function@$$A6AAEBVBlock@@AEBVBlockLegacy@@AEBV1@@Z@std@@@Z
     */
    MCAPI CopperBehavior(enum class CopperType, class WeakPtr<class BlockLegacy> &, class WeakPtr<class BlockLegacy> &, class WeakPtr<class BlockLegacy> &, class std::function<class Block const & (class BlockLegacy const &, class Block const &)> const &);
    /**
     * @hash   -798749582
     * @symbol ?canDecrementAge@CopperBehavior@@QEBA_NXZ
     */
    MCAPI bool canDecrementAge() const;
    /**
     * @hash   -951334534
     * @symbol ?getCorrespondingWaxedBlock@CopperBehavior@@QEBAAEBVBlock@@AEBV2@@Z
     */
    MCAPI class Block const & getCorrespondingWaxedBlock(class Block const &) const;
    /**
     * @hash   -747133738
     * @symbol ?isWaxable@CopperBehavior@@QEBA_NXZ
     */
    MCAPI bool isWaxable() const;
    /**
     * @hash   -694396160
     * @symbol ?isWaxed@CopperBehavior@@QEBA_NXZ
     */
    MCAPI bool isWaxed() const;
    /**
     * @hash   -976248374
     * @symbol ?tryDecrementAge@CopperBehavior@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool tryDecrementAge(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   369379674
     * @symbol ?tryIncrementAge@CopperBehavior@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@MM@Z
     */
    MCAPI bool tryIncrementAge(class BlockSource &, class BlockPos const &, float, float) const;
    /**
     * @hash   -346156428
     * @symbol ?use@CopperBehavior@@QEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    MCAPI bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   348654517
     * @symbol ??1CopperBehavior@@QEAA@XZ
     */
    MCAPI ~CopperBehavior();

//private:
    /**
     * @hash   -875504713
     * @symbol ?_incrementAge@CopperBehavior@@AEBAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@M@Z
     */
    MCAPI void _incrementAge(class BlockSource &, class Block const &, class BlockPos const &, float) const;

private:

};