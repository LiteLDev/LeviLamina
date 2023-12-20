#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStrengthComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    ScriptStrengthComponent& operator=(ScriptStrengthComponent const&);
    ScriptStrengthComponent(ScriptStrengthComponent const&);
    ScriptStrengthComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptStrengthComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptStrengthComponent();

    // symbol: ?getMax@ScriptStrengthComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getMax() const;

    // symbol: ?getValue@ScriptStrengthComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getValue() const;

    // symbol:
    // ?bind@ScriptStrengthComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptStrengthComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptStrengthComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptStrengthComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
