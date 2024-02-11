#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/AttributeScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class AttributeScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealthComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {
public:
    // prevent constructor by default
    ScriptHealthComponent& operator=(ScriptHealthComponent const&);
    ScriptHealthComponent(ScriptHealthComponent const&);
    ScriptHealthComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptHealthComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptHealthComponent() = default;

    // vIndex: 3, symbol:
    // ?setCurrent@ScriptHealthComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@AEBM@Z
    virtual class Scripting::Result<bool> setCurrent(float const&) const;

    // vIndex: 7, symbol:
    // ?resetToMinValue@ScriptHealthComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@X$$V@Scripting@@XZ
    virtual class Scripting::Result<void> resetToMinValue() const;

    // vIndex: 8, symbol:
    // ?resetToMaxValue@ScriptHealthComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@X$$V@Scripting@@XZ
    virtual class Scripting::Result<void> resetToMaxValue() const;

    // vIndex: 9, symbol:
    // ?resetToDefaultValue@ScriptHealthComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@X$$V@Scripting@@XZ
    virtual class Scripting::Result<void> resetToDefaultValue() const;

    // symbol:
    // ?bind@ScriptHealthComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptHealthComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptHealthComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptHealthComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?notifyHealthChange@ScriptHealthComponent@ScriptModuleMinecraft@@AEBAXMM@Z
    MCAPI void notifyHealthChange(float, float) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
