#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/CameraShakeAction.h"
#include "mc/deps/minecraft_camera/CameraShakeType.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class CameraShakeCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CameraShakeAction>           mShakeAction;
    ::ll::TypedStorage<1, 1, ::CameraShakeType>             mShakeType;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>> mTargets;
    ::ll::TypedStorage<4, 4, float>                         mIntensity;
    ::ll::TypedStorage<4, 4, float>                         mSeconds;
    ::ll::TypedStorage<1, 1, bool>                          mTargetsSelectionIsSelector;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~CameraShakeCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _executeAdd(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void _executeStop(::CommandOrigin const& origin, ::CommandOutput& output) const;
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
