#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ServerScriptDebugCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSCRIPTDEBUGCOMMAND
public:
    ServerScriptDebugCommand& operator=(ServerScriptDebugCommand const&) = delete;
    ServerScriptDebugCommand(ServerScriptDebugCommand const&)            = delete;
    ServerScriptDebugCommand()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@ServerScriptDebugCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol
     * ?setup\@ServerScriptDebugCommand\@\@SAXAEAVCommandRegistry\@\@PEAVIScriptDebugger\@\@AEBV?$optional\@UScriptSettings\@\@\@std\@\@\@Z
     */
    MCAPI static void
    setup(class CommandRegistry&, class IScriptDebugger*, class std::optional<struct ScriptSettings> const&);

    // private:

private:
    /**
     * @symbol ?sForcedPort\@ServerScriptDebugCommand\@\@0V?$optional\@G\@std\@\@A
     */
    MCAPI static class std::optional<unsigned short> sForcedPort;
    /**
     * @symbol ?sServerScriptDebugger\@ServerScriptDebugCommand\@\@0PEAVIScriptDebugger\@\@EA
     */
    MCAPI static class IScriptDebugger* sServerScriptDebugger;
};
