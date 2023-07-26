#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationDataComponent {

public:
    // prevent constructor by default
    VibrationDataComponent& operator=(VibrationDataComponent const&) = delete;
    VibrationDataComponent(VibrationDataComponent const&)            = delete;
    VibrationDataComponent()                                         = delete;

public:
    /**
     * @symbol ?clearLastVibrationPos\@VibrationDataComponent\@\@QEAAXXZ
     */
    MCAPI void clearLastVibrationPos(); // NOLINT
    /**
     * @symbol ?getLastVibrationPos\@VibrationDataComponent\@\@QEBAAEBV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class BlockPos> const& getLastVibrationPos() const; // NOLINT
    /**
     * @symbol ?getTicksSinceLastVibration\@VibrationDataComponent\@\@QEBA?AV?$optional\@_K\@std\@\@AEBVILevel\@\@\@Z
     */
    MCAPI class std::optional<unsigned __int64> getTicksSinceLastVibration(class ILevel const&) const; // NOLINT
    /**
     * @symbol ?setLastVibrationPos\@VibrationDataComponent\@\@QEAAXVBlockPos\@\@UTick\@\@\@Z
     */
    MCAPI void setLastVibrationPos(class BlockPos, struct Tick); // NOLINT
};
