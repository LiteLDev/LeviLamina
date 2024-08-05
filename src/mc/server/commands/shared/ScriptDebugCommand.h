#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ScriptDebugCommand : public ::Command {
public:
    // ScriptDebugCommand inner types define
    enum class DebuggerAction {};

    enum class ProfilerAction {};

    enum class WatchdogAction {};

public:
    // prevent constructor by default
    ScriptDebugCommand& operator=(ScriptDebugCommand const&);
    ScriptDebugCommand(ScriptDebugCommand const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptDebugCommand();

    MCAPI ScriptDebugCommand();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _handleDebuggerAttach(
        class IScriptDebugger*,
        std::string const&,
        ::ScriptDebugCommand::DebuggerAction action,
        std::string const&                   host,
        ushort                               port,
        class CommandOutput&                 output
    ) const;

    MCAPI void _handleProfilerAction(
        class IScriptDebugger*,
        std::string const&,
        ::ScriptDebugCommand::ProfilerAction action,
        class CommandOutput&                 output
    ) const;

    MCAPI void _handleWatchdogAction(
        class IScriptDebugger*,
        std::string const&,
        ::ScriptDebugCommand::WatchdogAction action,
        class CommandOutput&                 output
    ) const;

    // NOLINTEND
};
