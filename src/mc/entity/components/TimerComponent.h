#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimerComponent {
public:
    // prevent constructor by default
    TimerComponent& operator=(TimerComponent const&);
    TimerComponent(TimerComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TimerComponent@@QEAA@XZ
    MCAPI TimerComponent();

    // symbol: ?addAdditionalSaveData@TimerComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?getHasExecuted@TimerComponent@@QEBA_NXZ
    MCAPI bool getHasExecuted() const;

    // symbol: ?getLooping@TimerComponent@@QEBA_NXZ
    MCAPI bool getLooping() const;

    // symbol: ?getTimeStamp@TimerComponent@@QEAA_KAEBVLevel@@@Z
    MCAPI uint64 getTimeStamp(class Level const& level);

    // symbol: ??4TimerComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class TimerComponent& operator=(class TimerComponent&&);

    // symbol: ?readAdditionalSaveData@TimerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?restartTimer@TimerComponent@@QEAAXAEAVActor@@@Z
    MCAPI void restartTimer(class Actor& actor);

    // symbol: ?setHasExecuted@TimerComponent@@QEAAX_N@Z
    MCAPI void setHasExecuted(bool hasExecuted);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?getRandomTime@TimerComponent@@AEAAHAEAVActor@@@Z
    MCAPI int getRandomTime(class Actor& actor);

    // NOLINTEND
};
