#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
struct SeatDescription;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRideableComponent {
public:
    // prevent constructor by default
    ScriptRideableComponent& operator=(ScriptRideableComponent const&);
    ScriptRideableComponent(ScriptRideableComponent const&);
    ScriptRideableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptRideableComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptRideableComponent() = default;

    // vIndex: 1, symbol:
    // ?_isValid@?$ECSScriptActorComponent@VRideableComponent@@VRideableDefinition@@@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ??0ScriptRideableComponent@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ScriptRideableComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    // symbol:
    // ?addPassenger@ScriptRideableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEAVScriptActor@2@@Z
    MCAPI class Scripting::Result<bool> addPassenger(class ScriptModuleMinecraft::ScriptActor&) const;

    // symbol:
    // ?ejectPassenger@ScriptRideableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@AEAVScriptActor@2@@Z
    MCAPI class Scripting::Result<void> ejectPassenger(class ScriptModuleMinecraft::ScriptActor&) const;

    // symbol: ?ejectPassengers@ScriptRideableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> ejectPassengers() const;

    // symbol: ?getControllingSeat@ScriptRideableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getControllingSeat() const;

    // symbol:
    // ?getCrouchingSkipInteract@ScriptRideableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getCrouchingSkipInteract() const;

    // symbol:
    // ?getFamilyTypes@ScriptRideableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<std::string>> getFamilyTypes() const;

    // symbol:
    // ?getInteractText@ScriptRideableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getInteractText() const;

    // symbol:
    // ?getPassengerCanInteract@ScriptRideableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getPassengerCanInteract() const;

    // symbol: ?getPassengerMaxWidth@ScriptRideableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@M$$V@Scripting@@XZ
    MCAPI class Scripting::Result<float> getPassengerMaxWidth() const;

    // symbol: ?getPullInEntities@ScriptRideableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getPullInEntities() const;

    // symbol:
    // ?getRiders@ScriptRideableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getRiders() const;

    // symbol: ?getSeatCount@ScriptRideableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getSeatCount() const;

    // symbol:
    // ?getSeats@ScriptRideableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@USeatDescription@@V?$allocator@USeatDescription@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<struct SeatDescription>> getSeats() const;

    // symbol:
    // ?bind@ScriptRideableComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptRideableComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptRideableComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptRideableComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
