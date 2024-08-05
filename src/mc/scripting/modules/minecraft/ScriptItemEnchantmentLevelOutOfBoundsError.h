#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentLevelOutOfBoundsError {
public:
    // prevent constructor by default
    ScriptItemEnchantmentLevelOutOfBoundsError& operator=(ScriptItemEnchantmentLevelOutOfBoundsError const&);
    ScriptItemEnchantmentLevelOutOfBoundsError(ScriptItemEnchantmentLevelOutOfBoundsError const&);
    ScriptItemEnchantmentLevelOutOfBoundsError();

public:
    // NOLINTBEGIN
    MCAPI ScriptItemEnchantmentLevelOutOfBoundsError(std::string const&, std::string const&, int, int);

    MCAPI static class Scripting::ErrorBindingBuilder<
        struct ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
