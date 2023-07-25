#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONINFO
public:
    VibrationInfo& operator=(VibrationInfo const&) = delete;
    VibrationInfo(VibrationInfo const&)            = delete;
    VibrationInfo()                                = delete;
#endif

public:
    /**
     * @symbol ?load\@VibrationInfo\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void load(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?save\@VibrationInfo\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag&) const;
};
