#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/NavigationScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class NavigationScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
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
    // vIndex: 0, symbol: __gen_??1ScriptNavigationWalkComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptNavigationWalkComponent() = default;

    // vIndex: 1, symbol: ?_isValid@ScriptNavigationWalkComponent@ScriptModuleMinecraft@@EEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ?bind@ScriptNavigationWalkComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptNavigationWalkComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationWalkComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptNavigationWalkComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
