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
    // vIndex: 0
    virtual ~ServerScriptDebugCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const&, class CommandOutput& output) const;

    MCAPI static void setup(
        class CommandRegistry&                      registry,
        class IScriptDebugger*                      debugger,
        std::optional<struct ScriptSettings> const& settings
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::optional<ushort> sForcedPort;

    MCAPI static class IScriptDebugger* sServerScriptDebugger;

    // NOLINTEND
};
