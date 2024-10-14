#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class EnchantmentInstance;
class ItemEnchants;
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentLevelOutOfBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentTypeNotCompatibleError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentUnknownIdError; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentInstance {
public:
    // prevent constructor by default
    ScriptItemEnchantmentInstance& operator=(ScriptItemEnchantmentInstance const&);
    ScriptItemEnchantmentInstance(ScriptItemEnchantmentInstance const&);
    ScriptItemEnchantmentInstance();

public:
    // NOLINTBEGIN
    MCAPI std::variant<
        class EnchantmentInstance,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError>
    tryResolveInstance(class ItemEnchants& itemEnchants) const;

    MCAPI ~ScriptItemEnchantmentInstance();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
