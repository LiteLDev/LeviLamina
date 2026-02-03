#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentTypes {
public:
    // ScriptItemEnchantmentTypes inner types define
    using EnchantmentTypesMap = ::std::unordered_map<
        ::Enchant::Type,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::Enchant::Type,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>>>
        mEnchantments;
    // NOLINTEND

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
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
