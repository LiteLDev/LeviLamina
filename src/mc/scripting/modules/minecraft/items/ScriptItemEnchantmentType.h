#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class Enchant;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentType {
public:
    // ScriptItemEnchantmentType inner types define
    using Key = ::std::string;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Enchant const*> mEnchant;
    ::ll::TypedStorage<1, 1, ::Enchant::Type>  mEnchantType;
    ::ll::TypedStorage<8, 32, ::std::string>   mName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemEnchantmentType& operator=(ScriptItemEnchantmentType const&);
    ScriptItemEnchantmentType(ScriptItemEnchantmentType const&);
    ScriptItemEnchantmentType();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::string getName() const;

    MCAPI ::ScriptModuleMinecraft::ScriptItemEnchantmentType&
    operator=(::ScriptModuleMinecraft::ScriptItemEnchantmentType&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Enchant::Type getEnchantType(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>,
            ::std::string> const& enchantmentTypeOrId
    );

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::Enchant::Type enchantmentType);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
