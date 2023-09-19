#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptStrengthComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptStrengthComponent();

    // symbol: ?getMax@ScriptStrengthComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@H@Scripting@@XZ
    MCAPI class Scripting::Result<int> getMax() const;

    // symbol: ?getValue@ScriptStrengthComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@H@Scripting@@XZ
    MCAPI class Scripting::Result<int> getValue() const;

    // symbol:
    // ?bind@ScriptStrengthComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptStrengthComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptStrengthComponent> bind();

    // symbol: ?ComponentId@ScriptStrengthComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
