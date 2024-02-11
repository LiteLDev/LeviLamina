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
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptFoodComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // prevent constructor by default
    ScriptFoodComponent& operator=(ScriptFoodComponent const&);
    ScriptFoodComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptFoodComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptFoodComponent() = default;

    // symbol: ??0ScriptFoodComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptFoodComponent(class ScriptModuleMinecraft::ScriptFoodComponent const&);

    // symbol: ?getCanAlwaysEat@ScriptFoodComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getCanAlwaysEat();

    // symbol: ?getNutrition@ScriptFoodComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getNutrition();

    // symbol: ?getSaturationModifier@ScriptFoodComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@M$$V@Scripting@@XZ
    MCAPI class Scripting::Result<float> getSaturationModifier();

    // symbol:
    // ?getUsingConvertsToItem@ScriptFoodComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getUsingConvertsToItem();

    // symbol:
    // ?bind@ScriptFoodComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptFoodComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptFoodComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
