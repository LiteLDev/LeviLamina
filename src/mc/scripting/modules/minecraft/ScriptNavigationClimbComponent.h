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

class ScriptNavigationClimbComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {
public:
    // prevent constructor by default
    ScriptNavigationClimbComponent& operator=(ScriptNavigationClimbComponent const&);
    ScriptNavigationClimbComponent(ScriptNavigationClimbComponent const&);
    ScriptNavigationClimbComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptNavigationClimbComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptNavigationClimbComponent();

    // symbol:
    // ?bind@ScriptNavigationClimbComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptNavigationClimbComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationClimbComponent>
    bind();

    // symbol: ?ComponentId@ScriptNavigationClimbComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
