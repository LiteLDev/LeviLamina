/**
 * @file  MC/VibrationListenerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -822911464
     * @symbol ?addAdditionalSaveData@VibrationListenerComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -615637096
     * @symbol ?readAdditionalSaveData@VibrationListenerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1783883937
     * @symbol ??1VibrationListenerComponent@@QEAA@XZ
     */
    MCAPI ~VibrationListenerComponent();

};