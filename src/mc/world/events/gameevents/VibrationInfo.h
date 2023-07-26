#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationInfo {

public:
    // prevent constructor by default
    VibrationInfo& operator=(VibrationInfo const&) = delete;
    VibrationInfo(VibrationInfo const&)            = delete;
    VibrationInfo()                                = delete;

public:
    /**
     * @symbol ?load\@VibrationInfo\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void load(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?save\@VibrationInfo\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag&) const; // NOLINT
};
