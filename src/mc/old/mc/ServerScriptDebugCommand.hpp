/**
 * @file  ServerScriptDebugCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerScriptDebugCommand.
 *
 */
class ServerScriptDebugCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSCRIPTDEBUGCOMMAND
public:
    class ServerScriptDebugCommand& operator=(class ServerScriptDebugCommand const &) = delete;
    ServerScriptDebugCommand(class ServerScriptDebugCommand const &) = delete;
    ServerScriptDebugCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerScriptDebugCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@ServerScriptDebugCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@ServerScriptDebugCommand\@\@SAXAEAVCommandRegistry\@\@PEAVIScriptDebugger\@\@AEBV?$optional\@UScriptSettings\@\@\@std\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &, class IScriptDebugger *, class std::optional<struct ScriptSettings> const &);

//private:

private:
    /**
     * @symbol  ?sForcedPort\@ServerScriptDebugCommand\@\@0V?$optional\@G\@std\@\@A
     */
    MCAPI static class std::optional<unsigned short> sForcedPort;
    /**
     * @symbol  ?sServerScriptDebugger\@ServerScriptDebugCommand\@\@0PEAVIScriptDebugger\@\@EA
     */
    MCAPI static class IScriptDebugger * sServerScriptDebugger;

};