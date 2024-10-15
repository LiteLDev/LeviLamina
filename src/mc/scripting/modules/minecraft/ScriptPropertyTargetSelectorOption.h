#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPropertyTargetSelectorOption {
public:
    // prevent constructor by default
    ScriptPropertyTargetSelectorOption();

public:
    // NOLINTBEGIN
    MCAPI ScriptPropertyTargetSelectorOption(struct ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption const&);

    MCAPI struct ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption&
    operator=(struct ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption&&);

    MCAPI struct ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption&
    operator=(struct ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption const&);

    MCAPI static class Scripting::InterfaceBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
