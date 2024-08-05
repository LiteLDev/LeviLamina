#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/server/commands/DeferredCommandBase.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class DeferredScriptCommand : public ::DeferredCommandBase {
public:
    // prevent constructor by default
    DeferredScriptCommand& operator=(DeferredScriptCommand const&);
    DeferredScriptCommand(DeferredScriptCommand const&);
    DeferredScriptCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeferredScriptCommand() = default;

    // vIndex: 1
    virtual void execute(class MinecraftCommands& commands);

    MCAPI
    DeferredScriptCommand(std::unique_ptr<class ScriptCommand>, std::unique_ptr<class CommandContext>, class Scripting::WeakLifetimeScope scope, class Scripting::Promise<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>, struct ScriptModuleMinecraft::ScriptCommandError, void>);

    // NOLINTEND
};
