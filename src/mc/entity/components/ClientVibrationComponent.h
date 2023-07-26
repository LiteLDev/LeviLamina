#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientVibrationComponent {

public:
    // prevent constructor by default
    ClientVibrationComponent& operator=(ClientVibrationComponent const&) = delete;
    ClientVibrationComponent(ClientVibrationComponent const&)            = delete;
    ClientVibrationComponent()                                           = delete;

public:
    /**
     * @symbol ?getTicksSinceLastVibration\@ClientVibrationComponent\@\@QEBA?AV?$optional\@_K\@std\@\@AEBVILevel\@\@\@Z
     */
    MCAPI class std::optional<unsigned __int64> getTicksSinceLastVibration(class ILevel const&) const; // NOLINT
    /**
     * @symbol ?setLastVibrationTick\@ClientVibrationComponent\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void setLastVibrationTick(struct Tick); // NOLINT
};
