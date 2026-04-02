#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class CameraAimAssistCommand : public ::Command {
public:
    // CameraAimAssistCommand inner types define
    enum class Action : uchar {
        Set   = 0,
        Clear = 1,
    };

    enum class TargetMode : uchar {
        Distance = 0,
        Angle    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>>        mPlayerTargets;
    ::ll::TypedStorage<8, 32, ::std::string>                       mPresetId;
    ::ll::TypedStorage<4, 4, float>                                mViewAngleX;
    ::ll::TypedStorage<4, 4, float>                                mViewAngleY;
    ::ll::TypedStorage<4, 4, float>                                mDistance;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistCommand::TargetMode> mTargetMode;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistCommand::Action>     mAction;
    ::ll::TypedStorage<1, 1, bool>                                 mShowDebugRender;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~CameraAimAssistCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
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
