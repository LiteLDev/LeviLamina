#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"

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
    MCVAPI class Level& getLevel() const;

    MCVAPI void onActorHitBlock(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>& actorHitBlockEvent);

    MCVAPI void onActorHitEntity(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>& actorHitEntityEvent);

    MCVAPI void onActorHurt(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>& hurtEvent
    );

    MCVAPI void
    onActorRemoved(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const& removedActor, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&);

    MCVAPI
    std::optional<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    onBeforeChat(struct ChatEvent const& chatEvent, class Player const& player);

    MCVAPI
    std::optional<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    onBeforeItemUse(class Player const& player, struct ItemUseEvent const& itemEvent);

    MCVAPI std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    onBeforeItemUseOn(class Player const& player, struct ItemUseOnEvent const& itemEvent);

    MCVAPI void onDataDrivenActorEventSend(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&
            dataDrivenActorEventSend
    );

    MCVAPI void onItemCompleteUse(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>& itemEvent);

    MCVAPI void onItemReleaseUse(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>& itemEvent);

    MCVAPI void onItemStartUse(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>& itemEvent
    );

    MCVAPI void onItemStopUse(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>& itemEvent
    );

    MCVAPI void onItemUseOn(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& itemEvent
    );

    MCVAPI void
    onPlayerJoin(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>&
                     playerJoinEvent);

    MCVAPI void
    onPlayerLeave(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>&
                      PlayerDisconnectEvent);

    MCVAPI void onWeatherChanged(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>& weatherChangedEvent);

    MCVAPI void onWorldInitialize(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>& worldInitializeEvent);

    MCVAPI ~ScriptV010Events();

    MCAPI ScriptV010Events(class ScriptModuleMinecraft::ScriptV010Events&&);

    MCAPI ScriptV010Events(class Scripting::WeakLifetimeScope const& scope, gsl::not_null<class Level*> level);

    MCAPI void onActorCreated(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorCreateEvent>& actorEvent
    );

    MCAPI class ScriptModuleMinecraft::ScriptV010Events& operator=(class ScriptModuleMinecraft::ScriptV010Events&&);

    MCAPI void
    registerListener(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptV010Events> handle);

    MCAPI static void bind(class Scripting::ModuleBindingBuilder& moduleBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForScriptModuleMinecraftIScriptWorldAfterEvents();

    MCAPI static void** vftableForScriptModuleMinecraftIScriptWorldBeforeEvents();

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptV010Events&&);

    MCAPI void* ctor$(class Scripting::WeakLifetimeScope const& scope, gsl::not_null<class Level*> level);

    MCAPI void dtor$();

    MCAPI class Level& getLevel$() const;

    MCAPI void onActorHitBlock$(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>& actorHitBlockEvent);

    MCAPI void onActorHitEntity$(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>& actorHitEntityEvent);

    MCAPI void onActorHurt$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>& hurtEvent
    );

    MCAPI void
    onActorRemoved$(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const& removedActor, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&);

    MCAPI
    std::optional<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    onBeforeChat$(struct ChatEvent const& chatEvent, class Player const& player);

    MCAPI
    std::optional<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    onBeforeItemUse$(class Player const& player, struct ItemUseEvent const& itemEvent);

    MCAPI std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    onBeforeItemUseOn$(class Player const& player, struct ItemUseOnEvent const& itemEvent);

    MCAPI void onDataDrivenActorEventSend$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&
            dataDrivenActorEventSend
    );

    MCAPI void onItemCompleteUse$(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>& itemEvent);

    MCAPI void onItemReleaseUse$(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>& itemEvent);

    MCAPI void onItemStartUse$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>& itemEvent
    );

    MCAPI void onItemStopUse$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>& itemEvent
    );

    MCAPI void onItemUseOn$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& itemEvent
    );

    MCAPI void
    onPlayerJoin$(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>&
                      playerJoinEvent);

    MCAPI void
    onPlayerLeave$(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>&
                       playerLeaveEvent);

    MCAPI void onWeatherChanged$(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>& weatherChangedEvent);

    MCAPI void onWorldInitialize$(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>& worldInitializeEvent);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
