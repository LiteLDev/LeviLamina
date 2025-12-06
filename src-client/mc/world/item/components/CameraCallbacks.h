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
    // vIndex: 0
    virtual void onTakePictureNow(::Player&, ::Actor*, ::Actor*) = 0;

    // vIndex: 1
    virtual void onStartTakingPicture(::Player&) = 0;

    // vIndex: 2
    virtual void onEndTakingPicture(::Player&, ::Actor*, ::Actor*) = 0;

    // vIndex: 3
    virtual ~CameraCallbacks();
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
