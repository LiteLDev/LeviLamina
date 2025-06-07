#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace ScriptModuleMinecraft { class ScriptPotionEffectType; }
namespace ScriptModuleMinecraft { class ScriptPotionLiquidType; }
namespace ScriptModuleMinecraft { class ScriptPotionModifierType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
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
    // prevent constructor by default
    ScriptPotions& operator=(ScriptPotions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPotions();

    MCNAPI ScriptPotions(::ScriptModuleMinecraft::ScriptPotions const&);

    MCNAPI ScriptPotions(::ScriptModuleMinecraft::ScriptPotions&&);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>
    _getPotionEffectType(::Scripting::WeakLifetimeScope scope, ::Potion::PotionVariant potionVariant);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionLiquidType>>
    _getPotionLiquidType(::Scripting::WeakLifetimeScope scope, ::Potion::PotionType potionType);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionModifierType>>
    _getPotionModifierType(::Scripting::WeakLifetimeScope scope, int potionId);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionModifierType>>
    _getPotionModifierType(::Scripting::WeakLifetimeScope scope, ::std::string const& potionModifierId);

    MCNAPI ::ScriptModuleMinecraft::ScriptPotions& operator=(::ScriptModuleMinecraft::ScriptPotions&&);

    MCNAPI ~ScriptPotions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotions>
    _getHandle(::Scripting::WeakLifetimeScope& scope);

    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>
    getPotionEffectType(::Scripting::WeakLifetimeScope scope, ::std::string const& potionTypeId);

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>
    getPotionEffectType(::Scripting::WeakLifetimeScope scope, ::Potion::PotionVariant potionVariant);

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionLiquidType>>
    getPotionLiquidType(::Scripting::WeakLifetimeScope scope, ::Potion::PotionType potionType);

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionLiquidType>>
    getPotionLiquidType(::Scripting::WeakLifetimeScope scope, ::std::string const& potionTypeId);

    MCNAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionModifierType>>
    getPotionModifierType(::Scripting::WeakLifetimeScope scope, int potionId);

    MCNAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionModifierType>>
    getPotionModifierType(::Scripting::WeakLifetimeScope scope, ::std::string const& potionModifierId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPotions const&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPotions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
