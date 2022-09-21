/**
 * @file  MC/DamageOverTimeComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DamageOverTimeComponent.
 *
 */
class DamageOverTimeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGEOVERTIMECOMPONENT
public:
    class DamageOverTimeComponent& operator=(class DamageOverTimeComponent const &) = delete;
    DamageOverTimeComponent(class DamageOverTimeComponent const &) = delete;
    DamageOverTimeComponent() = delete;
#endif

public:
    /**
     * @hash   -934926728
     * @symbol ?addAdditionalSaveData@DamageOverTimeComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -585871476
     * @symbol ?getDamageTime@DamageOverTimeComponent@@QEBAHXZ
     */
    MCAPI int getDamageTime() const;
    /**
     * @hash   -327205898
     * @symbol ?getDamageTimeInterval@DamageOverTimeComponent@@QEBAHXZ
     */
    MCAPI int getDamageTimeInterval() const;
    /**
     * @hash   1644716462
     * @symbol ?getHurtValue@DamageOverTimeComponent@@QEBAHXZ
     */
    MCAPI int getHurtValue() const;
    /**
     * @hash   -618898614
     * @symbol ?readAdditionalSaveData@DamageOverTimeComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1357914694
     * @symbol ?setDamageTime@DamageOverTimeComponent@@QEAAXH@Z
     */
    MCAPI void setDamageTime(int);

};