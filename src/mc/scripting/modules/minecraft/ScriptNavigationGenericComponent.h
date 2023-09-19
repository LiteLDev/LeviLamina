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

class ScriptNavigationGenericComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {
public:
    // prevent constructor by default
    ScriptNavigationGenericComponent& operator=(ScriptNavigationGenericComponent const&);
    ScriptNavigationGenericComponent(ScriptNavigationGenericComponent const&);
    ScriptNavigationGenericComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptNavigationGenericComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptNavigationGenericComponent();

    // symbol:
    // ?bind@ScriptNavigationGenericComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptNavigationGenericComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationGenericComponent>
    bind();

    // symbol: ?ComponentId@ScriptNavigationGenericComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
