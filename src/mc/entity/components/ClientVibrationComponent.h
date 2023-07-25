#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientVibrationComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTVIBRATIONCOMPONENT
public:
    ClientVibrationComponent& operator=(ClientVibrationComponent const&) = delete;
    ClientVibrationComponent(ClientVibrationComponent const&)            = delete;
    ClientVibrationComponent()                                           = delete;
#endif

public:
    /**
     * @symbol ?getTicksSinceLastVibration\@ClientVibrationComponent\@\@QEBA?AV?$optional\@_K\@std\@\@AEBVILevel\@\@\@Z
     */
    MCAPI class std::optional<unsigned __int64> getTicksSinceLastVibration(class ILevel const&) const;
    /**
     * @symbol ?setLastVibrationTick\@ClientVibrationComponent\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void setLastVibrationTick(struct Tick);
};
