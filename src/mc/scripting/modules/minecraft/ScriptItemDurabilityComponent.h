#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptItemComponent.h"

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
    // vIndex: 0, symbol: __gen_??1ScriptItemDurabilityComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptItemDurabilityComponent() = default;

    // symbol: ??0ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptItemDurabilityComponent(class ScriptModuleMinecraft::ScriptItemDurabilityComponent const&);

    // symbol: ?getCurrentDamage@ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getCurrentDamage();

    // symbol: ?getDamageChance@ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@H$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<int> getDamageChance(int unbreaking);

    // symbol:
    // ?getDamageChanceRange@ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@UNumberRange@Scripting@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<struct Scripting::NumberRange> getDamageChanceRange();

    // symbol:
    // ?getDamageRange_V010@ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@UFloatRange@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<struct FloatRange> getDamageRange_V010();

    // symbol: ?getMaxDurability@ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getMaxDurability();

    // symbol:
    // ?setCurrentDamage@ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<void> setCurrentDamage(int damage);

    // symbol:
    // ?bind@ScriptItemDurabilityComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptItemDurabilityComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemDurabilityComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
