/**
 * @file  ServerScriptDebugCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -1926554019
     * @vftbl  1
     * @symbol  ?execute\@ServerScriptDebugCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1314637680
     * @symbol  ?setup\@ServerScriptDebugCommand\@\@SAXAEAVCommandRegistry\@\@PEAVIScriptDebugger\@\@AEBV?$optional\@UScriptSettings\@\@\@std\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &, class IScriptDebugger *, class std::optional<struct ScriptSettings> const &);

//private:

private:
    /**
     * @hash   684119162
     * @symbol  ?sForcedPort\@ServerScriptDebugCommand\@\@0V?$optional\@G\@std\@\@A
     */
    MCAPI static class std::optional<unsigned short> sForcedPort;
    /**
     * @hash   2040900583
     * @symbol  ?sServerScriptDebugger\@ServerScriptDebugCommand\@\@0PEAVIScriptDebugger\@\@EA
     */
    MCAPI static class IScriptDebugger * sServerScriptDebugger;

};