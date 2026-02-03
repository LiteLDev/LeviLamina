#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/deps/scripting/script_engine/Generator.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
namespace ScriptModuleMinecraft { class ScriptSystemInfo; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystem {
public:
    // ScriptSystem inner types define
    using Key = ::ScriptModuleMinecraft::ScriptGlobalEventListeners*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemAfterEvents>>
        mSystemAfterEventsHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents>>
        mSystemBeforeEventsHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ScriptModuleMinecraft::ScriptGlobalEventListeners*>>
        mGlobalEventListeners;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemInfo>>>
        mSystemInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSystem& operator=(ScriptSystem const&);
    ScriptSystem(ScriptSystem const&);
    ScriptSystem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSystem(::ScriptModuleMinecraft::ScriptSystem&&);

    MCAPI ScriptSystem(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& eventListeners,
        ::gsl::not_null<::ServerLevel*>                      level
    );

    MCAPI ::Scripting::Result<::Scripting::Promise<void, ::Scripting::Error, void>, ::Scripting::EngineError>
    _waitTicks(::Scripting::ScriptObjectFactory& factory, uint numberOfTicks);

    MCAPI void
    clearJob(::Scripting::WeakLifetimeScope const& scope, ::Scripting::DependencyLocator& locator, uint jobId);

    MCAPI void clearRun(uint runId);

    MCFOLD ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemAfterEvents>
    getSystemAfterEvents();

    MCFOLD ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents>
    getSystemBeforeEvents();

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemInfo> getSystemInfo();

    MCAPI ::ScriptModuleMinecraft::ScriptSystem& operator=(::ScriptModuleMinecraft::ScriptSystem&&);

    MCAPI uint runInterval(::Scripting::Closure<void()> closure, ::std::optional<uint> interval);

    MCAPI uint runJob(::Scripting::DependencyLocator& locator, ::Scripting::Generator<void, void, void> generator);

    MCAPI uint runSafe(::Scripting::Closure<void()> closure);

    MCAPI uint runTimeout(::Scripting::Closure<void()> closure, ::std::optional<uint> delay);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::Scripting::InvalidArgumentError,
        ::Scripting::EngineError>
    sendScriptEvent(::std::string const& messageId, ::std::string const& messagePayload);

    MCAPI ::Scripting::Result<::Scripting::Promise<void, ::Scripting::Error, void>, ::Scripting::EngineError>
    waitTicks(::Scripting::ScriptObjectFactory& factory, uint numberOfTicks);

    MCAPI ::Scripting::Result<::Scripting::Promise<void, ::Scripting::Error, void>, ::Scripting::EngineError>
    waitTicksV1(::Scripting::ScriptObjectFactory& factory, uint numberOfTicks);

    MCAPI ~ScriptSystem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptSystem&&);

    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& eventListeners,
        ::gsl::not_null<::ServerLevel*>                      level
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
