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

class ScriptNavigationFloatComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {
public:
    // prevent constructor by default
    ScriptNavigationFloatComponent& operator=(ScriptNavigationFloatComponent const&);
    ScriptNavigationFloatComponent(ScriptNavigationFloatComponent const&);
    ScriptNavigationFloatComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptNavigationFloatComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptNavigationFloatComponent() = default;

    // vIndex: 1, symbol: ?_isValid@ScriptNavigationFloatComponent@ScriptModuleMinecraft@@EEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ?bind@ScriptNavigationFloatComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptNavigationFloatComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationFloatComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptNavigationFloatComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
