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
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMountTamingComponent {
public:
    // prevent constructor by default
    ScriptMountTamingComponent& operator=(ScriptMountTamingComponent const&);
    ScriptMountTamingComponent(ScriptMountTamingComponent const&);
    ScriptMountTamingComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptMountTamingComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptMountTamingComponent() = default;

    // vIndex: 1, symbol:
    // ?_isValid@?$ECSScriptActorComponent@VMountTamingComponent@@VMountTameableDefinition@@@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ??0ScriptMountTamingComponent@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ScriptMountTamingComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    // symbol: ?isTamed@ScriptMountTamingComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isTamed() const;

    // symbol: ?isTamedToPlayer@ScriptMountTamingComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isTamedToPlayer() const;

    // symbol: ?setTamed@ScriptMountTamingComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setTamed(bool showParticles) const;

    // symbol:
    // ?setTamedToPlayer@ScriptMountTamingComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@_NAEAVScriptPlayer@2@@Z
    MCAPI class Scripting::Result<bool> setTamedToPlayer(bool, class ScriptModuleMinecraft::ScriptPlayer&) const;

    // symbol:
    // ?tamedToPlayer@ScriptMountTamingComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    tamedToPlayer() const;

    // symbol:
    // ?tamedToPlayerId@ScriptMountTamingComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<std::string>> tamedToPlayerId() const;

    // symbol:
    // ?bind@ScriptMountTamingComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMountTamingComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMountTamingComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptMountTamingComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
