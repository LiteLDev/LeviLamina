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
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _cleanupOutputDirOnExportFailure(::Core::PathBuffer<::std::string> const& pathToOutputDir);

    MCAPI static void _exportSubcommand(
        ::CommandOrigin const&                  output,
        ::CommandOutput&                        commandExportType,
        ::ProjectCommand::ExportSubcommandTypes callingPlayerUniqueId,
        ::ActorUniqueID
    );

    MCAPI static ::Core::PathBuffer<::std::string> _getLevelExportPath(
        ::ActorUniqueID      callingPlayerUniqueId,
        ::Level*             level,
        ::std::string const& exportFileExtension
    );

    MCAPI static void _outputFormattedCommand(
        ::ActorUniqueID                     callingPlayerUniqueId,
        ::Level*                            level,
        ::std::string const&                prefix,
        ::std::string const&                commandType,
        ::std::string const&                msg,
        ::std::vector<::std::string> const& args
    );

    MCAPI static void _reportErrorToUser(
        ::ActorUniqueID                     callingPlayerUniqueId,
        ::Level*                            level,
        ::std::string const&                commandType,
        ::std::string const&                msg,
        ::std::vector<::std::string> const& args
    );

    MCAPI static void _reportToUser(
        ::ActorUniqueID                     callingPlayerUniqueId,
        ::Level*                            level,
        ::std::string const&                commandType,
        ::std::string const&                msg,
        ::std::vector<::std::string> const& args
    );

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

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::ProjectCommand::ExportSubcommandTypes>();
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::ProjectCommand::Subcommand>();
// clang-format on
