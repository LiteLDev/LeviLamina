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
    virtual void onTakePictureNow(::Player& player, ::Actor* camera, ::Actor* target) = 0;

    virtual void onStartTakingPicture(::Player& player) = 0;

    virtual void onEndTakingPicture(::Player& player, ::Actor* camera, ::Actor* target) = 0;

    virtual ~CameraCallbacks() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
