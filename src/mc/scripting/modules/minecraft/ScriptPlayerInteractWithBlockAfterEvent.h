#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPlayerInteractWithBlockAfterEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI
    ScriptPlayerInteractWithBlockAfterEvent(struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&&);

    // symbol: ??0ScriptPlayerInteractWithBlockAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptPlayerInteractWithBlockAfterEvent(struct ScriptModuleMinecraft::
                                                      ScriptPlayerInteractWithBlockAfterEvent const&);

    // symbol:
    // ??0ScriptPlayerInteractWithBlockAfterEvent@ScriptModuleMinecraft@@QEAA@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@V?$optional@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@std@@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@3@W4ScriptFacing@1@VVec3@@@Z
    MCAPI ScriptPlayerInteractWithBlockAfterEvent(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>,
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>,
        ::ScriptModuleMinecraft::ScriptFacing,
        class Vec3
    );

    // symbol: ??4ScriptPlayerInteractWithBlockAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&&);

    // symbol: ??4ScriptPlayerInteractWithBlockAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent const&);

    // symbol:
    // ?bind@ScriptPlayerInteractWithBlockAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerInteractWithBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
