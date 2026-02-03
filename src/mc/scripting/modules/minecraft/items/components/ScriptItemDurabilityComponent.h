#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
struct FloatRange;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptInvalidItemStackError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct NumberRange; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemDurabilityComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // prevent constructor by default
    ScriptItemDurabilityComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemDurabilityComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemDurabilityComponent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );

    MCAPI ::Scripting::Result_deprecated<int> getCurrentDamage();

    MCAPI ::Scripting::Result_deprecated<int> getDamageChance(int unbreaking);

    MCAPI ::Scripting::Result_deprecated<::Scripting::NumberRange> getDamageChanceRange();

    MCAPI ::Scripting::Result_deprecated<::FloatRange> getDamageRange_V010();

    MCAPI ::Scripting::Result_deprecated<int> getMaxDurability();

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidItemStackError> getUnbreakable();

    MCAPI ::Scripting::Result_deprecated<void> setCurrentDamage(int damage);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
    setUnbreakable(bool isUnbreakable);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
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
