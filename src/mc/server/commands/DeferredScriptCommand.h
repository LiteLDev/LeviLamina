#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/server/commands/DeferredCommandBase.h"

// auto generated forward declare list
// clang-format off
class CommandContext;
class MinecraftCommands;
class ScriptCommandOutput;
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class DeferredScriptCommand : public ::DeferredCommandBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk413124;
    ::ll::UntypedStorage<8, 8>  mUnkb39f82;
    ::ll::UntypedStorage<8, 16> mUnk79b626;
    ::ll::UntypedStorage<8, 80> mUnkf01e9a;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredScriptCommand& operator=(DeferredScriptCommand const&);
    DeferredScriptCommand(DeferredScriptCommand const&);
    DeferredScriptCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeferredScriptCommand() /*override*/;

    // vIndex: 1
    virtual void execute(::MinecraftCommands& commands) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeferredScriptCommand(
        ::std::unique_ptr<::ScriptCommandOutput> scriptCommandOutput,
        ::std::unique_ptr<::CommandContext>      commandContext,
        ::Scripting::WeakLifetimeScope           scope,
        ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCommandResult>,
            ::ScriptModuleMinecraft::ScriptCommandError,
            void> promise
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::ScriptCommandOutput> scriptCommandOutput,
        ::std::unique_ptr<::CommandContext>      commandContext,
        ::Scripting::WeakLifetimeScope           scope,
        ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCommandResult>,
            ::ScriptModuleMinecraft::ScriptCommandError,
            void> promise
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::MinecraftCommands& commands);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
