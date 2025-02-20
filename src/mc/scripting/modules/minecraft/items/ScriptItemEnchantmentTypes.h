#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentTypes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk419799;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemEnchantmentTypes& operator=(ScriptItemEnchantmentTypes const&);
    ScriptItemEnchantmentTypes(ScriptItemEnchantmentTypes const&);
    ScriptItemEnchantmentTypes();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _generateAllEnchantmentTypeHandles(::Scripting::WeakLifetimeScope& scope);

    MCAPI void _generateRemainingEnchantmentTypeHandles(::Scripting::WeakLifetimeScope& scope);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>>
    get(::Scripting::WeakLifetimeScope& scope, ::std::string const& enchantmentId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemEnchantmentTypes> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
