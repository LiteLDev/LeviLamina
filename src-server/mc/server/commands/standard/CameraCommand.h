#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CameraPresets;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Experiments;
struct CameraInstruction;
struct ServerCameraStatesComponent;
// clang-format on

class CameraCommand : public ::Command {
public:
    // CameraCommand inner types define
    enum class CameraCommandOption : uchar {
        None         = 0,
        Set          = 1,
        Ease         = 2,
        Pos          = 3,
        Rot          = 4,
        FovSet       = 5,
        FovClear     = 6,
        Facing       = 7,
        TargetEntity = 8,
        TargetOffset = 9,
        RemoveTarget = 10,
        ViewOffset   = 11,
        EntityOffset = 12,
        Default      = 13,
        Clear        = 14,
        Fade         = 15,
        Time         = 16,
        Color        = 17,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnk822547;
    ::ll::UntypedStorage<1, 1>   mUnk6d2b15;
    ::ll::UntypedStorage<8, 32>  mUnk602621;
    ::ll::UntypedStorage<1, 1>   mUnk43793e;
    ::ll::UntypedStorage<4, 4>   mUnk76eb2f;
    ::ll::UntypedStorage<4, 4>   mUnkda0689;
    ::ll::UntypedStorage<1, 1>   mUnk49b356;
    ::ll::UntypedStorage<4, 16>  mUnk717385;
    ::ll::UntypedStorage<1, 1>   mUnkbe461d;
    ::ll::UntypedStorage<4, 8>   mUnkc0d6b9;
    ::ll::UntypedStorage<4, 8>   mUnk79bee7;
    ::ll::UntypedStorage<1, 1>   mUnk221b02;
    ::ll::UntypedStorage<8, 200> mUnkbcf156;
    ::ll::UntypedStorage<4, 16>  mUnk6890a2;
    ::ll::UntypedStorage<1, 1>   mUnkb51868;
    ::ll::UntypedStorage<1, 1>   mUnk87851f;
    ::ll::UntypedStorage<1, 1>   mUnkcf4eac;
    ::ll::UntypedStorage<4, 4>   mUnk124698;
    ::ll::UntypedStorage<4, 4>   mUnkf530ad;
    ::ll::UntypedStorage<1, 1>   mUnkac13f3;
    ::ll::UntypedStorage<4, 4>   mUnked6be8;
    ::ll::UntypedStorage<4, 4>   mUnk5b206e;
    ::ll::UntypedStorage<4, 4>   mUnk8f6909;
    ::ll::UntypedStorage<1, 1>   mUnk3233d4;
    ::ll::UntypedStorage<1, 1>   mUnk18245b;
    ::ll::UntypedStorage<8, 200> mUnk90b622;
    ::ll::UntypedStorage<4, 4>   mUnkf3ad95;
    ::ll::UntypedStorage<4, 4>   mUnk48d083;
    ::ll::UntypedStorage<4, 4>   mUnkc0d44c;
    ::ll::UntypedStorage<1, 1>   mUnk46fd0d;
    ::ll::UntypedStorage<4, 4>   mUnk623384;
    ::ll::UntypedStorage<4, 4>   mUnk6220be;
    ::ll::UntypedStorage<4, 4>   mUnk811594;
    ::ll::UntypedStorage<1, 1>   mUnk626e12;
    ::ll::UntypedStorage<4, 4>   mUnkcb9bf0;
    ::ll::UntypedStorage<4, 4>   mUnk1be6e3;
    ::ll::UntypedStorage<4, 4>   mUnk7df88a;
    ::ll::UntypedStorage<1, 1>   mUnkcf2ab3;
    ::ll::UntypedStorage<4, 4>   mUnkecea45;
    ::ll::UntypedStorage<4, 4>   mUnk55454d;
    ::ll::UntypedStorage<4, 4>   mUnk647e26;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraCommand& operator=(CameraCommand const&);
    CameraCommand(CameraCommand const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~CameraCommand() /*override*/ = default;
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
    MCAPI static void setup(::CommandRegistry& registry, ::Experiments const*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ENUM_OPTION_CLEAR();

    MCAPI static char const*& ENUM_OPTION_COLOR();

    MCAPI static char const*& ENUM_OPTION_DEFAULT();

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

    MCAPI static char const*& OPTION_CLEAR();

    MCAPI static char const*& OPTION_COLOR();

    MCAPI static char const*& OPTION_DEFAULT();

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
