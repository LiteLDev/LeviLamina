#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Scripting { class WeakLifetimeScope; }
struct PlayerInteractWithBlockBeforeEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockBeforeEvent& operator=(ScriptPlayerInteractWithBlockBeforeEvent const&);
    ScriptPlayerInteractWithBlockBeforeEvent(ScriptPlayerInteractWithBlockBeforeEvent const&);
    ScriptPlayerInteractWithBlockBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI
    ScriptPlayerInteractWithBlockBeforeEvent(struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent&&);

    // symbol:
    // ??0ScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@QEAA@AEAVPlayer@@AEBUPlayerInteractWithBlockBeforeEvent@@AEAVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptPlayerInteractWithBlockBeforeEvent(class Player&, struct PlayerInteractWithBlockBeforeEvent const&, class Scripting::WeakLifetimeScope&);

    // symbol:
    // ?bind@ScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
