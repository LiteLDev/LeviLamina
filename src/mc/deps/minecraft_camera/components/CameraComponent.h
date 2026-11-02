#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/string/HashedString.h"

namespace MinecraftCamera {

struct CameraComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>    mId;
    ::ll::TypedStorage<4, 16, ::glm::qua<float>> mOrientation;
    ::ll::TypedStorage<4, 12, ::glm::vec3>       mPosition;
    ::ll::TypedStorage<4, 4, float>              mAspectRatio;
    ::ll::TypedStorage<4, 4, float>              mFieldOfView;
    ::ll::TypedStorage<4, 4, float>              mNearPlane;
    ::ll::TypedStorage<4, 4, float>              mFarPlane;
    ::ll::TypedStorage<4, 64, ::Matrix>          mPostViewTransform;
    ::ll::TypedStorage<4, 64, ::Matrix>          mSavedProjection;
    ::ll::TypedStorage<4, 64, ::Matrix>          mSavedModelView;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraComponent& operator=(CameraComponent const&);
    CameraComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraComponent(::MinecraftCamera::CameraComponent&&);

    MCNAPI CameraComponent(::MinecraftCamera::CameraComponent const&);

    MCNAPI ::MinecraftCamera::CameraComponent& operator=(::MinecraftCamera::CameraComponent&&);

    MCNAPI ~CameraComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftCamera::CameraComponent&&);

    MCNAPI void* $ctor(::MinecraftCamera::CameraComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace MinecraftCamera
