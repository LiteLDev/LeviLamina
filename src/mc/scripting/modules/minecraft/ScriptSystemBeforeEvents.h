#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"

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
    MCAPI ScriptSystemBeforeEvents(class Scripting::WeakLifetimeScope const&, gsl::not_null<class ServerLevel*>);

    MCAPI void onBeforeWatchdogTerminate(class Scripting::StrongTypedObjectHandle<
                                         struct ScriptModuleMinecraft::ScriptWatchdogTerminateBeforeEvent>);

    MCAPI void
        registerHandler(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemBeforeEvents>);

    MCAPI ~ScriptSystemBeforeEvents();

    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
