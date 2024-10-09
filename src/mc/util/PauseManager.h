#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/SimulationType.h"

class PauseManager {
public:
    // prevent constructor by default
    PauseManager& operator=(PauseManager const&);
    PauseManager(PauseManager const&);
    PauseManager();

public:
    // NOLINTBEGIN
    MCAPI static ::SimulationType getSimulationType(class StackRefResult<class PauseManager const> pauseManager);

    MCAPI static ::SimulationType const DEFAULT_SIMULATION_TYPE;

    // NOLINTEND
};
