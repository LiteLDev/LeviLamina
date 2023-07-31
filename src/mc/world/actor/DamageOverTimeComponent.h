#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DamageOverTimeComponent {

public:
    // prevent constructor by default
    DamageOverTimeComponent& operator=(DamageOverTimeComponent const&) = delete;
    DamageOverTimeComponent(DamageOverTimeComponent const&)            = delete;
    DamageOverTimeComponent()                                          = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
