#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/ICameraClientInstance.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IClientInstance;
class LocalPlayer;
class StrictEntityContext;
class Vec2;
// clang-format on

class CameraClientInstance : public ::ICameraClientInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraClientInstance& operator=(CameraClientInstance const&);
    CameraClientInstance(CameraClientInstance const&);
    CameraClientInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Actor* getCameraActor() /*override*/;

    virtual ::std::optional<::StrictEntityContext> getCameraEntity() /*override*/;

    virtual ::std::optional<bool> isUnderLiquid() /*override*/;

    virtual float getFrameAlpha() /*override*/;

    virtual ::LocalPlayer* getLocalPlayer() /*override*/;

    virtual ::Vec2 getLookDelta() /*override*/;

    virtual float getSecondsSinceProgramStart() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Actor* $getCameraActor();

    MCAPI ::std::optional<::StrictEntityContext> $getCameraEntity();

    MCAPI ::std::optional<bool> $isUnderLiquid();

    MCFOLD float $getFrameAlpha();

    MCAPI ::LocalPlayer* $getLocalPlayer();

    MCAPI ::Vec2 $getLookDelta();

    MCFOLD float $getSecondsSinceProgramStart();
    // NOLINTEND
};
