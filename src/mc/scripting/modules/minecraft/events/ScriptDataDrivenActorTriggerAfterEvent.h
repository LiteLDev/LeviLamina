#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

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
    MCAPI
    ScriptDataDrivenActorTriggerAfterEvent(struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent&&);

    MCAPI ScriptDataDrivenActorTriggerAfterEvent(
        struct ActorDefinitionEndedEvent const&   actorDefinitionEvent,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI std::vector<struct ActorDefinitionModifier> getModifiers() const;

    MCAPI struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent&&);

    MCAPI ~ScriptDataDrivenActorTriggerAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>
    bind();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
