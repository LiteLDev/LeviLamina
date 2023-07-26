#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemDefinitionBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionBeforeEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldBeforeEvents {

public:
    // prevent constructor by default
    ScriptWorldBeforeEvents& operator=(ScriptWorldBeforeEvents const&) = delete;
    ScriptWorldBeforeEvents(ScriptWorldBeforeEvents const&)            = delete;
    ScriptWorldBeforeEvents()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?onBeforeChat\@ScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptChatSendBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onBeforeChat(class Scripting::StrongTypedObjectHandle<
                              struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?onBeforeDataDrivenActorEventSend\@ScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptDataDrivenActorTriggerBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onBeforeDataDrivenActorEventSend(class Scripting::StrongTypedObjectHandle<
                                                  struct ScriptModuleMinecraft::
                                                      ScriptDataDrivenActorTriggerBeforeEvent>); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?onBeforeActivatePiston\@ScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptPistonActionBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onBeforeActivatePiston(class Scripting::StrongTypedObjectHandle<
                                        struct ScriptModuleMinecraft::ScriptPistonActionBeforeEvent>); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?onBeforeExplosion\@ScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptExplosionStartedBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onBeforeExplosion(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?onBeforeItemDefinitionEventTriggered\@ScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptItemDefinitionBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void
        onBeforeItemDefinitionEventTriggered(class Scripting::StrongTypedObjectHandle<
                                             struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent>); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?onBeforeItemUse\@ScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptItemUseBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onBeforeItemUse(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?onBeforeItemUseOn\@ScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptItemUseOnBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onBeforeItemUseOn(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTWORLDBEFOREEVENTS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptWorldBeforeEvents(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@QEAA\@VWeakLifetimeScope\@Scripting\@\@PEAVLevel\@\@\@Z
     */
    MCAPI ScriptWorldBeforeEvents(class Scripting::WeakLifetimeScope, class Level*); // NOLINT
    /**
     * @symbol ??0ScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptWorldBeforeEvents(class ScriptModuleMinecraft::ScriptWorldBeforeEvents&&); // NOLINT
    /**
     * @symbol ??4ScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptWorldBeforeEvents&
    operator=(class ScriptModuleMinecraft::ScriptWorldBeforeEvents&&); // NOLINT
    /**
     * @symbol ?registerListeners\@ScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@QEAAXXZ
     */
    MCAPI void registerListeners(); // NOLINT
    /**
     * @symbol ?bind\@ScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@SAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
     */
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&); // NOLINT
};

}; // namespace ScriptModuleMinecraft
