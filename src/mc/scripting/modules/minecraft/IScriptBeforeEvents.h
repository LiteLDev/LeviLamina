#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemDefinitionBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionBeforeEvent; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptBeforeEvents {

public:
    // prevent constructor by default
    IScriptBeforeEvents& operator=(IScriptBeforeEvents const&) = delete;
    IScriptBeforeEvents(IScriptBeforeEvents const&)            = delete;
    IScriptBeforeEvents()                                      = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_ISCRIPTBEFOREEVENTS
    /**
     * @symbol
     * ?onBeforeActivatePiston\@IScriptBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptPistonActionBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onBeforeActivatePiston(class Scripting::StrongTypedObjectHandle<
                                       struct ScriptModuleMinecraft::ScriptPistonActionBeforeEvent>);
    /**
     * @symbol
     * ?onBeforeChat\@IScriptBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptChatSendBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
        onBeforeChat(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>);
    /**
     * @symbol
     * ?onBeforeDataDrivenActorEventSend\@IScriptBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptDataDrivenActorTriggerBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
        onBeforeDataDrivenActorEventSend(class Scripting::StrongTypedObjectHandle<
                                         struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerBeforeEvent>);
    /**
     * @symbol
     * ?onBeforeExplosion\@IScriptBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptExplosionStartedBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onBeforeExplosion(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>);
    /**
     * @symbol
     * ?onBeforeItemDefinitionEventTriggered\@IScriptBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptItemDefinitionBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onBeforeItemDefinitionEventTriggered(class Scripting::StrongTypedObjectHandle<
                                                     struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent>);
    /**
     * @symbol
     * ?onBeforeItemUse\@IScriptBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptItemUseBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onBeforeItemUse(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>);
    /**
     * @symbol
     * ?onBeforeItemUseOn\@IScriptBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptItemUseOnBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onBeforeItemUseOn(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>);
#endif
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
