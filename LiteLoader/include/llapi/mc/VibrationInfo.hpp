/**
 * @file  VibrationInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VibrationInfo.
 *
 */
class VibrationInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONINFO
public:
    class VibrationInfo& operator=(class VibrationInfo const &) = delete;
    VibrationInfo(class VibrationInfo const &) = delete;
    VibrationInfo() = delete;
#endif

public:
    /**
     * @symbol ?load\@VibrationInfo\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?save\@VibrationInfo\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag &) const;

};
