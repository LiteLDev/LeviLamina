#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraInstructionOptions {

struct FadeInstruction {
public:
    // FadeInstruction inner types declare
    // clang-format off
    struct ColorOption;
    struct TimeOption;
    // clang-format on

    // FadeInstruction inner types define
    struct ColorOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mRed;
        ::ll::TypedStorage<4, 4, float> mGreen;
        ::ll::TypedStorage<4, 4, float> mBlue;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::Bedrock::Result<::CameraInstructionOptions::FadeInstruction::ColorOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct TimeOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mFadeInTime;
        ::ll::TypedStorage<4, 4, float> mHoldTime;
        ::ll::TypedStorage<4, 4, float> mFadeOutTime;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::Bedrock::Result<::CameraInstructionOptions::FadeInstruction::TimeOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstructionOptions::FadeInstruction::TimeOption>>  mTime;
    ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstructionOptions::FadeInstruction::ColorOption>> mColor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::CameraInstructionOptions::FadeInstruction const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::CameraInstructionOptions::FadeInstruction> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};

} // namespace CameraInstructionOptions
