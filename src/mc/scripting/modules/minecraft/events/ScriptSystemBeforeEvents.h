#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { struct ScriptWatchdogTerminateBeforeEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemBeforeEvents {
public:
    // prevent constructor by default
    ScriptSystemBeforeEvents& operator=(ScriptSystemBeforeEvents const&);
    ScriptSystemBeforeEvents(ScriptSystemBeforeEvents const&);
    ScriptSystemBeforeEvents();

public:
    // NOLINTBEGIN
    MCAPI
    ScriptSystemBeforeEvents(class Scripting::WeakLifetimeScope const& scope, gsl::not_null<class ServerLevel*> level);

    MCAPI void onBeforeWatchdogTerminate(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptWatchdogTerminateBeforeEvent>
            beforeWatchdogTerminateEvent
    );

    MCAPI void
    registerHandler(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemBeforeEvents> handle);

    MCAPI ~ScriptSystemBeforeEvents();

    MCAPI static void bind(class Scripting::ModuleBindingBuilder& moduleBuilder);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
