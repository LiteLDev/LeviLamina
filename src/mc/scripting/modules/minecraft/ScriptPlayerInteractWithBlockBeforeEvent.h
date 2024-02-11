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

struct ScriptPlayerInteractWithBlockBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockBeforeEvent& operator=(ScriptPlayerInteractWithBlockBeforeEvent const&);
    ScriptPlayerInteractWithBlockBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI
    ScriptPlayerInteractWithBlockBeforeEvent(struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent&&);

    // symbol: ??0ScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptPlayerInteractWithBlockBeforeEvent(struct ScriptModuleMinecraft::
                                                       ScriptPlayerInteractWithBlockBeforeEvent const&);

    // symbol:
    // ??0ScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@QEAA@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@V?$optional@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@std@@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@3@W4ScriptFacing@1@VVec3@@@Z
    MCAPI ScriptPlayerInteractWithBlockBeforeEvent(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>,
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>,
        ::ScriptModuleMinecraft::ScriptFacing,
        class Vec3
    );

    // symbol: ??4ScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent&&);

    // symbol:
    // ?bind@ScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
