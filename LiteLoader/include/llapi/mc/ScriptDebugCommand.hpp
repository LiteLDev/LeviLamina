/**
 * @file  ScriptDebugCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptDebugCommand.
 *
 */
class ScriptDebugCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEBUGCOMMAND
public:
    class ScriptDebugCommand& operator=(class ScriptDebugCommand const &) = delete;
    ScriptDebugCommand(class ScriptDebugCommand const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScriptDebugCommand();
    /**
     * @hash   698890527
     * @symbol  ??0ScriptDebugCommand\@\@QEAA\@XZ
     */
    MCAPI ScriptDebugCommand();

//protected:
    /**
     * @hash   1447943458
     * @symbol  ?_handleDebuggerAttach\@ScriptDebugCommand\@\@IEBAXPEAVIScriptDebugger\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DebuggerAction\@1\@1GAEAVCommandOutput\@\@\@Z
     */
    MCAPI void _handleDebuggerAttach(class IScriptDebugger *, std::string const &, enum class ScriptDebugCommand::DebuggerAction, std::string const &, unsigned short, class CommandOutput &) const;
    /**
     * @hash   -1787756220
     * @symbol  ?_handleProfilerAction\@ScriptDebugCommand\@\@IEBAXPEAVIScriptDebugger\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ProfilerAction\@1\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _handleProfilerAction(class IScriptDebugger *, std::string const &, enum class ScriptDebugCommand::ProfilerAction, class CommandOutput &) const;
    /**
     * @hash   -365323204
     * @symbol  ?_handleWatchdogAction\@ScriptDebugCommand\@\@IEBAXPEAVIScriptDebugger\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4WatchdogAction\@1\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _handleWatchdogAction(class IScriptDebugger *, std::string const &, enum class ScriptDebugCommand::WatchdogAction, class CommandOutput &) const;

protected:

};