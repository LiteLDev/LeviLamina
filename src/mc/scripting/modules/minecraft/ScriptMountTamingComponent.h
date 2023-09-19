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

class ScriptMountTamingComponent {
public:
    // prevent constructor by default
    ScriptMountTamingComponent& operator=(ScriptMountTamingComponent const&);
    ScriptMountTamingComponent(ScriptMountTamingComponent const&);
    ScriptMountTamingComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_isValid@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??1ScriptMountTamingComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptMountTamingComponent();

    // symbol:
    // ??0ScriptMountTamingComponent@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI
    ScriptMountTamingComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);

    // symbol: ?setTamed@ScriptMountTamingComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@X@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setTamed(bool) const;

    // symbol:
    // ?bind@ScriptMountTamingComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMountTamingComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMountTamingComponent> bind();

    // symbol: ?ComponentId@ScriptMountTamingComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
