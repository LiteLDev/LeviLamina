#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace Scripting { struct NumberRange; }
struct FloatRange;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemDurabilityComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // prevent constructor by default
    ScriptItemDurabilityComponent& operator=(ScriptItemDurabilityComponent const&);
    ScriptItemDurabilityComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemDurabilityComponent() = default;

    MCAPI ScriptItemDurabilityComponent(class ScriptModuleMinecraft::ScriptItemDurabilityComponent const&);

    MCAPI class Scripting::Result<int> getCurrentDamage();

    MCAPI class Scripting::Result<int> getDamageChance(int unbreaking);

    MCAPI class Scripting::Result<struct Scripting::NumberRange> getDamageChanceRange();

    MCAPI class Scripting::Result<struct FloatRange> getDamageRange_V010();

    MCAPI class Scripting::Result<int> getMaxDurability();

    MCAPI class Scripting::Result<void> setCurrentDamage(int damage);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemDurabilityComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptItemDurabilityComponent const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
