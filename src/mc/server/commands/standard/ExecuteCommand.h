#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandBlockName.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class ExecuteCommand : public ::Command {
public:
    // ExecuteCommand inner types define
    enum class Mode : int {
        Execute = 0,
        Detect  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>> mTargets;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>      mPosition;
    ::ll::TypedStorage<4, 16, ::CommandPosition>           mDetectPosition;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>           mBlock;
    ::ll::TypedStorage<4, 4, int>                          mBlockData;
    ::ll::TypedStorage<4, 4, ::ExecuteCommand::Mode>       mMode;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Command>> mCommand;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, bool isLegacyActive, int newExecuteStartVersion);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
