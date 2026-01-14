#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/platform/Result.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraPresetAimAssistDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Reference<5>>>  mPresetId;
    ::ll::TypedStorage<1, 2, ::std::optional<::CameraAimAssist::TargetMode>> mTargetMode;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>                       mAngle;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPresetAimAssistDefinition(CameraPresetAimAssistDefinition const&);
    CameraPresetAimAssistDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraPresetAimAssistDefinition(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition&&);

    MCAPI ::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition&
    operator=(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition&&);

    MCAPI ::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition&
    operator=(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition const& rhs) const;

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~CameraPresetAimAssistDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition>
    read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
