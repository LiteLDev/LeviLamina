#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorDataDrivenTriggerEventSignalOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorEventSignalOptions; }
namespace ScriptModuleMinecraft { struct ScriptEventMessageFilterOptions; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptSignals {
// NOLINTBEGIN
MCAPI class Scripting::InterfaceBindingBuilder<
    struct ScriptModuleMinecraft::ScriptActorDataDrivenTriggerEventSignalOptions>
bindActorDataEventOptionsInterface();

MCAPI class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorDataDrivenTriggerEventSignalOptions>
bindActorDataEventOptions_V010();

MCAPI class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptActorEventSignalOptions>
bindActorEventOptionsInterface();

MCAPI class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorEventSignalOptions>
bindActorEventOptions_V010();

MCAPI class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptEventMessageFilterOptions>
bindScriptEventMessageFilterOptions();

MCAPI void bindSignalsUtils(class Scripting::ModuleBindingBuilder&);
// NOLINTEND

}; // namespace ScriptModuleMinecraft::ScriptSignals
