#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_50/camera/CameraAimAssistCommandPresetDefinition.h"
#include "mc/platform/Result.h"
#include "mc/world/level/camera/controlscheme/Scheme.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_90 {

struct CameraPreset {
public:
    // CameraPreset inner types define
    enum class AudioListener : uchar {
        Camera = 0,
        Player = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<7>> mName;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<7>>  mInheritFrom;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mPosX;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mPosY;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mPosZ;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mRotX;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mRotY;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mCameraRotationSpeed;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>         mSnapToTarget;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>      mHorizontalRotationLimit;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>      mVerticalRotationLimit;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>         mContinueTargeting;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mTrackingRadius;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>      mViewOffset;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>      mEntityOffset;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mRadius;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mYawLimitMin;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mYawLimitMax;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_21_90::CameraPreset::AudioListener>> mListener;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                                 mPlayerEffects;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_21_50::CameraAimAssistCommandPresetDefinition>>
                                                                       mAimAssist;
    ::ll::TypedStorage<1, 2, ::std::optional<::ControlScheme::Scheme>> mControlScheme;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPreset();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraPreset(::SharedTypes::v1_21_90::CameraPreset&&);

    MCAPI CameraPreset(::SharedTypes::v1_21_90::CameraPreset const&);

    MCFOLD ::SharedTypes::v1_21_90::CameraPreset& operator=(::SharedTypes::v1_21_90::CameraPreset&&);

    MCFOLD ::SharedTypes::v1_21_90::CameraPreset& operator=(::SharedTypes::v1_21_90::CameraPreset const&);

    MCFOLD void setEntityOffset(::std::optional<::std::array<float, 3>> opt);

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~CameraPreset();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::SharedTypes::v1_21_90::CameraPreset> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_90::CameraPreset&&);

    MCFOLD void* $ctor(::SharedTypes::v1_21_90::CameraPreset const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_90
