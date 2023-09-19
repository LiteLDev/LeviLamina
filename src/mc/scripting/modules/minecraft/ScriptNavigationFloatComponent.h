#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/NavigationScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class NavigationScriptActorComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptNavigationFloatComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {
public:
    // prevent constructor by default
    ScriptNavigationFloatComponent& operator=(ScriptNavigationFloatComponent const&);
    ScriptNavigationFloatComponent(ScriptNavigationFloatComponent const&);
    ScriptNavigationFloatComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptNavigationFloatComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptNavigationFloatComponent();

    // symbol:
    // ?bind@ScriptNavigationFloatComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptNavigationFloatComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationFloatComponent>
    bind();

    // symbol: ?ComponentId@ScriptNavigationFloatComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
