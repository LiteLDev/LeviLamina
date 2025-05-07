#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class LocalPlayer;
class StrictEntityContext;
class Vec2;
// clang-format on

class ICameraClientInstance {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ICameraClientInstance() = default;

    // vIndex: 1
    virtual float getFrameAlpha() = 0;

    // vIndex: 2
    virtual ::Actor* getCameraActor() = 0;

    // vIndex: 3
    virtual ::std::optional<::StrictEntityContext> getCameraEntity() = 0;

    // vIndex: 4
    virtual ::std::optional<bool> isUnderLiquid() = 0;

    // vIndex: 5
    virtual ::LocalPlayer* getLocalPlayer() = 0;

    // vIndex: 6
    virtual ::Vec2 getLookDelta() = 0;

    // vIndex: 7
    virtual float getSecondsSinceProgramStart() = 0;

    // vIndex: 8
    virtual bool isRealityFullVRMode() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
