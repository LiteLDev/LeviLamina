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
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystem {
public:
    // prevent constructor by default
    ScriptSystem& operator=(ScriptSystem const&);
    ScriptSystem(ScriptSystem const&);
    ScriptSystem();

public:
    // NOLINTBEGIN
    MCAPI ScriptSystem(class Scripting::WeakLifetimeScope const& scope, gsl::not_null<class ServerLevel*> level);

    MCAPI void
    clearJob(class Scripting::WeakLifetimeScope const& scope, class Scripting::DependencyLocator& locator, uint jobId);

    MCAPI void clearRun(uint runId);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemAfterEvents>
    getSystemAfterEvents();

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemBeforeEvents>
    getSystemBeforeEvents();

    MCAPI uint runInterval(class Scripting::Closure<void()> closure, std::optional<uint> interval);

    MCAPI uint
    runJob(class Scripting::DependencyLocator& locator, class Scripting::Generator<void, void, void> generator);

    MCAPI uint runSafe(class Scripting::Closure<void()> closure);

    MCAPI uint runTimeout(class Scripting::Closure<void()> closure, std::optional<uint> delay);

    MCAPI class Scripting::
        Result<class Scripting::Promise<void, struct Scripting::Error, void>, struct Scripting::EngineError>
        waitTicks(class Scripting::ScriptObjectFactory& factory, uint numberOfTicks);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptSystem> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Scripting::WeakLifetimeScope const& scope, gsl::not_null<class ServerLevel*> level);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
