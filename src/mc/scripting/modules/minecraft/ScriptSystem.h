#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/Generator.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

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

    MCAPI void clearJob(class Scripting::WeakLifetimeScope const&, class Scripting::DependencyLocator&, uint);

    MCAPI void clearRun(uint);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemAfterEvents>
    getSystemAfterEvents();

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemBeforeEvents>
    getSystemBeforeEvents();

    MCAPI uint runInterval(class Scripting::Closure<void()>, std::optional<uint> interval);

    MCAPI uint runJob(class Scripting::DependencyLocator&, class Scripting::Generator<void, void, void>);

    MCAPI uint runSafe(class Scripting::Closure<void()>);

    MCAPI uint runTimeout(class Scripting::Closure<void()>, std::optional<uint> delay);

    MCAPI class Scripting::
        Result<class Scripting::Promise<void, struct Scripting::Error, void>, struct Scripting::EngineError>
        waitTicks(class Scripting::ScriptObjectFactory&, uint);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptSystem> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
