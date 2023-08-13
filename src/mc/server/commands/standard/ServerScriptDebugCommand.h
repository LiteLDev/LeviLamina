#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/shared/ScriptDebugCommand.h"

class ServerScriptDebugCommand : public ::ScriptDebugCommand {

public:
    // prevent constructor by default
    ServerScriptDebugCommand& operator=(ServerScriptDebugCommand const&) = delete;
    ServerScriptDebugCommand(ServerScriptDebugCommand const&)            = delete;
    ServerScriptDebugCommand()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?execute\@ServerScriptDebugCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol
     * ?setup\@ServerScriptDebugCommand\@\@SAXAEAVCommandRegistry\@\@PEAVIScriptDebugger\@\@AEBV?$optional\@UScriptSettings\@\@\@std\@\@\@Z
     */
    MCAPI static void
    setup(class CommandRegistry&, class IScriptDebugger*, std::optional<struct ScriptSettings> const&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?sForcedPort\@ServerScriptDebugCommand\@\@0V?$optional\@G\@std\@\@A
     */
    MCAPI static std::optional<unsigned short> sForcedPort;
    /**
     * @symbol ?sServerScriptDebugger\@ServerScriptDebugCommand\@\@0PEAVIScriptDebugger\@\@EA
     */
    MCAPI static class IScriptDebugger* sServerScriptDebugger;
    // NOLINTEND
};
