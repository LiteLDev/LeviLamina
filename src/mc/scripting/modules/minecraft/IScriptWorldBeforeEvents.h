#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorRemoveBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemDefinitionBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockBeforeEvent; }
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
    // ?onBeforePlayerPlaceBlock@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXV?$StrongTypedObjectHandle@UScriptPlayerPlaceBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onBeforePlayerPlaceBlock(class Scripting::StrongTypedObjectHandle<
                                         struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
