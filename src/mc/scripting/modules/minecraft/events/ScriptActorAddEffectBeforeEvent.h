#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace Scripting { class WeakLifetimeScope; }
struct ActorAddEffectEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectBeforeEvent {
public:
    // prevent constructor by default
    ScriptActorAddEffectBeforeEvent& operator=(ScriptActorAddEffectBeforeEvent const&);
    ScriptActorAddEffectBeforeEvent(ScriptActorAddEffectBeforeEvent const&);
    ScriptActorAddEffectBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptActorAddEffectBeforeEvent(
        struct ActorAddEffectEvent&               actorEffectAddedEvent,
        class Actor const&                        actor,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI void copyTo(struct ActorAddEffectEvent& addEffectEvent);

    MCAPI ~ScriptActorAddEffectBeforeEvent();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
