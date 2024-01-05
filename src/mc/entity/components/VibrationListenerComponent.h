#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationListenerComponent {
public:
    // prevent constructor by default
    VibrationListenerComponent& operator=(VibrationListenerComponent const&);
    VibrationListenerComponent(VibrationListenerComponent const&);
    VibrationListenerComponent();

public:
    // NOLINTBEGIN
    // symbol: ?addAdditionalSaveData@VibrationListenerComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol:
    // ?readAdditionalSaveData@VibrationListenerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // NOLINTEND
};
