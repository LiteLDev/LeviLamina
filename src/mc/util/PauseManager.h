#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/enums/SimulationType.h"

class PauseManager {
public:
    // prevent constructor by default
    PauseManager& operator=(PauseManager const&);
    PauseManager(PauseManager const&);
    PauseManager();

public:
    // NOLINTBEGIN
    MCAPI static ::SimulationType getSimulationType(class StackRefResult<class PauseManager const>);

    MCAPI static ::SimulationType const DEFAULT_SIMULATION_TYPE;

    // NOLINTEND
};
