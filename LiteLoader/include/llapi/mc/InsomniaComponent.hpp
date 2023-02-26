/**
 * @file  InsomniaComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?addAdditionalSaveData\@InsomniaComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?getInsomniaTimerTicks\@InsomniaComponent\@\@QEBAHXZ
     */
    MCAPI int getInsomniaTimerTicks() const;
    /**
     * @symbol  ?getTicksUntilInsomnia\@InsomniaComponent\@\@QEBAHXZ
     */
    MCAPI int getTicksUntilInsomnia() const;
    /**
     * @symbol  ?incrementTimeSinceRest\@InsomniaComponent\@\@QEAAHXZ
     */
    MCAPI int incrementTimeSinceRest();
    /**
     * @symbol  ?readAdditionalSaveData\@InsomniaComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?restartTimer\@InsomniaComponent\@\@QEAAXXZ
     */
    MCAPI void restartTimer();

};