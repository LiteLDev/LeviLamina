/**
 * @file  MC/FreezingComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FreezingComponent.
 *
 */
class FreezingComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FREEZINGCOMPONENT
public:
    class FreezingComponent& operator=(class FreezingComponent const &) = delete;
    FreezingComponent(class FreezingComponent const &) = delete;
    FreezingComponent() = delete;
#endif

public:
    /**
     * @hash   1181101352
     * @symbol ?addAdditionalSaveData@FreezingComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -780320247
     * @symbol ?decreaseFreezingEffect@FreezingComponent@@QEAAXXZ
     */
    MCAPI void decreaseFreezingEffect();
    /**
     * @hash   -955994978
     * @symbol ?getFreezingEffectStrength@FreezingComponent@@QEBAMXZ
     */
    MCAPI float getFreezingEffectStrength() const;
    /**
     * @hash   882227057
     * @symbol ?increaseFreezingEffect@FreezingComponent@@QEAAXXZ
     */
    MCAPI void increaseFreezingEffect();
    /**
     * @hash   -424996
     * @symbol ?isFullyFrozen@FreezingComponent@@QEBA_NXZ
     */
    MCAPI bool isFullyFrozen() const;
    /**
     * @hash   -398205348
     * @symbol ?isFullyUnfrozen@FreezingComponent@@QEBA_NXZ
     */
    MCAPI bool isFullyUnfrozen() const;
    /**
     * @hash   -1974973762
     * @symbol ??8FreezingComponent@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class FreezingComponent const &) const;
    /**
     * @hash   893083106
     * @symbol ?readAdditionalSaveData@FreezingComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1875101837
     * @symbol ?resetFreezingEffect@FreezingComponent@@QEAAXXZ
     */
    MCAPI void resetFreezingEffect();

};