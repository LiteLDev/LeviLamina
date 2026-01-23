#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameCallbacks {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameCallbacks();

    virtual void onLevelCorrupt() = 0;

    virtual void onGameModeChanged() = 0;

    virtual void onBeforeSimTick();

    virtual void onTick(int, int) = 0;

    virtual void onInternetUpdate() = 0;

    virtual void onGameSessionReset() = 0;

    virtual void onLevelExit() = 0;

    virtual void onRequestResourceReload() = 0;

    virtual void updateScreens() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onBeforeSimTick();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
