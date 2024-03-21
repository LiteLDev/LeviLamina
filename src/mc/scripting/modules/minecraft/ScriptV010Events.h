#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Level;
class Player;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorCreateEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveAfterEvent; }
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
struct ChatEvent;
struct ItemUseEvent;
struct ItemUseOnEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptV010Events {
public:
    // prevent constructor by default
    ScriptV010Events& operator=(ScriptV010Events const&);
    ScriptV010Events(ScriptV010Events const&);
    ScriptV010Events();

public:
    // NOLINTBEGIN
    // symbol: ?getLevel@ScriptV010Events@ScriptModuleMinecraft@@UEBAAEAVLevel@@XZ
    MCVAPI class Level& getLevel() const;

    // symbol:
    // ?onActorHitBlock@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorHitBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onActorHitBlock(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>&);

    // symbol:
    // ?onActorHitEntity@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorHitEntityAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onActorHitEntity(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&);

    // symbol:
    // ?onActorHurt@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorHurtAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onActorHurt(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>& hurtEvent
    );

    // symbol:
    // ?onActorRemoved@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEBV?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@AEAV?$StrongTypedObjectHandle@UScriptActorRemoveAfterEvent@ScriptModuleMinecraft@@@4@@Z
    MCVAPI void
    onActorRemoved(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const&, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&);

    // symbol:
    // ?onBeforeChat@ScriptV010Events@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptChatSendBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBUChatEvent@@AEBVPlayer@@@Z
    MCVAPI
    std::optional<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    onBeforeChat(struct ChatEvent const&, class Player const&);

    // symbol:
    // ?onBeforeItemUse@ScriptV010Events@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptItemUseBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVPlayer@@AEBUItemUseEvent@@@Z
    MCVAPI
    std::optional<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    onBeforeItemUse(class Player const&, struct ItemUseEvent const&);

    // symbol:
    // ?onBeforeItemUseOn@ScriptV010Events@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVPlayer@@AEBUItemUseOnEvent@@@Z
    MCVAPI std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    onBeforeItemUseOn(class Player const&, struct ItemUseOnEvent const&);

    // symbol:
    // ?onDataDrivenActorEventSend@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptDataDrivenActorTriggerAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onDataDrivenActorEventSend(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&
            dataDrivenActorEventSend
    );

    // symbol:
    // ?onItemCompleteUse@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onItemCompleteUse(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>&);

    // symbol:
    // ?onItemReleaseUse@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemReleaseUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onItemReleaseUse(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>&);

    // symbol:
    // ?onItemStartUse@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemStartUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onItemStartUse(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>&);

    // symbol:
    // ?onItemStopUse@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemStopUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onItemStopUse(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>&);

    // symbol:
    // ?onItemUseOn@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onItemUseOn(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& itemEvent
    );

    // symbol:
    // ?onPlayerJoin@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerJoinAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onPlayerJoin(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>&
                     playerJoinEvent);

    // symbol:
    // ?onPlayerLeave@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerLeaveAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onPlayerLeave(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>&
                      playerLeaveEvent);

    // symbol:
    // ?onWeatherChanged@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptWeatherChangedAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onWeatherChanged(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>& weatherChangedEvent);

    // symbol:
    // ?onWorldInitialize@ScriptV010Events@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptWorldInitializeAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onWorldInitialize(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>& worldInitializeEvent);

    // symbol: ??1ScriptV010Events@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptV010Events();

    // symbol: ??0ScriptV010Events@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptV010Events(class ScriptModuleMinecraft::ScriptV010Events&&);

    // symbol:
    // ??0ScriptV010Events@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@V?$not_null@PEAVLevel@@@gsl@@@Z
    MCAPI ScriptV010Events(class Scripting::WeakLifetimeScope const& scope, gsl::not_null<class Level*> level);

    // symbol:
    // ?onActorCreated@ScriptV010Events@ScriptModuleMinecraft@@QEAAXAEAV?$StrongTypedObjectHandle@UScriptActorCreateEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCAPI void
    onActorCreated(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorCreateEvent>&);

    // symbol:
    // ?onLevelTick@ScriptV010Events@ScriptModuleMinecraft@@QEAAXAEAV?$StrongTypedObjectHandle@UScriptTickEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCAPI void onLevelTick(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptTickEvent>&);

    // symbol: ??4ScriptV010Events@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptV010Events& operator=(class ScriptModuleMinecraft::ScriptV010Events&&);

    // symbol:
    // ?registerListener@ScriptV010Events@ScriptModuleMinecraft@@QEAAXU?$TypedObjectHandle@VScriptV010Events@ScriptModuleMinecraft@@@Scripting@@@Z
    MCAPI void
    registerListener(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptV010Events> handle);

    // symbol: ?bind@ScriptV010Events@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@@Z
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
