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
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedBeforeEvent; }
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

    // vIndex: 1, symbol:
    // ?onBeforeChat@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptChatSendBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
        onBeforeChat(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>);

    // vIndex: 2, symbol:
    // ?onBeforeDataDrivenActorEventSend@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptDataDrivenActorTriggerBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
        onBeforeDataDrivenActorEventSend(class Scripting::StrongTypedObjectHandle<
                                         struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerBeforeEvent>);

    // vIndex: 3, symbol:
    // ?onBeforeWeatherChangedEvent@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptWeatherChangedBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforeWeatherChangedEvent(class Scripting::StrongTypedObjectHandle<
                                             struct ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>);

    // vIndex: 4, symbol:
    // ?onBeforePlayerInteractWithEntity@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptPlayerInteractWithEntityBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
        onBeforePlayerInteractWithEntity(class Scripting::StrongTypedObjectHandle<
                                         struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>);

    // vIndex: 5, symbol:
    // ?onBeforePlayerInteractWithBlock@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
        onBeforePlayerInteractWithBlock(class Scripting::StrongTypedObjectHandle<
                                        struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>);

    // vIndex: 6, symbol:
    // ?onBeforePlayerLeave@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptPlayerLeaveBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforePlayerLeave(class Scripting::StrongTypedObjectHandle<
                                     struct ScriptModuleMinecraft::ScriptPlayerLeaveBeforeEvent>);

    // vIndex: 7, symbol:
    // ?onBeforeActorRemove@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptActorRemoveBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforeActorRemove(class Scripting::StrongTypedObjectHandle<
                                     struct ScriptModuleMinecraft::ScriptActorRemoveBeforeEvent>);

    // vIndex: 8, symbol:
    // ?onBeforeEffectAddedEventSend@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptActorAddEffectBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforeEffectAddedEventSend(class Scripting::StrongTypedObjectHandle<
                                              struct ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>);

    // vIndex: 9, symbol:
    // ?onBeforeExplosion@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptExplosionStartedBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforeExplosion(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>);

    // vIndex: 10, symbol:
    // ?onBeforePlayerBreakBlock@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptPlayerBreakBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforePlayerBreakBlock(class Scripting::StrongTypedObjectHandle<
                                          struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>);

    // vIndex: 11, symbol:
    // ?onBeforePlayerPlaceBlock@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptPlayerPlaceBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforePlayerPlaceBlock(class Scripting::StrongTypedObjectHandle<
                                          struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>);

    // vIndex: 12, symbol:
    // ?onBeforeItemDefinitionEventTriggered@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptItemDefinitionBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforeItemDefinitionEventTriggered(class Scripting::StrongTypedObjectHandle<
                                                      struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent>);

    // vIndex: 13, symbol:
    // ?onBeforeItemUse@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptItemUseBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforeItemUse(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>);

    // vIndex: 14, symbol:
    // ?onBeforeItemUseOn@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onBeforeItemUseOn(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
