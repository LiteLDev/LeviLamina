/**
 * @file  VibrationListenerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VibrationListenerComponent.
 *
 */
class VibrationListenerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONLISTENERCOMPONENT
public:
    class VibrationListenerComponent& operator=(class VibrationListenerComponent const &) = delete;
    VibrationListenerComponent(class VibrationListenerComponent const &) = delete;
    VibrationListenerComponent() = delete;
#endif

public:
    /**
     * @symbol ?addAdditionalSaveData\@VibrationListenerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?readAdditionalSaveData\@VibrationListenerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);

};
