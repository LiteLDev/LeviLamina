#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FreezingComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FREEZINGCOMPONENT
public:
    FreezingComponent& operator=(FreezingComponent const&) = delete;
    FreezingComponent(FreezingComponent const&)            = delete;
    FreezingComponent()                                    = delete;
#endif

public:
    /**
     * @symbol ?addAdditionalSaveData\@FreezingComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?decreaseFreezingEffect\@FreezingComponent\@\@QEAAXXZ
     */
    MCAPI void decreaseFreezingEffect();
    /**
     * @symbol ?getFreezingEffectStrength\@FreezingComponent\@\@QEBAMXZ
     */
    MCAPI float getFreezingEffectStrength() const;
    /**
     * @symbol ?increaseFreezingEffect\@FreezingComponent\@\@QEAAXXZ
     */
    MCAPI void increaseFreezingEffect();
    /**
     * @symbol ?isFullyFrozen\@FreezingComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFullyFrozen() const;
    /**
     * @symbol ?isFullyUnfrozen\@FreezingComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFullyUnfrozen() const;
    /**
     * @symbol
     * ?readAdditionalSaveData\@FreezingComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?resetFreezingEffect\@FreezingComponent\@\@QEAAXXZ
     */
    MCAPI void resetFreezingEffect();
};
