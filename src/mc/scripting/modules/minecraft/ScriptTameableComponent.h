#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTameableComponent {
public:
    // prevent constructor by default
    ScriptTameableComponent& operator=(ScriptTameableComponent const&);
    ScriptTameableComponent(ScriptTameableComponent const&);
    ScriptTameableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptTameableComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptTameableComponent() = default;

    // vIndex: 1, symbol:
    // ?_isValid@?$ECSScriptActorComponent@VTameableComponent@@VTameableDefinition@@@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ??0ScriptTameableComponent@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ScriptTameableComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    // symbol: ?getProbability@ScriptTameableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@M$$V@Scripting@@XZ
    MCAPI class Scripting::Result<float> getProbability() const;

    // symbol:
    // ?getTameItems@ScriptTameableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    getTameItems() const;

    // symbol:
    // ?getTameItems_010@ScriptTameableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<std::string>> getTameItems_010() const;

    // symbol: ?isTamed@ScriptTameableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isTamed() const;

    // symbol:
    // ?tame@ScriptTameableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEAVScriptPlayer@2@@Z
    MCAPI class Scripting::Result<bool> tame(class ScriptModuleMinecraft::ScriptPlayer&) const;

    // symbol: ?tame_010@ScriptTameableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> tame_010() const;

    // symbol:
    // ?tamedToPlayer@ScriptTameableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    tamedToPlayer() const;

    // symbol:
    // ?tamedToPlayerId@ScriptTameableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<std::string>> tamedToPlayerId() const;

    // symbol:
    // ?bind@ScriptTameableComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptTameableComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptTameableComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptTameableComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
