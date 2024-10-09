#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentLevelOutOfBoundsError {
public:
    // prevent constructor by default
    ScriptItemEnchantmentLevelOutOfBoundsError& operator=(ScriptItemEnchantmentLevelOutOfBoundsError const&);
    ScriptItemEnchantmentLevelOutOfBoundsError(ScriptItemEnchantmentLevelOutOfBoundsError const&);
    ScriptItemEnchantmentLevelOutOfBoundsError();

public:
    // NOLINTBEGIN
    MCAPI ScriptItemEnchantmentLevelOutOfBoundsError(
        std::string const& details,
        std::string const& typeName,
        int                level,
        int                maxLevel
    );

    MCAPI static class Scripting::ErrorBindingBuilder<
        struct ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
