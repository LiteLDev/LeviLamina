#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemEnchantmentType();

    MCAPI ::std::string getName() const;

    MCAPI ::ScriptModuleMinecraft::ScriptItemEnchantmentType&
    operator=(::ScriptModuleMinecraft::ScriptItemEnchantmentType&&);

    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptItemEnchantmentType const& other) const;

    MCAPI ~ScriptItemEnchantmentType();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemEnchantmentType> bind();

    MCAPI static ::Enchant::Type
    getEnchantType(::std::variant<
                   ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>,
                   ::std::string> const& enchantmentTypeOrId);

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::Enchant::Type enchantmentType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
