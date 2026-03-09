#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_camera/camera_spline_utils/SplineType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
class Vec2;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraInstructionOptions {

struct SplineInstruction {
public:
    // SplineInstruction inner types declare
    // clang-format off
    struct SplineRotationOption;
    // clang-format on

    // SplineInstruction inner types define
    struct SplineRotationOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mRotationKeyFrameValues;
        ::ll::TypedStorage<4, 4, float>   mRotationKeyFrameTimes;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

        MCAPI static ::Bedrock::Result<::CameraInstructionOptions::SplineInstruction::SplineRotationOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                           mTotalTime;
    ::ll::TypedStorage<1, 1, ::CameraSplineUtils::SplineType> mCurveType;
    ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>>          mCurve;
    ::ll::TypedStorage<8, 24, ::std::vector<::Vec2>>          mProgressKeyFrames;
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

    MCAPI ::CameraInstructionOptions::SplineInstruction& operator=(::CameraInstructionOptions::SplineInstruction const&
    );

    MCAPI bool operator==(::CameraInstructionOptions::SplineInstruction const& other) const;

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~SplineInstruction();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::CameraInstructionOptions::SplineInstruction> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace CameraInstructionOptions
