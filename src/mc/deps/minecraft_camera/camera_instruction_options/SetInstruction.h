#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraInstructionOptions {

struct SetInstruction {
public:
    // SetInstruction inner types declare
    // clang-format off
    struct EaseOption;
    struct EntityOffsetOption;
    struct FacingOption;
    struct PosOption;
    struct RotOption;
    struct ViewOffsetOption;
    // clang-format on

    // SetInstruction inner types define
    struct EaseOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::EasingType> mEasingType;
        ::ll::TypedStorage<4, 4, float>        mEasingTime;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction::EaseOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct EntityOffsetOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mEntityOffsetX;
        ::ll::TypedStorage<4, 4, float> mEntityOffsetY;
        ::ll::TypedStorage<4, 4, float> mEntityOffsetZ;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction::EntityOffsetOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct FacingOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mFacingPos;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction::FacingOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct PosOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPos;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction::PosOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct RotOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mRotX;
        ::ll::TypedStorage<4, 4, float> mRotY;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction::RotOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct ViewOffsetOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mViewOffsetX;
        ::ll::TypedStorage<4, 4, float> mViewOffsetY;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction::ViewOffsetOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                                       mPresetIndex;
    ::ll::TypedStorage<4, 12, ::std::optional<::CameraInstructionOptions::SetInstruction::EaseOption>>   mEase;
    ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstructionOptions::SetInstruction::PosOption>>    mPos;
    ::ll::TypedStorage<4, 12, ::std::optional<::CameraInstructionOptions::SetInstruction::RotOption>>    mRot;
    ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstructionOptions::SetInstruction::FacingOption>> mFacing;
    ::ll::TypedStorage<4, 12, ::std::optional<::CameraInstructionOptions::SetInstruction::ViewOffsetOption>>
        mViewOffset;
    ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstructionOptions::SetInstruction::EntityOffsetOption>>
                                                    mEntityOffset;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mDefault;
    ::ll::TypedStorage<1, 1, bool>                  mRemoveIgnoreStartingValuesComponent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::CameraInstructionOptions::SetInstruction const& other) const;

    MCAPI void write(::BinaryStream& stream) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};

} // namespace CameraInstructionOptions
