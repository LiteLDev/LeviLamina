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
    // prevent constructor by default
    Camera();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Camera(::mce::Camera const&);

    MCFOLD ::glm::vec3 const& getForwardVector() const;

    MCFOLD ::Frustum const& getFrustum() const;

    MCAPI ::glm::vec3 const& getPosition() const;

    MCAPI ::glm::mat4x4 getProjectionMatrix() const;

    MCFOLD ::glm::vec3 const& getRightVector() const;

    MCAPI ::glm::vec3 const& getUpVector() const;

    MCAPI ::glm::mat4x4 getViewProjectionMatrix() const;

    MCAPI ::mce::Camera& operator=(::mce::Camera const&);

    MCAPI void updateViewMatrixDependencies();

    MCAPI ~Camera();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::Camera const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
