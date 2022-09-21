/**
 * @file  MC/InsomniaComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InsomniaComponent.
 *
 */
class InsomniaComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSOMNIACOMPONENT
public:
    class InsomniaComponent& operator=(class InsomniaComponent const &) = delete;
    InsomniaComponent(class InsomniaComponent const &) = delete;
    InsomniaComponent() = delete;
#endif

public:
    /**
     * @hash   -752547880
     * @symbol ?addAdditionalSaveData@InsomniaComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -474629958
     * @symbol ?getInsomniaTimerTicks@InsomniaComponent@@QEBAHXZ
     */
    MCAPI int getInsomniaTimerTicks() const;
    /**
     * @hash   882452248
     * @symbol ?getTicksUntilInsomnia@InsomniaComponent@@QEBAHXZ
     */
    MCAPI int getTicksUntilInsomnia() const;
    /**
     * @hash   1912074316
     * @symbol ?incrementTimeSinceRest@InsomniaComponent@@QEAAHXZ
     */
    MCAPI int incrementTimeSinceRest();
    /**
     * @hash   -2033196490
     * @symbol ?readAdditionalSaveData@InsomniaComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -2019181505
     * @symbol ?restartTimer@InsomniaComponent@@QEAAXXZ
     */
    MCAPI void restartTimer();

};