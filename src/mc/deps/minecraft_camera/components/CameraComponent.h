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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CameraComponent& operator=(CameraComponent const&);
    CameraComponent();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    CameraComponent& operator=(CameraComponent const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI CameraComponent();
#endif

    MCAPI CameraComponent(::MinecraftCamera::CameraComponent&&);

    MCAPI CameraComponent(::MinecraftCamera::CameraComponent const&);

    MCAPI ::MinecraftCamera::CameraComponent& operator=(::MinecraftCamera::CameraComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif

    MCAPI void* $ctor(::MinecraftCamera::CameraComponent&&);

    MCAPI void* $ctor(::MinecraftCamera::CameraComponent const&);
    // NOLINTEND
};

} // namespace MinecraftCamera
