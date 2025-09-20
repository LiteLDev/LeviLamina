#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/WeakRef.h"

class CameraBlendStateComponent {
public:
    // CameraBlendStateComponent inner types declare
    // clang-format off
    struct EaseState;
    struct SnapShotEaseValues;
    // clang-format on

    // CameraBlendStateComponent inner types define
    struct SnapShotEaseValues {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkae0ff8;
        // NOLINTEND

    public:
        // prevent constructor by default
        SnapShotEaseValues& operator=(SnapShotEaseValues const&);
        SnapShotEaseValues(SnapShotEaseValues const&);
        SnapShotEaseValues();
    };

    struct EaseState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk88816c;
        ::ll::UntypedStorage<4, 4>  mUnk69e32f;
        ::ll::UntypedStorage<4, 12> mUnk5271f0;
        ::ll::UntypedStorage<4, 12> mUnk31ffed;
        // NOLINTEND

    public:
        // prevent constructor by default
        EaseState& operator=(EaseState const&);
        EaseState(EaseState const&);
        EaseState();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 36, ::std::optional<::CameraBlendStateComponent::EaseState>> mLastEaseState;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityId>>                                   mActiveCamera;
    ::ll::TypedStorage<4, 4, float>                                                    mPercentage;
    ::ll::TypedStorage<8, 64, ::std::function<float(float, float, float)>>             mEaseFunction;
    ::ll::TypedStorage<4, 4, float>                                                    mBlendTime;
    ::ll::TypedStorage<4, 4, float>                                                    mBlendStartFieldOfView;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                  mBlendStartPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                  mBlendStartEulerAngles;
    ::ll::TypedStorage<4, 12, ::CameraBlendStateComponent::SnapShotEaseValues>         mSnapShotEaseValues;
    // NOLINTEND
};
