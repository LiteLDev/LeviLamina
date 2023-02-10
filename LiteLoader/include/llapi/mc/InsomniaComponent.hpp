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
     * @hash   -1603547976
     * @symbol  ?addAdditionalSaveData\@InsomniaComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -223616758
     * @symbol  ?getInsomniaTimerTicks\@InsomniaComponent\@\@QEBAHXZ
     */
    MCAPI int getInsomniaTimerTicks() const;
    /**
     * @hash   1009888536
     * @symbol  ?getTicksUntilInsomnia\@InsomniaComponent\@\@QEBAHXZ
     */
    MCAPI int getTicksUntilInsomnia() const;
    /**
     * @hash   1061058844
     * @symbol  ?incrementTimeSinceRest\@InsomniaComponent\@\@QEAAHXZ
     */
    MCAPI int incrementTimeSinceRest();
    /**
     * @hash   1410755334
     * @symbol  ?readAdditionalSaveData\@InsomniaComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1424770319
     * @symbol  ?restartTimer\@InsomniaComponent\@\@QEAAXXZ
     */
    MCAPI void restartTimer();

};