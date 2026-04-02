#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/shared/ScriptDebugCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class IScriptDebugger;
class ScriptDiagnosticsPublishToFile;
// clang-format on

class ServerScriptDebugCommand : public ::ScriptDebugCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptDebugCommand::Mode>              mMode;
    ::ll::TypedStorage<4, 4, ::ScriptDebugCommand::DebuggerAction>    mDebuggerAction;
    ::ll::TypedStorage<4, 4, ::ScriptDebugCommand::ProfilerAction>    mProfilerAction;
    ::ll::TypedStorage<4, 4, ::ScriptDebugCommand::DiagnosticsAction> mDiagnosticsAction;
    ::ll::TypedStorage<8, 32, ::std::string>                          mDebuggerHost;
    ::ll::TypedStorage<4, 4, int>                                     mDebuggerPort;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput& output) const /*override*/;

    virtual ~ServerScriptDebugCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ScriptDiagnosticsPublishToFile*& sDiagnosticsPublishToFile();

    MCAPI static ::std::optional<ushort>& sForcedPort();

    MCAPI static ::IScriptDebugger*& sServerScriptDebugger();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput& output) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
