#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLeashableComponent {
public:
    // prevent constructor by default
    ScriptLeashableComponent& operator=(ScriptLeashableComponent const&);
    ScriptLeashableComponent(ScriptLeashableComponent const&);
    ScriptLeashableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptLeashableComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptLeashableComponent() = default;

    // vIndex: 1, symbol:
    // ?_isValid@?$ECSScriptActorComponent@VLeashableComponent@@VLeashableDefinition@@@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ??0ScriptLeashableComponent@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ScriptLeashableComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    // symbol: ?getSoftDistance@ScriptLeashableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@M$$V@Scripting@@XZ
    MCAPI class Scripting::Result<float> getSoftDistance() const;

    // symbol:
    // ?leash@ScriptLeashableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@AEAVScriptActor@2@@Z
    MCAPI class Scripting::Result<void> leash(class ScriptModuleMinecraft::ScriptActor&) const;

    // symbol: ?unleash@ScriptLeashableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> unleash() const;

    // symbol:
    // ?bind@ScriptLeashableComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptLeashableComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptLeashableComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptLeashableComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
