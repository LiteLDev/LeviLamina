#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationListenerComponent {

public:
    // prevent constructor by default
    VibrationListenerComponent& operator=(VibrationListenerComponent const&) = delete;
    VibrationListenerComponent(VibrationListenerComponent const&)            = delete;
    VibrationListenerComponent()                                             = delete;

public:
    /**
     * @symbol ?addAdditionalSaveData\@VibrationListenerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@VibrationListenerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
};
