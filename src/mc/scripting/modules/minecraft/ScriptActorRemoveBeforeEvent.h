#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorRemoveBeforeEvent {
public:
    // prevent constructor by default
    ScriptActorRemoveBeforeEvent& operator=(ScriptActorRemoveBeforeEvent const&);
    ScriptActorRemoveBeforeEvent(ScriptActorRemoveBeforeEvent const&);
    ScriptActorRemoveBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptActorRemoveBeforeEvent@ScriptModuleMinecraft@@QEAA@PEBVActor@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptActorRemoveBeforeEvent(class Actor const*, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?bind@ScriptActorRemoveBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptActorRemoveBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorRemoveBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
