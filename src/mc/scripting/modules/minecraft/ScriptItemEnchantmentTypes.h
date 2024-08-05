#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentTypes {
public:
    // prevent constructor by default
    ScriptItemEnchantmentTypes& operator=(ScriptItemEnchantmentTypes const&);
    ScriptItemEnchantmentTypes(ScriptItemEnchantmentTypes const&);

public:
    // NOLINTBEGIN
    MCAPI ScriptItemEnchantmentTypes();

    MCAPI
    std::optional<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemEnchantmentType>>
    get(class Scripting::WeakLifetimeScope&, std::string const&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentTypes> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _generateAllEnchantmentTypeHandles(class Scripting::WeakLifetimeScope&);

    MCAPI void _generateRemainingEnchantmentTypeHandles(class Scripting::WeakLifetimeScope&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
