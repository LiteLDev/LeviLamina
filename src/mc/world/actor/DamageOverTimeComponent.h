#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DamageOverTimeComponent {

public:
    // prevent constructor by default
    DamageOverTimeComponent& operator=(DamageOverTimeComponent const&) = delete;
    DamageOverTimeComponent(DamageOverTimeComponent const&)            = delete;
    DamageOverTimeComponent()                                          = delete;

public:
    /**
     * @symbol ?addAdditionalSaveData\@DamageOverTimeComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?getDamageTime\@DamageOverTimeComponent\@\@QEBAHXZ
     */
    MCAPI int getDamageTime() const; // NOLINT
    /**
     * @symbol ?getDamageTimeInterval\@DamageOverTimeComponent\@\@QEBAHXZ
     */
    MCAPI int getDamageTimeInterval() const; // NOLINT
    /**
     * @symbol ?getHurtValue\@DamageOverTimeComponent\@\@QEBAHXZ
     */
    MCAPI int getHurtValue() const; // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@DamageOverTimeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?setDamageTime\@DamageOverTimeComponent\@\@QEAAXH\@Z
     */
    MCAPI void setDamageTime(int); // NOLINT
};
