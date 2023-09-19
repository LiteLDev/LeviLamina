#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
struct BeforeWatchdogTerminateEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWatchdogTerminateBeforeEvent {
public:
    // prevent constructor by default
    ScriptWatchdogTerminateBeforeEvent& operator=(ScriptWatchdogTerminateBeforeEvent const&);
    ScriptWatchdogTerminateBeforeEvent(ScriptWatchdogTerminateBeforeEvent const&);
    ScriptWatchdogTerminateBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptWatchdogTerminateBeforeEvent@ScriptModuleMinecraft@@QEAA@AEBUBeforeWatchdogTerminateEvent@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptWatchdogTerminateBeforeEvent(struct BeforeWatchdogTerminateEvent const&, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?bind@ScriptWatchdogTerminateBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptWatchdogTerminateBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptWatchdogTerminateBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
