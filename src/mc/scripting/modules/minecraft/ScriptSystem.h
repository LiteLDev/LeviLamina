#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/script_engine/Closure.h"
#include "mc/external/scripting/script_engine/Generator.h"
#include "mc/external/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
namespace ScriptModuleMinecraft { class ScriptSystemInfo; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
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
    MCAPI ScriptSystem(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& eventListeners,
        ::gsl::not_null<::ServerLevel*>                      level
    );

    MCAPI void
    clearJob(::Scripting::WeakLifetimeScope const& scope, ::Scripting::DependencyLocator& locator, uint jobId);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemAfterEvents> getSystemAfterEvents();

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents>
    getSystemBeforeEvents();

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemInfo> getSystemInfo();

    MCAPI uint runInterval(::Scripting::Closure<void()> closure, ::std::optional<uint> interval);

    MCAPI uint runJob(::Scripting::DependencyLocator& locator, ::Scripting::Generator<void, void, void> generator);

    MCAPI uint runSafe(::Scripting::Closure<void()> closure);

    MCAPI uint runTimeout(::Scripting::Closure<void()> closure, ::std::optional<uint> delay);

    MCAPI ::Scripting::Result<::Scripting::Promise<void, ::Scripting::Error, void>, ::Scripting::EngineError>
    waitTicks(::Scripting::ScriptObjectFactory& factory, uint numberOfTicks);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptSystem> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& eventListeners,
        ::gsl::not_null<::ServerLevel*>                      level
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
