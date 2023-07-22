/**
 * @file  PauseManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?DEFAULT_SIMULATION_TYPE\@PauseManager\@\@2W4SimulationType\@\@B
     */
    MCAPI static enum class SimulationType const DEFAULT_SIMULATION_TYPE;
    /**
     * @symbol  ?getSimulationType\@PauseManager\@\@SA?AW4SimulationType\@\@V?$StackRefResultT\@U?$SharePtrRefTraits\@$$CBVPauseManager\@\@\@\@\@\@\@Z
     */
    MCAPI static enum class SimulationType getSimulationType(class StackRefResultT<struct SharePtrRefTraits<class PauseManager const>>);

};