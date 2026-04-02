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
class BaseGameVersion;
class CameraPresets;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Experiments;
class Player;
struct CameraInstruction;
struct ServerCameraStatesComponent;
namespace SharedTypes::v1_21_90 { struct CameraPreset; }
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
        TargetEntity     = 10,
        TargetOffset     = 11,
        RemoveTarget     = 12,
        ViewOffset       = 13,
        EntityOffset     = 14,
        Default          = 15,
        Clear            = 16,
        Fade             = 17,
        Time             = 18,
        Color            = 19,
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
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

#ifdef LL_PLAT_S
    virtual ~CameraCommand() /*override*/;
#else // LL_PLAT_C
    virtual ~CameraCommand() /*override*/ = default;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraCommand();

    MCAPI void forEachSelectedPlayersCameraStates(
        ::CommandOrigin const&                                origin,
        ::std::function<void(::ServerCameraStatesComponent&)> callback
    ) const;

    MCAPI bool prepareInstruction(
        ::CameraInstruction&     cameraInstruction,
        ::CameraPresets const&   cameraPresets,
        ::CommandOrigin const&   origin,
        ::CommandOutput&         output,
        ::Experiments const&     experiments,
        ::BaseGameVersion const& baseGameVersion
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool resolveInheritance(
        ::std::string&                                              currentPresetName,
        ::std::string const&                                        parentToStopAt,
        ::std::vector<::SharedTypes::v1_21_90::CameraPreset> const& presetList
    );

    MCAPI static void setup(::CommandRegistry& registry, ::Experiments const* experiments);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ENUM_OPTION_ATTACH_TO_ENTITY();

    MCAPI static char const*& ENUM_OPTION_CLEAR();

    MCAPI static char const*& ENUM_OPTION_COLOR();

    MCAPI static char const*& ENUM_OPTION_DEFAULT();

    MCAPI static char const*& ENUM_OPTION_DETACH_FROM_ENTITY();

    MCAPI static char const*& ENUM_OPTION_EASE();

    MCAPI static char const*& ENUM_OPTION_ENTITY_OFFSET();

    MCAPI static char const*& ENUM_OPTION_FACING();

    MCAPI static char const*& ENUM_OPTION_FADE();

    MCAPI static char const*& ENUM_OPTION_FOV();

    MCAPI static char const*& ENUM_OPTION_FOV_CLEAR();

    MCAPI static char const*& ENUM_OPTION_POS();

    MCAPI static char const*& ENUM_OPTION_ROT();

    MCAPI static char const*& ENUM_OPTION_SET();

    MCAPI static char const*& ENUM_OPTION_TARGET();

    MCAPI static char const*& ENUM_OPTION_TARGET_OFFSET();

    MCAPI static char const*& ENUM_OPTION_TARGET_REMOVE();

    MCAPI static char const*& ENUM_OPTION_TIME();

    MCAPI static char const*& ENUM_OPTION_VIEW_OFFSET();

    MCAPI static char const*& OPTION_ATTACH_TO_ENTITY();

    MCAPI static char const*& OPTION_CLEAR();

    MCAPI static char const*& OPTION_COLOR();

    MCAPI static char const*& OPTION_DEFAULT();

    MCAPI static char const*& OPTION_DETACH_FROM_ENTITY();

    MCAPI static char const*& OPTION_EASE();

    MCAPI static char const*& OPTION_ENTITY_OFFSET();

    MCAPI static char const*& OPTION_FACING();

    MCAPI static char const*& OPTION_FADE();

    MCAPI static char const*& OPTION_FOV();

    MCAPI static char const*& OPTION_FOV_CLEAR();

    MCAPI static char const*& OPTION_POS();

    MCAPI static char const*& OPTION_ROT();

    MCAPI static char const*& OPTION_SET();

    MCAPI static char const*& OPTION_TARGET();

    MCAPI static char const*& OPTION_TARGET_OFFSET();

    MCAPI static char const*& OPTION_TARGET_REMOVE();

    MCAPI static char const*& OPTION_TIME();

    MCAPI static char const*& OPTION_VIEW_OFFSET();

    MCAPI static ::BaseGameVersion const& REMOVE_IGNORE_STARTING_VALUE_COMPONENT_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
