#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptItemChargeAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemChargeAfterEvent; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCompleteUseAfterEvent : public ::ScriptModuleMinecraft::ScriptItemChargeAfterEvent {
public:
    // prevent constructor by default
    ScriptItemCompleteUseAfterEvent& operator=(ScriptItemCompleteUseAfterEvent const&) = delete;
    ScriptItemCompleteUseAfterEvent()                                                  = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptItemCompleteUseAfterEvent();

    // symbol: ??0ScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptItemCompleteUseAfterEvent(struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent const&);

    // symbol: ??4ScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent&&);

    // symbol:
    // ?bind@ScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>
    bind();

    // symbol:
    // ?bindV010@ScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
