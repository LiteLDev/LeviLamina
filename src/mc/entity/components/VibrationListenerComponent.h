#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationListenerComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONLISTENERCOMPONENT
public:
    VibrationListenerComponent& operator=(VibrationListenerComponent const&) = delete;
    VibrationListenerComponent(VibrationListenerComponent const&)            = delete;
    VibrationListenerComponent()                                             = delete;
#endif

public:
    /**
     * @symbol ?addAdditionalSaveData\@VibrationListenerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol
     * ?readAdditionalSaveData\@VibrationListenerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
};
