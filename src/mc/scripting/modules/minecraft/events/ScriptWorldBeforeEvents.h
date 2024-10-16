#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Player;
namespace ScriptModuleMinecraft { class ScriptBlockComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptItemComponentRegistry; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedBeforeEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
struct ActorAddEffectEvent;
struct BlockTryDestroyByPlayerEvent;
struct BlockTryPlaceByPlayerEvent;
struct ChatEvent;
struct ExplosionStartedEvent;
struct ItemUseEvent;
struct ItemUseOnEvent;
struct PlayerInteractWithBlockBeforeEvent;
struct PlayerInteractWithEntityBeforeEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldBeforeEvents {
public:
    // prevent constructor by default
    ScriptWorldBeforeEvents& operator=(ScriptWorldBeforeEvents const&);
    ScriptWorldBeforeEvents(ScriptWorldBeforeEvents const&);
    ScriptWorldBeforeEvents();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptWorldBeforeEvents();

    // vIndex: 1
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    onBeforeChat(struct ChatEvent const& chatEvent, class Player const& player);

    // vIndex: 2
    virtual void onBeforeWorldInitialize(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockComponentRegistry> const&
            blockComponentRegistry,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemComponentRegistry> const&
            itemComponentRegistry
    );

    // vIndex: 3
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
    onBeforeWeatherChangedEvent(
        ::ScriptModuleMinecraft::ScriptWeatherType previousWeatherType,
        ::ScriptModuleMinecraft::ScriptWeatherType newWeatherType,
        int                                        duration
    );

    // vIndex: 4
    virtual std::optional<class Scripting::StrongTypedObjectHandle<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
    onBeforePlayerInteractWithEntity(
        class Player&                                     player,
        class Actor&                                      target,
        struct PlayerInteractWithEntityBeforeEvent const& eventData
    );

    // vIndex: 5
    virtual std::optional<class Scripting::StrongTypedObjectHandle<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    onBeforePlayerInteractWithBlock(class Player& player, struct PlayerInteractWithBlockBeforeEvent const& eventData);

    // vIndex: 6
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>>
    onBeforePlayerGameModeChange(class Player const& player, ::GameType fromGameMode, ::GameType toGameMode);

    // vIndex: 7
    virtual void onBeforePlayerLeave(class Player const& player);

    // vIndex: 8
    virtual void onBeforeActorRemove(class Actor const& actor);

    // vIndex: 9
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
    onBeforeEffectAddedEventSend(struct ActorAddEffectEvent& actorEffectAddedEvent, class Actor const& actor);

    // vIndex: 10
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
    onBeforeExplosion(struct ExplosionStartedEvent const& event);

    // vIndex: 11
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
    onBeforePlayerBreakBlock(class Player const& player, struct BlockTryDestroyByPlayerEvent const& eventData);

    // vIndex: 12
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
    onBeforePlayerPlaceBlock(class Player const& player, struct BlockTryPlaceByPlayerEvent const& eventData);

    // vIndex: 13
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    onBeforeItemUse(class Player const& player, struct ItemUseEvent const& itemEvent);

    // vIndex: 14
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    onBeforeItemUseOn(class Player const& player, struct ItemUseOnEvent const& itemEvent);

    MCAPI ScriptWorldBeforeEvents(class ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    MCAPI ScriptWorldBeforeEvents(class Scripting::WeakLifetimeScope scope, class Level* level);

    MCAPI class ScriptModuleMinecraft::ScriptWorldBeforeEvents&
    operator=(class ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    MCAPI void registerListeners();

    MCAPI static void bind(class Scripting::ModuleBindingBuilder& moduleBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    MCAPI void* ctor$(class Scripting::WeakLifetimeScope scope, class Level* level);

    MCAPI void dtor$();

    MCAPI void onBeforeActorRemove$(class Actor const& actor);

    MCAPI
    std::optional<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    onBeforeChat$(struct ChatEvent const& chatEvent, class Player const& player);

    MCAPI std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
    onBeforeEffectAddedEventSend$(struct ActorAddEffectEvent& actorEffectAddedEvent, class Actor const& actor);

    MCAPI std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
    onBeforeExplosion$(struct ExplosionStartedEvent const& event);

    MCAPI
    std::optional<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    onBeforeItemUse$(class Player const& player, struct ItemUseEvent const& itemEvent);

    MCAPI std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    onBeforeItemUseOn$(class Player const& player, struct ItemUseOnEvent const& itemEvent);

    MCAPI std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
    onBeforePlayerBreakBlock$(class Player const& player, struct BlockTryDestroyByPlayerEvent const& eventData);

    MCAPI std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>>
    onBeforePlayerGameModeChange$(class Player const& player, ::GameType fromGameMode, ::GameType toGameMode);

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    onBeforePlayerInteractWithBlock$(class Player& player, struct PlayerInteractWithBlockBeforeEvent const& eventData);

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
          onBeforePlayerInteractWithEntity$(
              class Player&                                     player,
              class Actor&                                      target,
              struct PlayerInteractWithEntityBeforeEvent const& eventData
          );

    MCAPI void onBeforePlayerLeave$(class Player const& player);

    MCAPI std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
    onBeforePlayerPlaceBlock$(class Player const& player, struct BlockTryPlaceByPlayerEvent const& eventData);

    MCAPI std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
    onBeforeWeatherChangedEvent$(
        ::ScriptModuleMinecraft::ScriptWeatherType previousWeatherType,
        ::ScriptModuleMinecraft::ScriptWeatherType newWeatherType,
        int                                        duration
    );

    MCAPI void onBeforeWorldInitialize$(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockComponentRegistry> const&
            blockComponentRegistry,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemComponentRegistry> const&
            itemComponentRegistry
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
