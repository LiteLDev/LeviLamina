#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Level;
struct ActorUniqueID;
// clang-format on

class ProjectCommand : public ::ServerCommand {
public:
    // ProjectCommand inner types define
    enum class Subcommand : int {
        None   = 0,
        Export = 1,
    };

    enum class ExportSubcommandTypes : int {
        None     = 0,
        Project  = 1,
        World    = 2,
        Template = 3,
    };

    enum class TaskState : int {
        Running  = 0,
        Complete = 1,
        Error    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk45f2ff;
    ::ll::UntypedStorage<4, 4> mUnkbd5e90;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectCommand& operator=(ProjectCommand const&);
    ProjectCommand(ProjectCommand const&);
    ProjectCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~ProjectCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _cleanupOutputDirOnExportFailure(::Core::PathBuffer<::std::string> const& pathToOutputDir);

    MCNAPI static void _exportSubcommand(
        ::CommandOrigin const&                  output,
        ::CommandOutput&                        commandExportType,
        ::ProjectCommand::ExportSubcommandTypes callingPlayerUniqueId,
        ::ActorUniqueID
    );

    MCNAPI static ::Core::PathBuffer<::std::string> _getLevelExportPath(
        ::ActorUniqueID      callingPlayerUniqueId,
        ::Level*             level,
        ::std::string const& exportFileExtension
    );

    MCNAPI static void _outputFormattedCommand(
        ::ActorUniqueID                     callingPlayerUniqueId,
        ::Level*                            level,
        ::std::string const&                prefix,
        ::std::string const&                commandType,
        ::std::string const&                msg,
        ::std::vector<::std::string> const& args
    );

    MCNAPI static void _reportErrorToUser(
        ::ActorUniqueID                     callingPlayerUniqueId,
        ::Level*                            level,
        ::std::string const&                commandType,
        ::std::string const&                msg,
        ::std::vector<::std::string> const& args
    );

    MCNAPI static void _reportToUser(
        ::ActorUniqueID                     callingPlayerUniqueId,
        ::Level*                            level,
        ::std::string const&                commandType,
        ::std::string const&                msg,
        ::std::vector<::std::string> const& args
    );

    MCNAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
