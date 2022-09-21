/**
 * @file  MC/ClientVibrationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientVibrationComponent.
 *
 */
class ClientVibrationComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTVIBRATIONCOMPONENT
public:
    class ClientVibrationComponent& operator=(class ClientVibrationComponent const &) = delete;
    ClientVibrationComponent(class ClientVibrationComponent const &) = delete;
    ClientVibrationComponent() = delete;
#endif

public:
    /**
     * @hash   356323414
     * @symbol ?getTicksSinceLastVibration@ClientVibrationComponent@@QEBA?AV?$optional@_K@std@@AEBVILevel@@@Z
     */
    MCAPI class std::optional<unsigned __int64> getTicksSinceLastVibration(class ILevel const &) const;
    /**
     * @hash   -119094160
     * @symbol ?setLastVibrationTick@ClientVibrationComponent@@QEAAXUTick@@@Z
     */
    MCAPI void setLastVibrationTick(struct Tick);

};