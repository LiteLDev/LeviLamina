#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
struct FloatRange;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemDurabilityComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // prevent constructor by default
    ScriptItemDurabilityComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptItemDurabilityComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptItemDurabilityComponent();

    // symbol: ??0ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptItemDurabilityComponent(class ScriptModuleMinecraft::ScriptItemDurabilityComponent const&);

    // symbol: ?getCurrentDamage@ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getCurrentDamage();

    // symbol: ?getDamageChance@ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@H$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<int> getDamageChance(int);

    // symbol:
    // ?getDamageRange@ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@UFloatRange@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<struct FloatRange> getDamageRange();

    // symbol: ?getMaxDurability@ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getMaxDurability();

    // symbol: ??4ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptItemDurabilityComponent&
    operator=(class ScriptModuleMinecraft::ScriptItemDurabilityComponent const&);

    // symbol:
    // ?setCurrentDamage@ScriptItemDurabilityComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<void> setCurrentDamage(int);

    // symbol:
    // ?bind@ScriptItemDurabilityComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptItemDurabilityComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemDurabilityComponent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
