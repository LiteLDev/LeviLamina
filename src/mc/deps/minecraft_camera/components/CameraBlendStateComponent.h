#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/WeakRef.h"

namespace MinecraftCamera {

struct CameraBlendStateComponent {
public:
    // CameraBlendStateComponent inner types declare
    // clang-format off
    struct EaseState;
    struct SnapShotEaseValues;
    // clang-format on

    // CameraBlendStateComponent inner types define
    struct EaseState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>        mAmount;
        ::ll::TypedStorage<4, 4, float>        mFieldOfView;
        ::ll::TypedStorage<4, 12, ::Vec3>      mEulerAngles;
        ::ll::TypedStorage<4, 12, ::glm::vec3> mPosition;
        // NOLINTEND
    };

    struct SnapShotEaseValues {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::glm::vec3> mTargetPos;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 36, ::std::optional<::MinecraftCamera::CameraBlendStateComponent::EaseState>> mLastEaseState;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityId>>                                                    mActiveCamera;
    ::ll::TypedStorage<4, 4, float>                                                                     mPercentage;
    ::ll::TypedStorage<8, 8, float (*)(float, float, float)>                                            mEaseFunction;
    ::ll::TypedStorage<4, 4, float>                                                                     mBlendTime;
    ::ll::TypedStorage<4, 4, float>                                                             mBlendStartFieldOfView;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                           mBlendStartPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                           mBlendStartEulerAngles;
    ::ll::TypedStorage<4, 12, ::MinecraftCamera::CameraBlendStateComponent::SnapShotEaseValues> mSnapShotEaseValues;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace MinecraftCamera
