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

class ScriptNavigationGenericComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {
public:
    // prevent constructor by default
    ScriptNavigationGenericComponent& operator=(ScriptNavigationGenericComponent const&);
    ScriptNavigationGenericComponent(ScriptNavigationGenericComponent const&);
    ScriptNavigationGenericComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptNavigationGenericComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptNavigationGenericComponent() = default;

    // vIndex: 1, symbol: ?_isValid@ScriptNavigationGenericComponent@ScriptModuleMinecraft@@EEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ?bind@ScriptNavigationGenericComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptNavigationGenericComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationGenericComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptNavigationGenericComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
