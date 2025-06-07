#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
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
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8e6a2b;
    ::ll::UntypedStorage<8, 8>  mUnkfd41d2;
    ::ll::UntypedStorage<8, 32> mUnk77c71d;
    ::ll::UntypedStorage<8, 32> mUnk636e90;
    ::ll::UntypedStorage<8, 8>  mUnkbcba05;
    ::ll::UntypedStorage<8, 40> mUnkfcb077;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSystem& operator=(ScriptSystem const&);
    ScriptSystem(ScriptSystem const&);
    ScriptSystem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSystem(::ScriptModuleMinecraft::ScriptSystem&&);

    MCNAPI ScriptSystem(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& eventListeners,
        ::gsl::not_null<::ServerLevel*>                      level
    );

    MCNAPI ::Scripting::Result<::Scripting::Promise<void, ::Scripting::Error, void>, ::Scripting::EngineError>
    _waitTicks(::Scripting::ScriptObjectFactory& factory, uint numberOfTicks);

    MCNAPI void
    clearJob(::Scripting::WeakLifetimeScope const& scope, ::Scripting::DependencyLocator& locator, uint jobId);

    MCNAPI void clearRun(uint runId);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemAfterEvents>
    getSystemAfterEvents();

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents>
    getSystemBeforeEvents();

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemInfo> getSystemInfo();

    MCNAPI ::ScriptModuleMinecraft::ScriptSystem& operator=(::ScriptModuleMinecraft::ScriptSystem&&);

    MCNAPI uint runInterval(::Scripting::Closure<void()> closure, ::std::optional<uint> interval);

    MCNAPI uint runJob(::Scripting::DependencyLocator& locator, ::Scripting::Generator<void, void, void> generator);

    MCNAPI uint runSafe(::Scripting::Closure<void()> closure);

    MCNAPI uint runTimeout(::Scripting::Closure<void()> closure, ::std::optional<uint> delay);

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::Scripting::InvalidArgumentError,
        ::Scripting::EngineError>
    sendScriptEvent(::std::string const& messageId, ::std::string const& messagePayload);

    MCNAPI ::Scripting::Result<::Scripting::Promise<void, ::Scripting::Error, void>, ::Scripting::EngineError>
    waitTicks(::Scripting::ScriptObjectFactory& factory, uint numberOfTicks);

    MCNAPI ::Scripting::Result<::Scripting::Promise<void, ::Scripting::Error, void>, ::Scripting::EngineError>
    waitTicksV1(::Scripting::ScriptObjectFactory& factory, uint numberOfTicks);

    MCNAPI ~ScriptSystem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptSystem&&);

    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& eventListeners,
        ::gsl::not_null<::ServerLevel*>                      level
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
