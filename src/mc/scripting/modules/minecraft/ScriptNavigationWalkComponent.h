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

class ScriptNavigationWalkComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {
public:
    // prevent constructor by default
    ScriptNavigationWalkComponent& operator=(ScriptNavigationWalkComponent const&);
    ScriptNavigationWalkComponent(ScriptNavigationWalkComponent const&);
    ScriptNavigationWalkComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptNavigationWalkComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptNavigationWalkComponent();

    // symbol:
    // ?bind@ScriptNavigationWalkComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptNavigationWalkComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationWalkComponent>
    bind();

    // symbol: ?ComponentId@ScriptNavigationWalkComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
