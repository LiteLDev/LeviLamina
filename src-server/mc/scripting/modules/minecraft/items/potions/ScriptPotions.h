#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Potion;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPotionDeliveryType; }
namespace ScriptModuleMinecraft { class ScriptPotionEffectType; }
namespace ScriptModuleMinecraft { struct ScriptInvalidPotionDeliveryTypeError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidPotionEffectTypeError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPotions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk899fd5;
    ::ll::UntypedStorage<8, 64> mUnke4d8fb;
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

    MCNAPI ::ScriptModuleMinecraft::ScriptPotions& operator=(::ScriptModuleMinecraft::ScriptPotions&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotions>
    _getHandle(::Scripting::WeakLifetimeScope& scope);

    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionDeliveryType>>
    getDeliveryTypes(::Scripting::WeakLifetimeScope scope);

    MCNAPI static ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>
    getEffectTypes(::Scripting::WeakLifetimeScope scope);

    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionDeliveryType>
    getOrCreatePotionDeliveryType(::Potion::PotionType potionType, ::Scripting::WeakLifetimeScope scope);

    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>
    getOrCreatePotionEffectType(
        ::gsl::not_null<::std::shared_ptr<::Potion const>> potion,
        ::Scripting::WeakLifetimeScope                     scope
    );

    MCNAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionDeliveryType>>
    getPotionDeliveryType(::Scripting::WeakLifetimeScope scope, ::std::string const& potionTypeId);

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>
    getPotionEffectType(::Scripting::WeakLifetimeScope scope, ::std::string const& potionTypeId);

    MCNAPI static ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>,
        ::ScriptModuleMinecraft::ScriptInvalidPotionDeliveryTypeError,
        ::ScriptModuleMinecraft::ScriptInvalidPotionEffectTypeError,
        ::Scripting::EngineError>
    resolve(
        ::Scripting::WeakLifetimeScope scope,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>& potionEffect,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionDeliveryType>>& deliveryType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPotions const&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPotions&&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
