#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBiomeSearchOptions {
public:
    // prevent constructor by default
    ScriptBiomeSearchOptions(ScriptBiomeSearchOptions const&);
    ScriptBiomeSearchOptions();

public:
    // NOLINTBEGIN
    // symbol: ?getBoundingSize@ScriptBiomeSearchOptions@ScriptModuleMinecraft@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getBoundingSize() const;

    // symbol: ??4ScriptBiomeSearchOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBiomeSearchOptions&
    operator=(struct ScriptModuleMinecraft::ScriptBiomeSearchOptions&&);

    // symbol: ??4ScriptBiomeSearchOptions@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBiomeSearchOptions&
    operator=(struct ScriptModuleMinecraft::ScriptBiomeSearchOptions const&);

    // symbol: ?validate@ScriptBiomeSearchOptions@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> validate() const;

    // symbol:
    // ?bind@ScriptBiomeSearchOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptBiomeSearchOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptBiomeSearchOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
