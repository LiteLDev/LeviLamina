#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientVibrationComponent {

public:
    // prevent constructor by default
    ClientVibrationComponent& operator=(ClientVibrationComponent const&) = delete;
    ClientVibrationComponent(ClientVibrationComponent const&)            = delete;
    ClientVibrationComponent()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getTicksSinceLastVibration\@ClientVibrationComponent\@\@QEBA?AV?$optional\@_K\@std\@\@AEBVILevel\@\@\@Z
     */
    MCAPI std::optional<uint64_t> getTicksSinceLastVibration(class ILevel const&) const;
    /**
     * @symbol ?setLastVibrationTick\@ClientVibrationComponent\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void setLastVibrationTick(struct Tick);
    // NOLINTEND
};
