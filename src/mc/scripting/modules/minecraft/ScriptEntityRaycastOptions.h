#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEntityRaycastOptions {
public:
    // prevent constructor by default
    ScriptEntityRaycastOptions& operator=(ScriptEntityRaycastOptions const&);
    ScriptEntityRaycastOptions(ScriptEntityRaycastOptions const&);
    ScriptEntityRaycastOptions();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptEntityRaycastOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptEntityRaycastOptions&
    operator=(struct ScriptModuleMinecraft::ScriptEntityRaycastOptions&&);

    // symbol: ??1ScriptEntityRaycastOptions@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptEntityRaycastOptions();

    // symbol:
    // ?bind@ScriptEntityRaycastOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptEntityRaycastOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions>
    bind();

    // symbol:
    // ?bindV010@ScriptEntityRaycastOptions@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptEntityRaycastOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
