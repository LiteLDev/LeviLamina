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

class ScriptNavigationHoverComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {
public:
    // prevent constructor by default
    ScriptNavigationHoverComponent& operator=(ScriptNavigationHoverComponent const&);
    ScriptNavigationHoverComponent(ScriptNavigationHoverComponent const&);
    ScriptNavigationHoverComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptNavigationHoverComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptNavigationHoverComponent() = default;

    // vIndex: 1, symbol: ?_isValid@ScriptNavigationHoverComponent@ScriptModuleMinecraft@@EEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ?bind@ScriptNavigationHoverComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptNavigationHoverComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationHoverComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptNavigationHoverComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
