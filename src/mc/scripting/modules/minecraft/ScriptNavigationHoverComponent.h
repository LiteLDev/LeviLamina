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

class ScriptNavigationHoverComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {
public:
    // prevent constructor by default
    ScriptNavigationHoverComponent& operator=(ScriptNavigationHoverComponent const&) = delete;
    ScriptNavigationHoverComponent(ScriptNavigationHoverComponent const&)            = delete;
    ScriptNavigationHoverComponent()                                                 = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptNavigationHoverComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptNavigationHoverComponent();

    // symbol:
    // ?bind@ScriptNavigationHoverComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptNavigationHoverComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationHoverComponent>
    bind();

    // symbol: ?ComponentId@ScriptNavigationHoverComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
