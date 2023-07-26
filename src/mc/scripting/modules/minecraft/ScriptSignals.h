#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorDataDrivenTriggerEventSignalOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorEventSignalOptions; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { template<typename T0> class ClassBindingBuilder; }
namespace Scripting { template<typename T0> class InterfaceBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptSignals {
/**
 * @symbol
 * ?bindActorDataEventOptionsInterface\@ScriptSignals\@ScriptModuleMinecraft\@\@YA?AV?$InterfaceBindingBuilder\@UScriptActorDataDrivenTriggerEventSignalOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::InterfaceBindingBuilder<
    struct ScriptModuleMinecraft::ScriptActorDataDrivenTriggerEventSignalOptions>
bindActorDataEventOptionsInterface(); // NOLINT
/**
 * @symbol
 * ?bindActorDataEventOptions_V010\@ScriptSignals\@ScriptModuleMinecraft\@\@YA?AV?$ClassBindingBuilder\@UScriptActorDataDrivenTriggerEventSignalOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorDataDrivenTriggerEventSignalOptions>
bindActorDataEventOptions_V010(); // NOLINT
/**
 * @symbol
 * ?bindActorEventOptionsInterface\@ScriptSignals\@ScriptModuleMinecraft\@\@YA?AV?$InterfaceBindingBuilder\@UScriptActorEventSignalOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptActorEventSignalOptions>
bindActorEventOptionsInterface(); // NOLINT
/**
 * @symbol
 * ?bindActorEventOptions_V010\@ScriptSignals\@ScriptModuleMinecraft\@\@YA?AV?$ClassBindingBuilder\@UScriptActorEventSignalOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorEventSignalOptions>
bindActorEventOptions_V010(); // NOLINT
/**
 * @symbol ?bindSignalsUtils\@ScriptSignals\@ScriptModuleMinecraft\@\@YAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
 */
MCAPI void bindSignalsUtils(class Scripting::ModuleBindingBuilder&); // NOLINT

}; // namespace ScriptModuleMinecraft::ScriptSignals
