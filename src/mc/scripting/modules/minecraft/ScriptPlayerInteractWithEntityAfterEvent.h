#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPlayerInteractWithEntityAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptPlayerInteractWithEntityAfterEvent(struct ScriptModuleMinecraft::
                                                       ScriptPlayerInteractWithEntityAfterEvent const&);

    // symbol:
    // ??0ScriptPlayerInteractWithEntityAfterEvent@ScriptModuleMinecraft@@QEAA@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@V?$optional@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@std@@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@3@@Z
    MCAPI
    ScriptPlayerInteractWithEntityAfterEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>, std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>);

    // symbol: ??4ScriptPlayerInteractWithEntityAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&&);

    // symbol: ??4ScriptPlayerInteractWithEntityAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent const&);

    // symbol:
    // ?bind@ScriptPlayerInteractWithEntityAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerInteractWithEntityAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
