#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptStructurePlaceOptions {
public:
    // prevent constructor by default
    ScriptStructurePlaceOptions();

public:
    // NOLINTBEGIN
    MCAPI ScriptStructurePlaceOptions(struct ScriptModuleMinecraft::ScriptStructurePlaceOptions&&);

    MCAPI ScriptStructurePlaceOptions(struct ScriptModuleMinecraft::ScriptStructurePlaceOptions const&);

    MCAPI struct ScriptModuleMinecraft::ScriptStructurePlaceOptions&
    operator=(struct ScriptModuleMinecraft::ScriptStructurePlaceOptions&&);

    MCAPI struct ScriptModuleMinecraft::ScriptStructurePlaceOptions&
    operator=(struct ScriptModuleMinecraft::ScriptStructurePlaceOptions const&);

    MCAPI ~ScriptStructurePlaceOptions();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptStructurePlaceOptions>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptStructurePlaceOptions const&);

    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptStructurePlaceOptions&&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
