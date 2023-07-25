#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationDataComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONDATACOMPONENT
public:
    VibrationDataComponent& operator=(VibrationDataComponent const&) = delete;
    VibrationDataComponent(VibrationDataComponent const&)            = delete;
    VibrationDataComponent()                                         = delete;
#endif

public:
    /**
     * @symbol ?clearLastVibrationPos\@VibrationDataComponent\@\@QEAAXXZ
     */
    MCAPI void clearLastVibrationPos();
    /**
     * @symbol ?getLastVibrationPos\@VibrationDataComponent\@\@QEBAAEBV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class BlockPos> const& getLastVibrationPos() const;
    /**
     * @symbol ?getTicksSinceLastVibration\@VibrationDataComponent\@\@QEBA?AV?$optional\@_K\@std\@\@AEBVILevel\@\@\@Z
     */
    MCAPI class std::optional<unsigned __int64> getTicksSinceLastVibration(class ILevel const&) const;
    /**
     * @symbol ?setLastVibrationPos\@VibrationDataComponent\@\@QEAAXVBlockPos\@\@UTick\@\@\@Z
     */
    MCAPI void setLastVibrationPos(class BlockPos, struct Tick);
};
