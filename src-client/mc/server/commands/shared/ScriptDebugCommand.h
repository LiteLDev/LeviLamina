#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOutput;
struct IScriptDebugger;
struct ScriptDiagnosticsPublishToFile;
// clang-format on

class ScriptDebugCommand : public ::Command {
public:
    // ScriptDebugCommand inner types define
    enum class Mode : uint {};

    enum class DebuggerAction : uint {};

    enum class ProfilerAction : uint {};

    enum class DiagnosticsAction : uint {};

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptDebugCommand() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _handleDebuggerAttach(
        ::IScriptDebugger*                   debugger,
        ::std::string const&                 locPrefix,
        ::ScriptDebugCommand::DebuggerAction action,
        ::std::string const&                 host,
        ushort                               port,
        ::CommandOutput&                     output
    ) const;

    MCAPI void _handleDiagnosticsAction(
        ::ScriptDiagnosticsPublishToFile*       diagnosticsPublishToFile,
        ::std::string const&                    locPrefix,
        ::ScriptDebugCommand::DiagnosticsAction action,
        ::CommandOutput&                        output
    ) const;

    MCAPI void _handleProfilerAction(
        ::IScriptDebugger*                   debugger,
        ::std::string const&                 locPrefix,
        ::ScriptDebugCommand::ProfilerAction action,
        ::CommandOutput&                     output
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
