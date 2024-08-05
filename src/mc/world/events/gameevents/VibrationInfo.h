#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationInfo {
public:
    // prevent constructor by default
    VibrationInfo& operator=(VibrationInfo const&);
    VibrationInfo(VibrationInfo const&);
    VibrationInfo();

public:
    // NOLINTBEGIN
    MCAPI void load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void save(class CompoundTag& tag) const;

    // NOLINTEND
};
