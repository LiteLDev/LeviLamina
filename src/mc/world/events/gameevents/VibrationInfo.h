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
    // symbol: ?load@VibrationInfo@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?save@VibrationInfo@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void save(class CompoundTag& tag) const;

    // NOLINTEND
};
