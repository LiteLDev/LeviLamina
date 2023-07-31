#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsomniaComponent {

public:
    // prevent constructor by default
    InsomniaComponent& operator=(InsomniaComponent const&) = delete;
    InsomniaComponent(InsomniaComponent const&)            = delete;
    InsomniaComponent()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?addAdditionalSaveData\@InsomniaComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?getInsomniaTimerTicks\@InsomniaComponent\@\@QEBAHXZ
     */
    MCAPI int getInsomniaTimerTicks() const;
    /**
     * @symbol ?getTicksUntilInsomnia\@InsomniaComponent\@\@QEBAHXZ
     */
    MCAPI int getTicksUntilInsomnia() const;
    /**
     * @symbol ?incrementTimeSinceRest\@InsomniaComponent\@\@QEAAHXZ
     */
    MCAPI int incrementTimeSinceRest();
    /**
     * @symbol
     * ?readAdditionalSaveData\@InsomniaComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?restartTimer\@InsomniaComponent\@\@QEAAXXZ
     */
    MCAPI void restartTimer();
    // NOLINTEND
};
