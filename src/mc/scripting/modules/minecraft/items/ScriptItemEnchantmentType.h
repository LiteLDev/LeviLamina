#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkbf350b;
    ::ll::UntypedStorage<1, 1>  mUnka2d387;
    ::ll::UntypedStorage<8, 32> mUnk2361be;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemEnchantmentType& operator=(ScriptItemEnchantmentType const&);
    ScriptItemEnchantmentType(ScriptItemEnchantmentType const&);
    ScriptItemEnchantmentType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getName() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptItemEnchantmentType&
    operator=(::ScriptModuleMinecraft::ScriptItemEnchantmentType&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemEnchantmentType> bind();

    MCNAPI static ::Enchant::Type
    getEnchantType(::std::variant<
                   ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>,
                   ::std::string> const& enchantmentTypeOrId);

    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::Enchant::Type enchantmentType);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
