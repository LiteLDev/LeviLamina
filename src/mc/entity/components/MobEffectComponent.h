#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEffectComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTCOMPONENT
public:
    MobEffectComponent& operator=(MobEffectComponent const&) = delete;
    MobEffectComponent(MobEffectComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0MobEffectComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI MobEffectComponent(class MobEffectComponent&&);
    /**
     * @symbol ??0MobEffectComponent\@\@QEAA\@XZ
     */
    MCAPI MobEffectComponent();
    /**
     * @symbol ?addAdditionalSaveData\@MobEffectComponent\@\@QEBAXAEAVCompoundTag\@\@AEBVActor\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&, class Actor const&) const;
    /**
     * @symbol ??4MobEffectComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class MobEffectComponent& operator=(class MobEffectComponent&&);
    /**
     * @symbol
     * ?readAdditionalSaveData\@MobEffectComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?tick\@MobEffectComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void tick(class Actor&);
    /**
     * @symbol ??1MobEffectComponent\@\@QEAA\@XZ
     */
    MCAPI ~MobEffectComponent();
};
