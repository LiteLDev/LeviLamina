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
    enum class DebuggerAction : int {
        Listen  = 0,
        Connect = 1,
        Close   = 2,
    };

    enum class DiagnosticsAction : int {
        StartCapture = 0,
        StopCapture  = 1,
    };

    enum class Mode : int {
        Unknown     = 0,
        Debugger    = 1,
        Profiler    = 2,
        Diagnostics = 3,
    };

    enum class ProfilerAction : int {
        Start = 0,
        Stop  = 1,
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptDebugCommand();

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::ScriptDebugCommand::DebuggerAction>();
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::ScriptDebugCommand::DiagnosticsAction>();
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::ScriptDebugCommand::Mode>();
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::ScriptDebugCommand::ProfilerAction>();
// clang-format on
