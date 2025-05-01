#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IGameplayUserManagerConnector;
class IServerPlayerSleepManagerConnector;
// clang-format on

class TickTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk5276d2;
    ::ll::UntypedStorage<8, 8>  mUnk2e2b89;
    ::ll::UntypedStorage<8, 24> mUnkf1c29a;
    ::ll::UntypedStorage<8, 8>  mUnkda5959;
    ::ll::UntypedStorage<8, 16> mUnk27d19c;
    ::ll::UntypedStorage<8, 16> mUnkcc65d5;
    // NOLINTEND

public:
    // prevent constructor by default
    TickTimeManager& operator=(TickTimeManager const&);
    TickTimeManager(TickTimeManager const&);
    TickTimeManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onWakeUpAllPlayers();

    MCNAPI void registerForGameplayUserManagerEvents(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCNAPI void
    registerForPlayerSleepManagerEvents(::IServerPlayerSleepManagerConnector& serverPlayerSleepManagerConnector);

    MCNAPI void update();

    MCNAPI ~TickTimeManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
