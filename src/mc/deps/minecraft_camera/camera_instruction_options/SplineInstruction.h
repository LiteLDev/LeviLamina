#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_camera/camera_spline_utils/SplineType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraInstructionOptions {

struct SplineInstruction {
public:
    // SplineInstruction inner types declare
    // clang-format off
    struct SplineProgressOption;
    struct SplineRotationOption;
    // clang-format on

    // SplineInstruction inner types define
    struct SplineProgressOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>        mProgressKeyFrameValue;
        ::ll::TypedStorage<4, 4, float>        mProgressKeyFrameTime;
        ::ll::TypedStorage<4, 4, ::EasingType> mProgressKeyFramesEasingFunc;
        // NOLINTEND
    };

    struct SplineRotationOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>      mRotationKeyFrameValue;
        ::ll::TypedStorage<4, 4, float>        mRotationKeyFrameTime;
        ::ll::TypedStorage<4, 4, ::EasingType> mRotationKeyFramesEasingFunc;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mSplineIdentifier;
    ::ll::TypedStorage<4, 4, float>                           mTotalTime;
    ::ll::TypedStorage<1, 1, ::CameraSplineUtils::SplineType> mCurveType;
    ::ll::TypedStorage<1, 1, bool>                            mLoadFromJson;
    ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>>          mCurve;
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraInstructionOptions::SplineInstruction::SplineProgressOption>>
        mProgressKeyFrames;
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraInstructionOptions::SplineInstruction::SplineRotationOption>>
        mSplineRotationOption;
    // NOLINTEND

public:
    // prevent constructor by default
    SplineInstruction(SplineInstruction const&);
    SplineInstruction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CameraInstructionOptions::SplineInstruction& operator=(::CameraInstructionOptions::SplineInstruction&&);

    MCAPI ::CameraInstructionOptions::SplineInstruction&
    operator=(::CameraInstructionOptions::SplineInstruction const&);

    MCAPI bool operator==(::CameraInstructionOptions::SplineInstruction const&) const;

    MCAPI ~SplineInstruction();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace CameraInstructionOptions
