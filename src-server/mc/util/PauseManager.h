#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/SimulationType.h"

class PauseManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk994f71;
    ::ll::UntypedStorage<1, 1> mUnkf88b2a;
    ::ll::UntypedStorage<1, 1> mUnk99ce49;
    ::ll::UntypedStorage<8, 8> mUnkd10131;
    ::ll::UntypedStorage<8, 128> mUnk2c9d89;
    ::ll::UntypedStorage<8, 16> mUnk903eb4;
    ::ll::UntypedStorage<8, 48> mUnk5b37dc;
    // NOLINTEND

public:
    // prevent constructor by default
    PauseManager& operator=(PauseManager const&);
    PauseManager(PauseManager const&);
    PauseManager();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SimulationType getSimulationType(::StackRefResult<::PauseManager const> pauseManager);
    // NOLINTEND

};
