#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
struct ActorDefinitionEndedEvent;
struct ActorDefinitionModifier;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptDataDrivenActorTriggerAfterEvent {
public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerAfterEvent& operator=(ScriptDataDrivenActorTriggerAfterEvent const&);
    ScriptDataDrivenActorTriggerAfterEvent(ScriptDataDrivenActorTriggerAfterEvent const&);
    ScriptDataDrivenActorTriggerAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptDataDrivenActorTriggerAfterEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI
    ScriptDataDrivenActorTriggerAfterEvent(struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent&&);

    // symbol:
    // ??0ScriptDataDrivenActorTriggerAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUActorDefinitionEndedEvent@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptDataDrivenActorTriggerAfterEvent(
        struct ActorDefinitionEndedEvent const&   actorDefinitionEvent,
        class Scripting::WeakLifetimeScope const& scope
    );

    // symbol:
    // ?getModifiers@ScriptDataDrivenActorTriggerAfterEvent@ScriptModuleMinecraft@@QEBA?AV?$vector@UActorDefinitionModifier@@V?$allocator@UActorDefinitionModifier@@@std@@@std@@XZ
    MCAPI std::vector<struct ActorDefinitionModifier> getModifiers() const;

    // symbol: ??1ScriptDataDrivenActorTriggerAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptDataDrivenActorTriggerAfterEvent();

    // symbol:
    // ?bind@ScriptDataDrivenActorTriggerAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptDataDrivenActorTriggerAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>
    bind();

    // symbol:
    // ?bindV010@ScriptDataDrivenActorTriggerAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptDataDrivenActorTriggerAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
