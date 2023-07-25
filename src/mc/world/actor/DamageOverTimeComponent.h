#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DamageOverTimeComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGEOVERTIMECOMPONENT
public:
    DamageOverTimeComponent& operator=(DamageOverTimeComponent const&) = delete;
    DamageOverTimeComponent(DamageOverTimeComponent const&)            = delete;
    DamageOverTimeComponent()                                          = delete;
#endif

public:
    /**
     * @symbol ?addAdditionalSaveData\@DamageOverTimeComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?getDamageTime\@DamageOverTimeComponent\@\@QEBAHXZ
     */
    MCAPI int getDamageTime() const;
    /**
     * @symbol ?getDamageTimeInterval\@DamageOverTimeComponent\@\@QEBAHXZ
     */
    MCAPI int getDamageTimeInterval() const;
    /**
     * @symbol ?getHurtValue\@DamageOverTimeComponent\@\@QEBAHXZ
     */
    MCAPI int getHurtValue() const;
    /**
     * @symbol
     * ?readAdditionalSaveData\@DamageOverTimeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?setDamageTime\@DamageOverTimeComponent\@\@QEAAXH\@Z
     */
    MCAPI void setDamageTime(int);
};
