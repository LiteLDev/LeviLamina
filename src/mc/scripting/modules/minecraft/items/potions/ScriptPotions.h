#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace ScriptModuleMinecraft { class ScriptPotionEffectType; }
namespace ScriptModuleMinecraft { class ScriptPotionLiquidType; }
namespace ScriptModuleMinecraft { class ScriptPotionModifierType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPotions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb5302a;
    ::ll::UntypedStorage<8, 64> mUnk2bba6d;
    ::ll::UntypedStorage<8, 64> mUnke6c4c9;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPotions();

    MCAPI ScriptPotions(::ScriptModuleMinecraft::ScriptPotions const&);

    MCAPI ScriptPotions(::ScriptModuleMinecraft::ScriptPotions&&);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>
    _getPotionEffectType(::Scripting::WeakLifetimeScope scope, ::Potion::PotionVariant potionVariant);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionLiquidType>>
    _getPotionLiquidType(::Scripting::WeakLifetimeScope scope, ::Potion::PotionType potionType);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionModifierType>>
    _getPotionModifierType(::Scripting::WeakLifetimeScope scope, int potionId);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionModifierType>>
    _getPotionModifierType(::Scripting::WeakLifetimeScope scope, ::std::string const& potionModifierId);

    MCAPI ::ScriptModuleMinecraft::ScriptPotions& operator=(::ScriptModuleMinecraft::ScriptPotions&&);

    MCAPI ::ScriptModuleMinecraft::ScriptPotions& operator=(::ScriptModuleMinecraft::ScriptPotions const&);

    MCAPI ~ScriptPotions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotions>
    _getHandle(::Scripting::WeakLifetimeScope& scope);

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPotions> bind();

    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>
    getPotionEffectType(::Scripting::WeakLifetimeScope scope, ::std::string const& potionTypeId);

    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>
    getPotionEffectType(::Scripting::WeakLifetimeScope scope, ::Potion::PotionVariant potionVariant);

    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionLiquidType>>
    getPotionLiquidType(::Scripting::WeakLifetimeScope scope, ::std::string const& potionTypeId);

    MCAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionModifierType>>
    getPotionModifierType(::Scripting::WeakLifetimeScope scope, ::std::string const& potionModifierId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPotions const&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPotions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
