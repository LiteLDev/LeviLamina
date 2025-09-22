#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/string/HashedString.h"

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
    MCNAPI CameraComponent(::CameraComponent&&);

    MCNAPI CameraComponent(::CameraComponent const&);

    MCNAPI ::CameraComponent& operator=(::CameraComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CameraComponent&&);

    MCNAPI void* $ctor(::CameraComponent const&);
    // NOLINTEND
};
