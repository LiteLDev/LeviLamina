#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsomniaComponent {
public:
    // prevent constructor by default
    InsomniaComponent& operator=(InsomniaComponent const&);
    InsomniaComponent(InsomniaComponent const&);
    InsomniaComponent();

public:
    // NOLINTBEGIN
    // symbol: ?addAdditionalSaveData@InsomniaComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?getInsomniaTimerTicks@InsomniaComponent@@QEBAHXZ
    MCAPI int getInsomniaTimerTicks() const;

    // symbol: ?getTicksUntilInsomnia@InsomniaComponent@@QEBAHXZ
    MCAPI int getTicksUntilInsomnia() const;

    // symbol: ?incrementTimeSinceRest@InsomniaComponent@@QEAAHXZ
    MCAPI int incrementTimeSinceRest();

    // symbol: ?readAdditionalSaveData@InsomniaComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?restartTimer@InsomniaComponent@@QEAAXXZ
    MCAPI void restartTimer();

    // NOLINTEND
};
