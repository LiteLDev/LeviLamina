#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRidingComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    ScriptRidingComponent& operator=(ScriptRidingComponent const&) = delete;
    ScriptRidingComponent(ScriptRidingComponent const&)            = delete;
    ScriptRidingComponent()                                        = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptRidingComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptRidingComponent();

    // symbol:
    // ?getEntityRidingOn@ScriptRidingComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@Scripting@@XZ
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    getEntityRidingOn() const;

    // symbol:
    // ?bind@ScriptRidingComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptRidingComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptRidingComponent> bind();

    // symbol: ?ComponentId@ScriptRidingComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
