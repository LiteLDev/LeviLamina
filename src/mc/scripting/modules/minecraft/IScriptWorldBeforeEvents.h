#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemDefinitionBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockBeforeEvent; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptWorldBeforeEvents {
public:
    // prevent constructor by default
    IScriptWorldBeforeEvents& operator=(IScriptWorldBeforeEvents const&);
    IScriptWorldBeforeEvents(IScriptWorldBeforeEvents const&);
    IScriptWorldBeforeEvents();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~IScriptWorldBeforeEvents() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?onBeforePlayerLeave@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptPlayerLeaveBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforePlayerLeave(class Scripting::StrongTypedObjectHandle<
                                     struct ScriptModuleMinecraft::ScriptPlayerLeaveBeforeEvent>);

    // symbol:
    // ?onBeforeActivatePiston@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptPistonActionBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onBeforeActivatePiston(class Scripting::StrongTypedObjectHandle<
                                       struct ScriptModuleMinecraft::ScriptPistonActionBeforeEvent>);

    // symbol:
    // ?onBeforeActorRemove@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptActorRemoveBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onBeforeActorRemove(class Scripting::StrongTypedObjectHandle<
                                    struct ScriptModuleMinecraft::ScriptActorRemoveBeforeEvent>);

    // symbol:
    // ?onBeforeChat@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptChatSendBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
        onBeforeChat(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>);

    // symbol:
    // ?onBeforeDataDrivenActorEventSend@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptDataDrivenActorTriggerBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
        onBeforeDataDrivenActorEventSend(class Scripting::StrongTypedObjectHandle<
                                         struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerBeforeEvent>);

    // symbol:
    // ?onBeforeEffectAddedEventSend@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptActorAddEffectBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onBeforeEffectAddedEventSend(class Scripting::StrongTypedObjectHandle<
                                             struct ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>);

    // symbol:
    // ?onBeforeExplosion@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptExplosionStartedBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onBeforeExplosion(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>);

    // symbol:
    // ?onBeforeItemDefinitionEventTriggered@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptItemDefinitionBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onBeforeItemDefinitionEventTriggered(class Scripting::StrongTypedObjectHandle<
                                                     struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent>);

    // symbol:
    // ?onBeforeItemUse@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptItemUseBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onBeforeItemUse(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>);

    // symbol:
    // ?onBeforeItemUseOn@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onBeforeItemUseOn(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>);

    // symbol:
    // ?onBeforePlayerBreakBlock@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptPlayerBreakBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onBeforePlayerBreakBlock(class Scripting::StrongTypedObjectHandle<
                                         struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>);

    // symbol:
    // ?onBeforePlayerInteractWithBlock@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
        onBeforePlayerInteractWithBlock(class Scripting::StrongTypedObjectHandle<
                                        struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>);

    // symbol:
    // ?onBeforePlayerInteractWithEntity@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptPlayerInteractWithEntityBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
        onBeforePlayerInteractWithEntity(class Scripting::StrongTypedObjectHandle<
                                         struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>);

    // symbol:
    // ?onBeforePlayerPlaceBlock@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptPlayerPlaceBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onBeforePlayerPlaceBlock(class Scripting::StrongTypedObjectHandle<
                                         struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
