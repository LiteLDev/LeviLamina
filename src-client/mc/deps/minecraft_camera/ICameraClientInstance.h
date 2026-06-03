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
    virtual ~ICameraClientInstance() = default;

    virtual float getFrameAlpha() = 0;

    virtual ::Actor* getCameraActor() = 0;

    virtual ::std::optional<::StrictEntityContext> getCameraEntity() = 0;

    virtual ::std::optional<bool> isUnderLiquid() = 0;

    virtual ::LocalPlayer* getLocalPlayer() = 0;

    virtual ::Vec2 getLookDelta() = 0;

    virtual float getSecondsSinceProgramStart() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
