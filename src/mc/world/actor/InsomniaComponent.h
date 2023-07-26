#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsomniaComponent {

public:
    // prevent constructor by default
    InsomniaComponent& operator=(InsomniaComponent const&) = delete;
    InsomniaComponent(InsomniaComponent const&)            = delete;
    InsomniaComponent()                                    = delete;

public:
    /**
     * @symbol ?addAdditionalSaveData\@InsomniaComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?getInsomniaTimerTicks\@InsomniaComponent\@\@QEBAHXZ
     */
    MCAPI int getInsomniaTimerTicks() const; // NOLINT
    /**
     * @symbol ?getTicksUntilInsomnia\@InsomniaComponent\@\@QEBAHXZ
     */
    MCAPI int getTicksUntilInsomnia() const; // NOLINT
    /**
     * @symbol ?incrementTimeSinceRest\@InsomniaComponent\@\@QEAAHXZ
     */
    MCAPI int incrementTimeSinceRest(); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@InsomniaComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?restartTimer\@InsomniaComponent\@\@QEAAXXZ
     */
    MCAPI void restartTimer(); // NOLINT
};
