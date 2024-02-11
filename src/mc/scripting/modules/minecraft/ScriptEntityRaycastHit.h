#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntityRaycastHit {
public:
    // prevent constructor by default
    ScriptEntityRaycastHit& operator=(ScriptEntityRaycastHit const&);
    ScriptEntityRaycastHit(ScriptEntityRaycastHit const&);
    ScriptEntityRaycastHit();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptEntityRaycastHit@ScriptModuleMinecraft@@QEAA@AEBV?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@M@Z
    MCAPI ScriptEntityRaycastHit(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const&,
        float
    );

    // symbol: ??1ScriptEntityRaycastHit@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptEntityRaycastHit();

    // symbol:
    // ?bind@ScriptEntityRaycastHit@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VScriptEntityRaycastHit@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptEntityRaycastHit> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
