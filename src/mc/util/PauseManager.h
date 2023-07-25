#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/StackRefResultT.h"

class PauseManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PAUSEMANAGER
public:
    PauseManager& operator=(PauseManager const&) = delete;
    PauseManager(PauseManager const&)            = delete;
    PauseManager()                               = delete;
#endif

public:
    /**
     * @symbol ?DEFAULT_SIMULATION_TYPE\@PauseManager\@\@2W4SimulationType\@\@B
     */
    MCAPI static enum class SimulationType const DEFAULT_SIMULATION_TYPE;
    /**
     * @symbol
     * ?getSimulationType\@PauseManager\@\@SA?AW4SimulationType\@\@V?$StackRefResultT\@U?$SharePtrRefTraits\@$$CBVPauseManager\@\@\@\@\@\@\@Z
     */
    MCAPI static enum class SimulationType
        getSimulationType(class StackRefResultT<struct SharePtrRefTraits<class PauseManager const>>);
};
