/**
 * @file  DeferredScriptCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DeferredScriptCommand.
 *
 */
class DeferredScriptCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDSCRIPTCOMMAND
public:
    class DeferredScriptCommand& operator=(class DeferredScriptCommand const &) = delete;
    DeferredScriptCommand(class DeferredScriptCommand const &) = delete;
    DeferredScriptCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DeferredScriptCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@DeferredScriptCommand\@\@UEAAXAEAVMinecraftCommands\@\@\@Z
     */
    virtual void execute(class MinecraftCommands &);
    /**
     * @symbol  ??0DeferredScriptCommand\@\@QEAA\@V?$unique_ptr\@VScriptCommand\@\@U?$default_delete\@VScriptCommand\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VCommandContext\@\@U?$default_delete\@VCommandContext\@\@\@std\@\@\@2\@VWeakLifetimeScope\@Scripting\@\@V?$Promise\@V?$StrongTypedObjectHandle\@UScriptCommandResult\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@5\@\@Z
     */
    MCAPI DeferredScriptCommand(std::unique_ptr<class ScriptCommand>, std::unique_ptr<class CommandContext>, class Scripting::WeakLifetimeScope, class Scripting::Promise<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>>);

};