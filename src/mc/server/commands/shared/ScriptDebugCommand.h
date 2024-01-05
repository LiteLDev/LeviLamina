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
    // vIndex: 0, symbol: ??1ScriptDebugCommand@@UEAA@XZ
    virtual ~ScriptDebugCommand();

    // symbol: ??0ScriptDebugCommand@@QEAA@XZ
    MCAPI ScriptDebugCommand();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_handleDebuggerAttach@ScriptDebugCommand@@IEBAXPEAVIScriptDebugger@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DebuggerAction@1@1GAEAVCommandOutput@@@Z
    MCAPI void _handleDebuggerAttach(
        class IScriptDebugger*,
        std::string const&,
        ::ScriptDebugCommand::DebuggerAction action,
        std::string const&                   host,
        ushort                               port,
        class CommandOutput&                 output
    ) const;

    // symbol:
    // ?_handleProfilerAction@ScriptDebugCommand@@IEBAXPEAVIScriptDebugger@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ProfilerAction@1@AEAVCommandOutput@@@Z
    MCAPI void _handleProfilerAction(
        class IScriptDebugger*,
        std::string const&,
        ::ScriptDebugCommand::ProfilerAction action,
        class CommandOutput&                 output
    ) const;

    // symbol:
    // ?_handleWatchdogAction@ScriptDebugCommand@@IEBAXPEAVIScriptDebugger@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4WatchdogAction@1@AEAVCommandOutput@@@Z
    MCAPI void _handleWatchdogAction(
        class IScriptDebugger*,
        std::string const&,
        ::ScriptDebugCommand::WatchdogAction action,
        class CommandOutput&                 output
    ) const;

    // NOLINTEND
};
