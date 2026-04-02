#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/server/commands/DeferredCommandBase.h"

// auto generated forward declare list
// clang-format off
class CommandContext;
class MinecraftCommands;
class ScriptCommandOutput;
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
// clang-format on

class DeferredScriptCommand : public ::DeferredCommandBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptCommandOutput>> mScriptCommandOutput;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandContext>>      mCommandContext;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>          mScope;
    ::ll::TypedStorage<
        8,
        80,
        ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCommandResult>,
            ::ScriptModuleMinecraft::ScriptCommandError,
            void>>
        mPromise;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredScriptCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeferredScriptCommand() /*override*/;

    virtual void execute(::MinecraftCommands& commands) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeferredScriptCommand(
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
    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::MinecraftCommands& commands);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
