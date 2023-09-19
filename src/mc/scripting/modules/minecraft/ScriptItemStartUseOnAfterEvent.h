#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptItemEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemEvent; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemStartUseOnAfterEvent : public ::ScriptModuleMinecraft::ScriptItemEvent {
public:
    // prevent constructor by default
    ScriptItemStartUseOnAfterEvent& operator=(ScriptItemStartUseOnAfterEvent const&);
    ScriptItemStartUseOnAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptItemStartUseOnAfterEvent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptItemStartUseOnAfterEvent();

    // symbol: ??0ScriptItemStartUseOnAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptItemStartUseOnAfterEvent(struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent const&);

    // symbol: ??4ScriptItemStartUseOnAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent&&);

    // symbol:
    // ?bind@ScriptItemStartUseOnAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemStartUseOnAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
