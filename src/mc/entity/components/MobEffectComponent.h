#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEffectComponent {

public:
    // prevent constructor by default
    MobEffectComponent& operator=(MobEffectComponent const&) = delete;
    MobEffectComponent(MobEffectComponent const&)            = delete;

public:
    /**
     * @symbol ??0MobEffectComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI MobEffectComponent(class MobEffectComponent&&); // NOLINT
    /**
     * @symbol ??0MobEffectComponent\@\@QEAA\@XZ
     */
    MCAPI MobEffectComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@MobEffectComponent\@\@QEBAXAEAVCompoundTag\@\@AEBVActor\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&, class Actor const&) const; // NOLINT
    /**
     * @symbol ??4MobEffectComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class MobEffectComponent& operator=(class MobEffectComponent&&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@MobEffectComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?tick\@MobEffectComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void tick(class Actor&); // NOLINT
    /**
     * @symbol ??1MobEffectComponent\@\@QEAA\@XZ
     */
    MCAPI ~MobEffectComponent(); // NOLINT
};
