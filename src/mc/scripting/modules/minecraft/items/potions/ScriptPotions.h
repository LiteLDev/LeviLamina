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
    // ScriptPotions inner types define
    using Key = ::HashedString;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::Potion::PotionType,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionDeliveryType>>>
        mPotionDeliveryTypeHandles;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>>
        mPotionEffectTypeHandles;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPotions& operator=(ScriptPotions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPotions();

    MCAPI ScriptPotions(::ScriptModuleMinecraft::ScriptPotions&&);

    MCAPI ScriptPotions(::ScriptModuleMinecraft::ScriptPotions const&);

    MCAPI ::ScriptModuleMinecraft::ScriptPotions& operator=(::ScriptModuleMinecraft::ScriptPotions&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotions>
    _getHandle(::Scripting::WeakLifetimeScope& scope);

    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionDeliveryType>>
    getDeliveryTypes(::Scripting::WeakLifetimeScope scope);

    MCAPI static ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>
    getEffectTypes(::Scripting::WeakLifetimeScope scope);

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionDeliveryType>
    getOrCreatePotionDeliveryType(::Potion::PotionType potionType, ::Scripting::WeakLifetimeScope scope);

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>
    getOrCreatePotionEffectType(
        ::gsl::not_null<::std::shared_ptr<::Potion const>> potion,
        ::Scripting::WeakLifetimeScope                     scope
    );

    MCAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionDeliveryType>>
    getPotionDeliveryType(::Scripting::WeakLifetimeScope scope, ::std::string const& potionTypeId);

    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>
    getPotionEffectType(::Scripting::WeakLifetimeScope scope, ::std::string const& potionTypeId);

    MCAPI static ::Scripting::Result<
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
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPotions&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPotions const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
