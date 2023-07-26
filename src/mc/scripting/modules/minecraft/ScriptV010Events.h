#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorCreateEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorRemovedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTickEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptV010Events {

public:
    // prevent constructor by default
    ScriptV010Events& operator=(ScriptV010Events const&) = delete;
    ScriptV010Events(ScriptV010Events const&)            = delete;
    ScriptV010Events()                                   = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTV010EVENTS
    /**
     * @symbol ?getLevel\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEBAAEAVLevel\@\@XZ
     */
    MCVAPI class Level& getLevel() const; // NOLINT
    /**
     * @symbol
     * ?onActorHitBlock\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHitBlockAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onActorHitBlock(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>&); // NOLINT
    /**
     * @symbol
     * ?onActorHitEntity\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHitEntityAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onActorHitEntity(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&); // NOLINT
    /**
     * @symbol
     * ?onActorHurt\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onActorHurt(class Scripting::StrongTypedObjectHandle<
                            struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>&); // NOLINT
    /**
     * @symbol
     * ?onActorRemoved\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEBV?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEAV?$StrongTypedObjectHandle\@UScriptActorRemovedAfterEvent\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCVAPI void
    onActorRemoved(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const&, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorRemovedAfterEvent>&); // NOLINT
    /**
     * @symbol
     * ?onBeforeChat\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptChatSendBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onBeforeChat(class Scripting::StrongTypedObjectHandle<
                             struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>); // NOLINT
    /**
     * @symbol
     * ?onBeforeItemUse\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptItemUseBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onBeforeItemUse(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>); // NOLINT
    /**
     * @symbol
     * ?onBeforeItemUseOn\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptItemUseOnBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onBeforeItemUseOn(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>); // NOLINT
    /**
     * @symbol
     * ?onDataDrivenActorEventSend\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onDataDrivenActorEventSend(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&); // NOLINT
    /**
     * @symbol
     * ?onItemCompleteUse\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemCompleteUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemCompleteUse(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>&); // NOLINT
    /**
     * @symbol
     * ?onItemReleaseUse\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemReleaseUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemReleaseUse(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>&); // NOLINT
    /**
     * @symbol
     * ?onItemStartUse\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemStartUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemStartUse(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>&); // NOLINT
    /**
     * @symbol
     * ?onItemStopUse\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemStopUse(class Scripting::StrongTypedObjectHandle<
                              struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>&); // NOLINT
    /**
     * @symbol
     * ?onItemUseOn\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemUseOnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemUseOn(class Scripting::StrongTypedObjectHandle<
                            struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>&); // NOLINT
    /**
     * @symbol
     * ?onPlayerJoin\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPlayerJoinAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onPlayerJoin(class Scripting::StrongTypedObjectHandle<
                             struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>&); // NOLINT
    /**
     * @symbol
     * ?onPlayerLeave\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPlayerLeaveAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onPlayerLeave(class Scripting::StrongTypedObjectHandle<
                              struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>&); // NOLINT
    /**
     * @symbol
     * ?onWeatherChanged\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptWeatherChangedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onWeatherChanged(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&); // NOLINT
    /**
     * @symbol
     * ?onWorldInitialize\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onWorldInitialize(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptV010Events(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ScriptV010Events\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@V?$not_null\@PEAVLevel\@\@\@gsl\@\@\@Z
     */
    MCAPI ScriptV010Events(class Scripting::WeakLifetimeScope const&, class gsl::not_null<class Level*>); // NOLINT
    /**
     * @symbol ??0ScriptV010Events\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptV010Events(class ScriptModuleMinecraft::ScriptV010Events&&); // NOLINT
    /**
     * @symbol
     * ?onActorCreated\@ScriptV010Events\@ScriptModuleMinecraft\@\@QEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorCreateEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI void onActorCreated(class Scripting::StrongTypedObjectHandle<
                              struct ScriptModuleMinecraft::ScriptActorCreateEvent>&); // NOLINT
    /**
     * @symbol
     * ?onLevelTick\@ScriptV010Events\@ScriptModuleMinecraft\@\@QEAAXAEAV?$StrongTypedObjectHandle\@UScriptTickEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI void
    onLevelTick(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptTickEvent>&); // NOLINT
    /**
     * @symbol ??4ScriptV010Events\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptV010Events&
    operator=(class ScriptModuleMinecraft::ScriptV010Events&&); // NOLINT
    /**
     * @symbol
     * ?registerListener\@ScriptV010Events\@ScriptModuleMinecraft\@\@QEAAXU?$TypedObjectHandle\@VScriptV010Events\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI void
        registerListener(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptV010Events>); // NOLINT
    /**
     * @symbol ?bind\@ScriptV010Events\@ScriptModuleMinecraft\@\@SAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
     */
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&); // NOLINT
};

}; // namespace ScriptModuleMinecraft
