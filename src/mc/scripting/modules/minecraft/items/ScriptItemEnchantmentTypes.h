#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

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
    get(class Scripting::WeakLifetimeScope& scope, std::string const& enchantmentId);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentTypes> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _generateAllEnchantmentTypeHandles(class Scripting::WeakLifetimeScope& scope);

    MCAPI void _generateRemainingEnchantmentTypeHandles(class Scripting::WeakLifetimeScope& scope);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
