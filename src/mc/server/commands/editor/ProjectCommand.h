#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

class ProjectCommand : public ::ServerCommand {
public:
    // ProjectCommand inner types define
    enum class ExportSubcommandTypes : int {
        None     = 0,
        Project  = 1,
        World    = 2,
        Template = 3,
    };

    enum class Subcommand : int {
        None   = 0,
        Export = 1,
    };

    enum class TaskState : int {
        Running  = 0,
        Complete = 1,
        Error    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ProjectCommand::Subcommand>            mSubcommand;
    ::ll::TypedStorage<4, 4, ::ProjectCommand::ExportSubcommandTypes> mExportSubcommandType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
