#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOutput;
class IScriptDebugger;
class ScriptDiagnosticsPublishToFile;
// clang-format on

class ScriptDebugCommand : public ::Command {
public:
    // ScriptDebugCommand inner types define
    enum class Mode : int {
        Unknown     = 0,
        Debugger    = 1,
        Profiler    = 2,
        Diagnostics = 3,
    };

    enum class DebuggerAction : int {
        Listen  = 0,
        Connect = 1,
        Close   = 2,
    };

    enum class ProfilerAction : int {
        Start = 0,
        Stop  = 1,
    };

    enum class DiagnosticsAction : int {
        StartCapture = 0,
        StopCapture  = 1,
    };

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
