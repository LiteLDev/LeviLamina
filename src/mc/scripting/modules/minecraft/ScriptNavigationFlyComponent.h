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

class ScriptNavigationFlyComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {
public:
    // prevent constructor by default
    ScriptNavigationFlyComponent& operator=(ScriptNavigationFlyComponent const&) = delete;
    ScriptNavigationFlyComponent(ScriptNavigationFlyComponent const&)            = delete;
    ScriptNavigationFlyComponent()                                               = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptNavigationFlyComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptNavigationFlyComponent();

    // symbol:
    // ?bind@ScriptNavigationFlyComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptNavigationFlyComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationFlyComponent> bind();

    // symbol: ?ComponentId@ScriptNavigationFlyComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
