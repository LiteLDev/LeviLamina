#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    ScriptItemActorComponent& operator=(ScriptItemActorComponent const&) = delete;
    ScriptItemActorComponent(ScriptItemActorComponent const&)            = delete;
    ScriptItemActorComponent()                                           = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptItemActorComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptItemActorComponent();

    // symbol:
    // ?getItemStack@ScriptItemActorComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@Scripting@@XZ
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>
    getItemStack() const;

    // symbol:
    // ?bind@ScriptItemActorComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptItemActorComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemActorComponent> bind();

    // symbol: ?ComponentId@ScriptItemActorComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
