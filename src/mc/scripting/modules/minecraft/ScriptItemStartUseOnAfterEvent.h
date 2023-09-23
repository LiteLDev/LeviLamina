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
    ScriptItemStartUseOnAfterEvent(ScriptItemStartUseOnAfterEvent const&);
    ScriptItemStartUseOnAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptItemStartUseOnAfterEvent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptItemStartUseOnAfterEvent();

    // symbol:
    // ?bind@ScriptItemStartUseOnAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemStartUseOnAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
