#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

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
    MCAPI
    ScriptActorAddEffectBeforeEvent(struct ActorAddEffectEvent&, class Actor const&, class Scripting::WeakLifetimeScope const&);

    MCAPI void copyTo(struct ActorAddEffectEvent&);

    MCAPI ~ScriptActorAddEffectBeforeEvent();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
