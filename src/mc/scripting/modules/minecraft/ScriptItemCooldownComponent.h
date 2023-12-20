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
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCooldownComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // prevent constructor by default
    ScriptItemCooldownComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptItemCooldownComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptItemCooldownComponent();

    // symbol: ??0ScriptItemCooldownComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptItemCooldownComponent(class ScriptModuleMinecraft::ScriptItemCooldownComponent const&);

    // symbol:
    // ?getCooldownCategory@ScriptItemCooldownComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getCooldownCategory();

    // symbol: ?getCooldownTicks@ScriptItemCooldownComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getCooldownTicks();

    // symbol: ??4ScriptItemCooldownComponent@ScriptModuleMinecraft@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptItemCooldownComponent&
    operator=(class ScriptModuleMinecraft::ScriptItemCooldownComponent const&);

    // symbol:
    // ?startCooldown@ScriptItemCooldownComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVScriptPlayer@2@@Z
    MCAPI class Scripting::Result<void> startCooldown(class ScriptModuleMinecraft::ScriptPlayer&);

    // symbol:
    // ?bind@ScriptItemCooldownComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptItemCooldownComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemCooldownComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
