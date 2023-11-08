#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/shared/ScriptDebugCommand.h"

class ServerScriptDebugCommand : public ::ScriptDebugCommand {
public:
    // prevent constructor by default
    ServerScriptDebugCommand& operator=(ServerScriptDebugCommand const&);
    ServerScriptDebugCommand(ServerScriptDebugCommand const&);
    ServerScriptDebugCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ServerScriptDebugCommand@@UEAA@XZ
    virtual ~ServerScriptDebugCommand() = default;

    // vIndex: 2, symbol: ?execute@ServerScriptDebugCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol:
    // ?setup@ServerScriptDebugCommand@@SAXAEAVCommandRegistry@@PEAVIScriptDebugger@@AEBV?$optional@UScriptSettings@@@std@@@Z
    MCAPI static void
    setup(class CommandRegistry&, class IScriptDebugger*, std::optional<struct ScriptSettings> const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?sForcedPort@ServerScriptDebugCommand@@0V?$optional@G@std@@A
    MCAPI static std::optional<ushort> sForcedPort;

    // symbol: ?sServerScriptDebugger@ServerScriptDebugCommand@@0PEAVIScriptDebugger@@EA
    MCAPI static class IScriptDebugger* sServerScriptDebugger;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $sForcedPort() { return sForcedPort; }

    static auto& $sServerScriptDebugger() { return sServerScriptDebugger; }

    // NOLINTEND
};
