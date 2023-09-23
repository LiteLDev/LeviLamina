#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorDataDrivenTriggerEventSignalOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorEventSignalOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockEventSignalOptions; }
namespace ScriptModuleMinecraft { struct ScriptEventMessageFilterOptions; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptSignals {
// NOLINTBEGIN
// symbol:
// ?bindActorDataEventOptionsInterface@ScriptSignals@ScriptModuleMinecraft@@YA?AV?$InterfaceBindingBuilder@UScriptActorDataDrivenTriggerEventSignalOptions@ScriptModuleMinecraft@@@Scripting@@XZ
MCAPI class Scripting::InterfaceBindingBuilder<
    struct ScriptModuleMinecraft::ScriptActorDataDrivenTriggerEventSignalOptions>
bindActorDataEventOptionsInterface();

// symbol:
// ?bindActorDataEventOptions_V010@ScriptSignals@ScriptModuleMinecraft@@YA?AV?$ClassBindingBuilder@UScriptActorDataDrivenTriggerEventSignalOptions@ScriptModuleMinecraft@@@Scripting@@XZ
MCAPI class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorDataDrivenTriggerEventSignalOptions>
bindActorDataEventOptions_V010();

// symbol:
// ?bindActorEventOptionsInterface@ScriptSignals@ScriptModuleMinecraft@@YA?AV?$InterfaceBindingBuilder@UScriptActorEventSignalOptions@ScriptModuleMinecraft@@@Scripting@@XZ
MCAPI class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptActorEventSignalOptions>
bindActorEventOptionsInterface();

// symbol:
// ?bindActorEventOptions_V010@ScriptSignals@ScriptModuleMinecraft@@YA?AV?$ClassBindingBuilder@UScriptActorEventSignalOptions@ScriptModuleMinecraft@@@Scripting@@XZ
MCAPI class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorEventSignalOptions>
bindActorEventOptions_V010();

// symbol:
// ?bindBlockEventOptionsInterface@ScriptSignals@ScriptModuleMinecraft@@YA?AV?$InterfaceBindingBuilder@UScriptBlockEventSignalOptions@ScriptModuleMinecraft@@@Scripting@@XZ
MCAPI class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockEventSignalOptions>
bindBlockEventOptionsInterface();

// symbol:
// ?bindScriptEventMessageFilterOptions@ScriptSignals@ScriptModuleMinecraft@@YA?AV?$InterfaceBindingBuilder@UScriptEventMessageFilterOptions@ScriptModuleMinecraft@@@Scripting@@XZ
MCAPI class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptEventMessageFilterOptions>
bindScriptEventMessageFilterOptions();

// symbol: ?bindSignalsUtils@ScriptSignals@ScriptModuleMinecraft@@YAXAEAVModuleBindingBuilder@Scripting@@@Z
MCAPI void bindSignalsUtils(class Scripting::ModuleBindingBuilder&);
// NOLINTEND

}; // namespace ScriptModuleMinecraft::ScriptSignals
