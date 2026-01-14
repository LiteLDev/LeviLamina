#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Frustum.h"
#include "mc/deps/renderer/MatrixStack.h"

namespace mce {

class Camera {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::MatrixStack> viewMatrixStack;
    ::ll::TypedStorage<8, 64, ::MatrixStack> worldMatrixStack;
    ::ll::TypedStorage<8, 64, ::MatrixStack> projectionMatrixStack;
    ::ll::TypedStorage<4, 64, ::glm::mat4x4> mInverseViewMatrix;
    ::ll::TypedStorage<4, 12, ::glm::vec3>   mRight;
    ::ll::TypedStorage<4, 12, ::glm::vec3>   mUp;
    ::ll::TypedStorage<4, 12, ::glm::vec3>   mForward;
    ::ll::TypedStorage<4, 12, ::glm::vec3>   mPosition;
    ::ll::TypedStorage<4, 4, float>          mAspectRatio;
    ::ll::TypedStorage<4, 4, float>          mFov;
    ::ll::TypedStorage<4, 4, float>          mZNear;
    ::ll::TypedStorage<4, 4, float>          mZFar;
    ::ll::TypedStorage<4, 192, ::Frustum>    mFrustum;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C Camera();

    MCAPI_C Camera(::mce::Camera const&);

    MCAPI_C ::mce::Camera& operator=(::mce::Camera const&);

    MCAPI_C void updateViewMatrixDependencies();

    MCAPI_C ~Camera();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();

    MCAPI_C void* $ctor(::mce::Camera const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};

} // namespace mce
