#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/EquipmentSlot.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEquippableComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    ScriptEquippableComponent& operator=(ScriptEquippableComponent const&);
    ScriptEquippableComponent(ScriptEquippableComponent const&);
    ScriptEquippableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptEquippableComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptEquippableComponent();

    // symbol:
    // ?getEquipment@ScriptEquippableComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@W4EquipmentSlot@@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
        getEquipment(::EquipmentSlot);

    // symbol:
    // ?getEquipmentSlot@ScriptEquippableComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptContainerSlot@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@W4EquipmentSlot@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerSlot>>
        getEquipmentSlot(::EquipmentSlot);

    // symbol:
    // ?setEquipment@ScriptEquippableComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@W4EquipmentSlot@@AEBV?$optional@VScriptItemStack@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<bool>
    setEquipment(::EquipmentSlot, std::optional<class ScriptModuleMinecraft::ScriptItemStack> const&);

    // symbol:
    // ?bind@ScriptEquippableComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptEquippableComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptEquippableComponent> bind();

    // symbol: ?ComponentId@ScriptEquippableComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
