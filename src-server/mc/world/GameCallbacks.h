#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameCallbacks {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameCallbacks();

    // vIndex: 1
    virtual void onLevelCorrupt() = 0;

    // vIndex: 2
    virtual void onCriticalScriptError(char const*, char const*) = 0;

    // vIndex: 3
    virtual void onGameModeChanged() = 0;

    // vIndex: 4
    virtual void onBeforeSimTick();

    // vIndex: 5
    virtual void onTick(int, int) = 0;

    // vIndex: 6
    virtual void onInternetUpdate() = 0;

    // vIndex: 7
    virtual void onGameSessionReset() = 0;

    // vIndex: 8
    virtual void onLevelExit() = 0;

    // vIndex: 9
    virtual void onRequestResourceReload() = 0;

    // vIndex: 10
    virtual void updateScreens() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onBeforeSimTick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
