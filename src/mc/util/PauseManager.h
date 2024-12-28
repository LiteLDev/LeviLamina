#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/SimulationType.h"

class PauseManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk99ce49;
    ::ll::UntypedStorage<8, 48> mUnk18b65e;
    // NOLINTEND

public:
    // prevent constructor by default
    PauseManager& operator=(PauseManager const&);
    PauseManager(PauseManager const&);
    PauseManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SimulationType getSimulationType() const;

    MCAPI void setSimulationType(::SimulationType simulationType);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SimulationType getSimulationType(::StackRefResult<::PauseManager const> pauseManager);

    MCAPI static bool
    isSimulationType(::StackRefResult<::PauseManager const> pauseManager, ::SimulationType simulationType);

    MCAPI static void setSimulationType(::StackRefResult<::PauseManager> pauseManager, ::SimulationType simulationType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SimulationType const& DEFAULT_SIMULATION_TYPE();
    // NOLINTEND
};
