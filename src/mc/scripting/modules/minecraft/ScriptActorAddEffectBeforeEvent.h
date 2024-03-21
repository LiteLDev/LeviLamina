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
    // symbol:
    // ??0ScriptActorAddEffectBeforeEvent@ScriptModuleMinecraft@@QEAA@AEAUActorAddEffectEvent@@AEBVActor@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptActorAddEffectBeforeEvent(struct ActorAddEffectEvent&, class Actor const&, class Scripting::WeakLifetimeScope const&);

    // symbol: ?copyTo@ScriptActorAddEffectBeforeEvent@ScriptModuleMinecraft@@QEAAXAEAUActorAddEffectEvent@@@Z
    MCAPI void copyTo(struct ActorAddEffectEvent&);

    // symbol: ??1ScriptActorAddEffectBeforeEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorAddEffectBeforeEvent();

    // symbol:
    // ?bind@ScriptActorAddEffectBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptActorAddEffectBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
