#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOutput;
class IScriptDebugger;
// clang-format on

class ScriptDebugCommand : public ::Command {
public:
    // ScriptDebugCommand inner types define
    enum class Mode : int {
        Unknown  = 0,
        Debugger = 1,
        Profiler = 2,
        Watchdog = 3,
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

    enum class WatchdogAction : int {
        ExportStats = 0,
    };

public:
    // prevent constructor by default
    ScriptDebugCommand& operator=(ScriptDebugCommand const&);
    ScriptDebugCommand(ScriptDebugCommand const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptDebugCommand() /*override*/;
    // NOLINTEND

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

    MCAPI void _handleProfilerAction(
        ::IScriptDebugger*                   debugger,
        ::std::string const&                 locPrefix,
        ::ScriptDebugCommand::ProfilerAction action,
        ::CommandOutput&                     output
    ) const;

    MCAPI void _handleWatchdogAction(
        ::IScriptDebugger*                   debugger,
        ::std::string const&                 locPrefix,
        ::ScriptDebugCommand::WatchdogAction action,
        ::CommandOutput&                     output
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
