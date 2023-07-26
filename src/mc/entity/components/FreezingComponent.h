#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FreezingComponent {

public:
    // prevent constructor by default
    FreezingComponent& operator=(FreezingComponent const&) = delete;
    FreezingComponent(FreezingComponent const&)            = delete;
    FreezingComponent()                                    = delete;

public:
    /**
     * @symbol ?addAdditionalSaveData\@FreezingComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?decreaseFreezingEffect\@FreezingComponent\@\@QEAAXXZ
     */
    MCAPI void decreaseFreezingEffect(); // NOLINT
    /**
     * @symbol ?getFreezingEffectStrength\@FreezingComponent\@\@QEBAMXZ
     */
    MCAPI float getFreezingEffectStrength() const; // NOLINT
    /**
     * @symbol ?increaseFreezingEffect\@FreezingComponent\@\@QEAAXXZ
     */
    MCAPI void increaseFreezingEffect(); // NOLINT
    /**
     * @symbol ?isFullyFrozen\@FreezingComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFullyFrozen() const; // NOLINT
    /**
     * @symbol ?isFullyUnfrozen\@FreezingComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFullyUnfrozen() const; // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@FreezingComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?resetFreezingEffect\@FreezingComponent\@\@QEAAXXZ
     */
    MCAPI void resetFreezingEffect(); // NOLINT
};
