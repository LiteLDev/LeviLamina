#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerGameModeChangeBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerGameModeChangeBeforeEvent& operator=(ScriptPlayerGameModeChangeBeforeEvent const&);
    ScriptPlayerGameModeChangeBeforeEvent(ScriptPlayerGameModeChangeBeforeEvent const&);
    ScriptPlayerGameModeChangeBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptPlayerGameModeChangeBeforeEvent@ScriptModuleMinecraft@@QEAA@AEBVPlayer@@W4GameType@@1AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptPlayerGameModeChangeBeforeEvent(class Player const&, ::GameType, ::GameType, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?bind@ScriptPlayerGameModeChangeBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerGameModeChangeBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
