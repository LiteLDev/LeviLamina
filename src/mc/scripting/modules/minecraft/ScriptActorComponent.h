#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptComponent; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorComponent : public ::ScriptModuleMinecraft::ScriptComponent {
public:
    // prevent constructor by default
    ScriptActorComponent& operator=(ScriptActorComponent const&);
    ScriptActorComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptActorComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptActorComponent();

    // symbol: ??0ScriptActorComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptActorComponent(class ScriptModuleMinecraft::ScriptActorComponent const&);

    // symbol:
    // ??0ScriptActorComponent@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ScriptActorComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& context,
        std::string const&                        id
    );

    // symbol:
    // ?getEntity@ScriptActorComponent@ScriptModuleMinecraft@@QEBA?AV?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> getEntity() const;

    // symbol:
    // ?bind@ScriptActorComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptActorComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorComponent> bind();

    // symbol:
    // ?bindV010@ScriptActorComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptActorComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorComponent> bindV010();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_functionError@ScriptActorComponent@ScriptModuleMinecraft@@IEBA?AUError@Scripting@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI struct Scripting::Error _functionError(std::string_view) const;

    // symbol:
    // ?_getPropertyError@ScriptActorComponent@ScriptModuleMinecraft@@IEBA?AUError@Scripting@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI struct Scripting::Error _getPropertyError(std::string_view) const;

    // symbol:
    // ?_setPropertyError@ScriptActorComponent@ScriptModuleMinecraft@@IEBA?AUError@Scripting@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI struct Scripting::Error _setPropertyError(std::string_view) const;

    // symbol: ?_tryGetOwner@ScriptActorComponent@ScriptModuleMinecraft@@IEBAPEAVActor@@XZ
    MCAPI class Actor* _tryGetOwner() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
