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
    // vIndex: 0, symbol: __gen_??1DeferredScriptCommand@@UEAA@XZ
    virtual ~DeferredScriptCommand() = default;

    // vIndex: 1, symbol: ?execute@DeferredScriptCommand@@UEAAXAEAVMinecraftCommands@@@Z
    virtual void execute(class MinecraftCommands& commands);

    // symbol:
    // ??0DeferredScriptCommand@@QEAA@V?$unique_ptr@VScriptCommand@@U?$default_delete@VScriptCommand@@@std@@@std@@V?$unique_ptr@VCommandContext@@U?$default_delete@VCommandContext@@@std@@@2@VWeakLifetimeScope@Scripting@@V?$Promise@V?$StrongTypedObjectHandle@UScriptCommandResult@ScriptModuleMinecraft@@@Scripting@@UScriptCommandError@ScriptModuleMinecraft@@X@5@@Z
    MCAPI
    DeferredScriptCommand(std::unique_ptr<class ScriptCommand>, std::unique_ptr<class CommandContext>, class Scripting::WeakLifetimeScope scope, class Scripting::Promise<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>, struct ScriptModuleMinecraft::ScriptCommandError, void>);

    // NOLINTEND
};
