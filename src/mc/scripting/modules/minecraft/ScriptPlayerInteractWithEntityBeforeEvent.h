#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
namespace Scripting { class WeakLifetimeScope; }
struct PlayerInteractWithEntityBeforeEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityBeforeEvent& operator=(ScriptPlayerInteractWithEntityBeforeEvent const&);
    ScriptPlayerInteractWithEntityBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPlayerInteractWithEntityBeforeEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptPlayerInteractWithEntityBeforeEvent(struct ScriptModuleMinecraft::
                                                        ScriptPlayerInteractWithEntityBeforeEvent const&);

    // symbol:
    // ??0ScriptPlayerInteractWithEntityBeforeEvent@ScriptModuleMinecraft@@QEAA@AEAVPlayer@@AEAVActor@@AEBUPlayerInteractWithEntityBeforeEvent@@AEAVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptPlayerInteractWithEntityBeforeEvent(class Player&, class Actor&, struct PlayerInteractWithEntityBeforeEvent const&, class Scripting::WeakLifetimeScope&);

    // symbol:
    // ?bind@ScriptPlayerInteractWithEntityBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerInteractWithEntityBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
