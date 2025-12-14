#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
// clang-format on

class CameraCallbacks {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onTakePictureNow(::Player&, ::Actor*, ::Actor*) = 0;

    virtual void onStartTakingPicture(::Player&) = 0;

    virtual void onEndTakingPicture(::Player&, ::Actor*, ::Actor*) = 0;

#ifdef LL_PLAT_S
    virtual ~CameraCallbacks() = default;
#else // LL_PLAT_C
    virtual ~CameraCallbacks();
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
