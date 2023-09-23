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

struct ScriptItemStartUseAfterEvent : public ::ScriptModuleMinecraft::ScriptItemChargeAfterEvent {
public:
    // prevent constructor by default
    ScriptItemStartUseAfterEvent& operator=(ScriptItemStartUseAfterEvent const&);
    ScriptItemStartUseAfterEvent(ScriptItemStartUseAfterEvent const&);
    ScriptItemStartUseAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptItemStartUseAfterEvent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptItemStartUseAfterEvent();

    // symbol:
    // ?bind@ScriptItemStartUseAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemStartUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>
    bind();

    // symbol:
    // ?bindV010@ScriptItemStartUseAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemStartUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
