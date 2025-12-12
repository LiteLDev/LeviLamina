#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPotionDeliveryType; }
namespace ScriptModuleMinecraft { class ScriptPotionEffectType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemPotionComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // prevent constructor by default
    ScriptItemPotionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemPotionComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemPotionComponent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemStackHandle,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionDeliveryType>,
        ::Scripting::EngineError,
        ::Scripting::Error>
    _getPotionDeliveryType() const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>,
        ::Scripting::EngineError,
        ::Scripting::Error>
    _getPotionEffectType() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    MCNAPI static ::std::string const& getTypeName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemStackHandle,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
