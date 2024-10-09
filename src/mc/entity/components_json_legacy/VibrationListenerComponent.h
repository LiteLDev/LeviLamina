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
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // NOLINTEND
};
