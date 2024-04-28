#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
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
    // vIndex: 0, symbol: __gen_??1ScriptEquippableComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptEquippableComponent() = default;

    // vIndex: 1, symbol: ?_isValid@ScriptEquippableComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ?getEquipment@ScriptEquippableComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@W4EquipmentSlot@Legacy@Puv@@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
        getEquipment(::Puv::Legacy::EquipmentSlot);

    // symbol:
    // ?getEquipmentSlot@ScriptEquippableComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptContainerSlot@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@W4EquipmentSlot@Legacy@Puv@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerSlot>>
        getEquipmentSlot(::Puv::Legacy::EquipmentSlot);

    // symbol:
    // ?setEquipment@ScriptEquippableComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@W4EquipmentSlot@Legacy@Puv@@AEBV?$optional@VScriptItemStack@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<bool>
    setEquipment(::Puv::Legacy::EquipmentSlot, std::optional<class ScriptModuleMinecraft::ScriptItemStack> const&);

    // symbol:
    // ?bind@ScriptEquippableComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptEquippableComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptEquippableComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptEquippableComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
