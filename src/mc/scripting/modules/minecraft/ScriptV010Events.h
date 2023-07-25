#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTV010EVENTS
public:
    ScriptV010Events& operator=(ScriptV010Events const&) = delete;
    ScriptV010Events(ScriptV010Events const&)            = delete;
    ScriptV010Events()                                   = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTV010EVENTS
    /**
     * @symbol ?getLevel\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEBAAEAVLevel\@\@XZ
     */
    MCVAPI class Level& getLevel() const;
    /**
     * @symbol
     * ?onActorHitBlock\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHitBlockAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onActorHitBlock(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>&);
    /**
     * @symbol
     * ?onActorHitEntity\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHitEntityAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onActorHitEntity(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&);
    /**
     * @symbol
     * ?onActorHurt\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onActorHurt(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>&);
    /**
     * @symbol
     * ?onActorRemoved\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEBV?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEAV?$StrongTypedObjectHandle\@UScriptActorRemovedAfterEvent\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCVAPI void
    onActorRemoved(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const&, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorRemovedAfterEvent>&);
    /**
     * @symbol
     * ?onBeforeChat\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptChatSendBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
        onBeforeChat(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>);
    /**
     * @symbol
     * ?onBeforeItemUse\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptItemUseBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onBeforeItemUse(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>);
    /**
     * @symbol
     * ?onBeforeItemUseOn\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXV?$StrongTypedObjectHandle\@UScriptItemUseOnBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onBeforeItemUseOn(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>);
    /**
     * @symbol
     * ?onDataDrivenActorEventSend\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onDataDrivenActorEventSend(class Scripting::StrongTypedObjectHandle<
                                           struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&);
    /**
     * @symbol
     * ?onItemCompleteUse\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemCompleteUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemCompleteUse(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>&);
    /**
     * @symbol
     * ?onItemReleaseUse\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemReleaseUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemReleaseUse(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>&);
    /**
     * @symbol
     * ?onItemStartUse\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemStartUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemStartUse(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>&);
    /**
     * @symbol
     * ?onItemStopUse\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onItemStopUse(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>&);
    /**
     * @symbol
     * ?onItemUseOn\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemUseOnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onItemUseOn(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>&);
    /**
     * @symbol
     * ?onPlayerJoin\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPlayerJoinAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onPlayerJoin(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>&);
    /**
     * @symbol
     * ?onPlayerLeave\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPlayerLeaveAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onPlayerLeave(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>&);
    /**
     * @symbol
     * ?onWeatherChanged\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptWeatherChangedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onWeatherChanged(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&);
    /**
     * @symbol
     * ?onWorldInitialize\@ScriptV010Events\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onWorldInitialize(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptV010Events();
#endif
    /**
     * @symbol
     * ??0ScriptV010Events\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@V?$not_null\@PEAVLevel\@\@\@gsl\@\@\@Z
     */
    MCAPI ScriptV010Events(class Scripting::WeakLifetimeScope const&, class gsl::not_null<class Level*>);
    /**
     * @symbol ??0ScriptV010Events\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptV010Events(class ScriptModuleMinecraft::ScriptV010Events&&);
    /**
     * @symbol
     * ?onActorCreated\@ScriptV010Events\@ScriptModuleMinecraft\@\@QEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorCreateEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI void
    onActorCreated(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorCreateEvent>&);
    /**
     * @symbol
     * ?onLevelTick\@ScriptV010Events\@ScriptModuleMinecraft\@\@QEAAXAEAV?$StrongTypedObjectHandle\@UScriptTickEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI void onLevelTick(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptTickEvent>&);
    /**
     * @symbol ??4ScriptV010Events\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptV010Events& operator=(class ScriptModuleMinecraft::ScriptV010Events&&);
    /**
     * @symbol
     * ?registerListener\@ScriptV010Events\@ScriptModuleMinecraft\@\@QEAAXU?$TypedObjectHandle\@VScriptV010Events\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI void registerListener(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptV010Events>);
    /**
     * @symbol ?bind\@ScriptV010Events\@ScriptModuleMinecraft\@\@SAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
     */
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);
};

}; // namespace ScriptModuleMinecraft
