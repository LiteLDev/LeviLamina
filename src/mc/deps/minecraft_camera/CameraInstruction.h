#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/camera_instruction_options/AttachToEntityInstruction.h"
#include "mc/deps/minecraft_camera/camera_instruction_options/FadeInstruction.h"
#include "mc/deps/minecraft_camera/camera_instruction_options/FovInstruction.h"
#include "mc/deps/minecraft_camera/camera_instruction_options/SetInstruction.h"
#include "mc/deps/minecraft_camera/camera_instruction_options/SplineInstruction.h"
#include "mc/deps/minecraft_camera/camera_instruction_options/TargetInstruction.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct CameraInstruction {
public:
    // CameraInstruction inner types define
    using AttachToEntityInstruction = ::CameraInstructionOptions::AttachToEntityInstruction;

    using FadeInstruction = ::CameraInstructionOptions::FadeInstruction;

    using FovInstruction = ::CameraInstructionOptions::FovInstruction;

    using SetInstruction = ::CameraInstructionOptions::SetInstruction;

    using SplineInstruction = ::CameraInstructionOptions::SplineInstruction;

    using TargetInstruction = ::CameraInstructionOptions::TargetInstruction;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::optional<::CameraInstructionOptions::AttachToEntityInstruction>> mAttachToEntity;
    ::ll::TypedStorage<4, 36, ::std::optional<::CameraInstructionOptions::FadeInstruction>>           mFade;
    ::ll::TypedStorage<4, 20, ::std::optional<::CameraInstructionOptions::FovInstruction>>            mFieldOfView;
    ::ll::TypedStorage<4, 96, ::std::optional<::CameraInstructionOptions::SetInstruction>>            mSet;
    ::ll::TypedStorage<8, 88, ::std::optional<::CameraInstructionOptions::SplineInstruction>>         mSpline;
    ::ll::TypedStorage<8, 32, ::std::optional<::CameraInstructionOptions::TargetInstruction>>         mTarget;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                                   mClear;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                                   mDetachFromEntity;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                                   mRemoveTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraInstruction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraInstruction(::CameraInstruction&&);

    MCNAPI CameraInstruction(::CameraInstruction const&);

    MCNAPI ::CameraInstruction& operator=(::CameraInstruction&&);

    MCNAPI ::CameraInstruction& operator=(::CameraInstruction const&);

    MCNAPI bool operator==(::CameraInstruction const& other) const;

    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~CameraInstruction();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Bedrock::Result<::CameraInstruction> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CameraInstruction&&);

    MCNAPI void* $ctor(::CameraInstruction const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
