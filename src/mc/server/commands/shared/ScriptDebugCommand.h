#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ScriptDebugCommand : public ::Command {
public:
    // ScriptDebugCommand inner types declare
    // clang-format off

    // clang-format on

    // ScriptDebugCommand inner types define
    enum class DebuggerAction {};

    enum class ProfilerAction {};

    enum class WatchdogAction {};

public:
    // prevent constructor by default
    ScriptDebugCommand& operator=(ScriptDebugCommand const&) = delete;
    ScriptDebugCommand(ScriptDebugCommand const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTDEBUGCOMMAND
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptDebugCommand(); // NOLINT
#endif
    /**
     * @symbol ??0ScriptDebugCommand\@\@QEAA\@XZ
     */
    MCAPI ScriptDebugCommand(); // NOLINT

    // protected:
    /**
     * @symbol
     * ?_handleDebuggerAttach\@ScriptDebugCommand\@\@IEBAXPEAVIScriptDebugger\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DebuggerAction\@1\@1GAEAVCommandOutput\@\@\@Z
     */
    MCAPI void
    _handleDebuggerAttach(class IScriptDebugger*, std::string const&, enum class ScriptDebugCommand::DebuggerAction, std::string const&, unsigned short, class CommandOutput&)
        const; // NOLINT
    /**
     * @symbol
     * ?_handleProfilerAction\@ScriptDebugCommand\@\@IEBAXPEAVIScriptDebugger\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ProfilerAction\@1\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void
    _handleProfilerAction(class IScriptDebugger*, std::string const&, enum class ScriptDebugCommand::ProfilerAction, class CommandOutput&)
        const; // NOLINT
    /**
     * @symbol
     * ?_handleWatchdogAction\@ScriptDebugCommand\@\@IEBAXPEAVIScriptDebugger\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4WatchdogAction\@1\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void
    _handleWatchdogAction(class IScriptDebugger*, std::string const&, enum class ScriptDebugCommand::WatchdogAction, class CommandOutput&)
        const; // NOLINT

protected:
};
