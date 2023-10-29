#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorComponent : public ::ScriptModuleMinecraft::ScriptComponent {
public:
    // prevent constructor by default
    ScriptActorComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_isValid@ScriptActorComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??1ScriptActorComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptActorComponent();

    // symbol: ??0ScriptActorComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptActorComponent(class ScriptModuleMinecraft::ScriptActorComponent const&);

    // symbol:
    // ??0ScriptActorComponent@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI
    ScriptActorComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);

    // symbol:
    // ?getEntity@ScriptActorComponent@ScriptModuleMinecraft@@QEBA?AV?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> getEntity() const;

    // symbol: ??4ScriptActorComponent@ScriptModuleMinecraft@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptActorComponent&
    operator=(class ScriptModuleMinecraft::ScriptActorComponent const&);

    // symbol:
    // ?bind@ScriptActorComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptActorComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorComponent> bind();

    // symbol:
    // ?bindV010@ScriptActorComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptActorComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorComponent> bindV010();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_tryGetOwner@ScriptActorComponent@ScriptModuleMinecraft@@IEBAPEAVActor@@XZ
    MCAPI class Actor* _tryGetOwner() const;

    // symbol: ?_tryGetOwnerAsMob@ScriptActorComponent@ScriptModuleMinecraft@@IEBAPEAVMob@@XZ
    MCAPI class Mob* _tryGetOwnerAsMob() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
