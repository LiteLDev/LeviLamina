#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/RelativeFloat.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class CameraCommand : public ::Command {
public:
    // CameraCommand inner types define
    enum class CameraCommandOption : uchar {
        None             = 0,
        Set              = 1,
        Ease             = 2,
        Pos              = 3,
        Rot              = 4,
        FovSet           = 5,
        FovClear         = 6,
        Facing           = 7,
        AttachToEntity   = 8,
        DetachFromEntity = 9,
        PlaySpline       = 10,
        TargetEntity     = 11,
        TargetOffset     = 12,
        RemoveTarget     = 13,
        ViewOffset       = 14,
        EntityOffset     = 15,
        Default          = 16,
        Clear            = 17,
        Fade             = 18,
        Time             = 19,
        Color            = 20,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>>        mPlayerTargets;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mCommandMode;
    ::ll::TypedStorage<8, 32, ::std::string>                       mCameraPresetName;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mEasingOption;
    ::ll::TypedStorage<4, 4, ::EasingType>                         mEasingType;
    ::ll::TypedStorage<4, 4, float>                                mEasingTime;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mPosOption;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mPos;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mRotOption;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                      mRotX;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                      mRotY;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mFacingOption;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mFacingEntity;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mFacingPos;
    ::ll::TypedStorage<1, 1, bool>                                 mFacingIsPosition;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mDefaultOption;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mViewOffsetOption;
    ::ll::TypedStorage<4, 4, float>                                mViewOffsetX;
    ::ll::TypedStorage<4, 4, float>                                mViewOffsetY;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mEntityOffsetOption;
    ::ll::TypedStorage<4, 4, float>                                mEntityOffsetX;
    ::ll::TypedStorage<4, 4, float>                                mEntityOffsetY;
    ::ll::TypedStorage<4, 4, float>                                mEntityOffsetZ;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mAttachOption;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mAttachToEntity;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mTargetEntityOption;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mTargetOffsetOption;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mTargetEntity;
    ::ll::TypedStorage<4, 4, float>                                mTargetCenterOffsetX;
    ::ll::TypedStorage<4, 4, float>                                mTargetCenterOffsetY;
    ::ll::TypedStorage<4, 4, float>                                mTargetCenterOffsetZ;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mTimeOption;
    ::ll::TypedStorage<4, 4, float>                                mFadeInSeconds;
    ::ll::TypedStorage<4, 4, float>                                mHoldSeconds;
    ::ll::TypedStorage<4, 4, float>                                mFadeOutSeconds;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mColorOption;
    ::ll::TypedStorage<4, 4, int>                                  mFadeColorR;
    ::ll::TypedStorage<4, 4, int>                                  mFadeColorG;
    ::ll::TypedStorage<4, 4, int>                                  mFadeColorB;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mFovOption;
    ::ll::TypedStorage<4, 4, ::EasingType>                         mFovEasingType;
    ::ll::TypedStorage<4, 4, float>                                mFieldOfView;
    ::ll::TypedStorage<4, 4, float>                                mFovEasingTime;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mSplineOption;
    ::ll::TypedStorage<8, 32, ::std::string>                       mSplineName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
