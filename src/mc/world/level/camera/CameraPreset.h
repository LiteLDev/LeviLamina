#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
class Vec2;
class Vec3;
namespace SharedTypes::v1_21_50 { struct CameraPresetAimAssistDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    ::ll::TypedStorage<8, 32, ::std::string>                                 mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mInheritFrom;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mPosX;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mPosY;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mPosZ;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mRotX;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mRotY;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mCameraRotationSpeed;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                          mSnapToTarget;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>                       mHorizontalRotationLimit;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>                       mVerticalRotationLimit;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                          mContinueTargeting;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mTrackingRadius;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>                       mViewOffset;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                       mEntityOffset;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mRadius;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mYawLimitMin;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mYawLimitMax;
    ::ll::TypedStorage<1, 2, ::std::optional<::CameraPreset::AudioListener>> mListener;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                          mPlayerEffects;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                          mAlignTargetAndCameraForward;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition>> mAimAssist;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraPreset(::CameraPreset const&);

    MCAPI CameraPreset(::CameraPreset&&);

    MCAPI ::CameraPreset& operator=(::CameraPreset&&);

    MCAPI ::CameraPreset& operator=(::CameraPreset const&);

    MCAPI void setHorizontalRotationLimit(::std::array<float, 2> const& arr);

    MCAPI void setVerticalRotationLimit(::std::array<float, 2> const& arr);

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~CameraPreset();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::CameraPreset> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CameraPreset const&);

    MCAPI void* $ctor(::CameraPreset&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
