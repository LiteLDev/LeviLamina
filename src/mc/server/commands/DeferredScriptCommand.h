#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/script_engine/Promise.h"
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

    MCAPI DeferredScriptCommand(
        std::unique_ptr<class ScriptCommand>  scriptCommand,
        std::unique_ptr<class CommandContext> commandContext,
        class Scripting::WeakLifetimeScope    scope,
        class Scripting::Promise<
            class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>,
            struct ScriptModuleMinecraft::ScriptCommandError,
            void> promise
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void execute$(class MinecraftCommands& commands);

    // NOLINTEND
};
