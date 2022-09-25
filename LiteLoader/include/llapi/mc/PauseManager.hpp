/**
 * @file  PauseManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PauseManager.
 *
 */
class PauseManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PAUSEMANAGER
public:
    class PauseManager& operator=(class PauseManager const &) = delete;
    PauseManager(class PauseManager const &) = delete;
    PauseManager() = delete;
#endif

public:
    /**
     * @hash   1703347193
     * @symbol ?DEFAULT_SIMULATION_TYPE@PauseManager@@2W4SimulationType@@B
     */
    MCAPI static enum SimulationType const DEFAULT_SIMULATION_TYPE;
    /**
     * @hash   -1303672737
     * @symbol ?getSimulationType@PauseManager@@SA?AW4SimulationType@@V?$StackRefResultT@U?$SharePtrRefTraits@$$CBVPauseManager@@@@@@@Z
     */
    MCAPI static enum SimulationType getSimulationType(class StackRefResultT<struct SharePtrRefTraits<class PauseManager const>>);

};