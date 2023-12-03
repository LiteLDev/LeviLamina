#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAddRiderComponent {
public:
    // prevent constructor by default
    ScriptAddRiderComponent& operator=(ScriptAddRiderComponent const&);
    ScriptAddRiderComponent(ScriptAddRiderComponent const&);
    ScriptAddRiderComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptAddRiderComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptAddRiderComponent();

    // vIndex: 1, symbol:
    // ?_isValid@?$ECSScriptActorComponent@VAddRiderComponent@@VAddRiderDefinition@@@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ??0ScriptAddRiderComponent@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI
    ScriptAddRiderComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);

    // symbol:
    // ?getEntityType@ScriptAddRiderComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getEntityType() const;

    // symbol:
    // ?getSpawnEvent@ScriptAddRiderComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getSpawnEvent() const;

    // symbol:
    // ?bind@ScriptAddRiderComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptAddRiderComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptAddRiderComponent> bind();

    // symbol: ?ComponentId@ScriptAddRiderComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
