#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameCallbacks {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~GameCallbacks() = default;
#else // LL_PLAT_C
    virtual ~GameCallbacks();
#endif

    virtual void onLevelCorrupt() = 0;

    virtual void onGameModeChanged() = 0;

    virtual void onBeforeSimTick();

    virtual void onTick(int nTick, int maxTick) = 0;

    virtual void onInternetUpdate() = 0;

    virtual void onGameSessionReset() = 0;

    virtual void onLevelExit() = 0;

    virtual void onRequestResourceReload() = 0;

    virtual void updateScreens() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onBeforeSimTick();


    // NOLINTEND
};
