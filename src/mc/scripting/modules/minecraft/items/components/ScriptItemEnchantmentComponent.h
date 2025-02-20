#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentInstance; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentLevelOutOfBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentType; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentTypeNotCompatibleError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentUnknownIdError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemEnchantmentComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnke5c773;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemEnchantmentComponent& operator=(ScriptItemEnchantmentComponent const&);
    ScriptItemEnchantmentComponent(ScriptItemEnchantmentComponent const&);
    ScriptItemEnchantmentComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemEnchantmentComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError,
        ::Scripting::Error>
    addEnchantment(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance const& inst);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError,
        ::Scripting::Error>
    addEnchantments(::std::vector<::ScriptModuleMinecraft::ScriptItemEnchantmentInstance> const& enchants);

    MCAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError>
    canAddEnchantment(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance const& inst);

    MCAPI ::Scripting::Result<
        ::std::optional<::ScriptModuleMinecraft::ScriptItemEnchantmentInstance>,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError>
    getEnchantment(
        ::Scripting::WeakLifetimeScope& scope,
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>,
            ::std::string> enchantmentTypeOrId
    );

    MCAPI ::Scripting::Result_deprecated<::std::vector<::ScriptModuleMinecraft::ScriptItemEnchantmentInstance>>
    getEnchantments(::Scripting::WeakLifetimeScope& scope) const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::Enchant::Slot>> getSlots() const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError>
    hasEnchantment(::std::variant<
                   ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>,
                   ::std::string> enchantmentTypeOrId) const;

    MCAPI ::Scripting::Result<void> removeAllEnchantments();

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError, ::Scripting::Error>
    removeEnchantment(::std::variant<
                      ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>,
                      ::std::string> enchantmentTypeOrId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemEnchantmentComponent>
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
