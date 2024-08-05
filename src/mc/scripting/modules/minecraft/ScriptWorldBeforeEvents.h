#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"

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
    onBeforeChat(struct ChatEvent const&, class Player const&);

    // vIndex: 2
    virtual void
    onBeforeWorldInitialize(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockComponentRegistry> const&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemComponentRegistry> const&);

    // vIndex: 3
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
    onBeforeWeatherChangedEvent(
        ::ScriptModuleMinecraft::ScriptWeatherType,
        ::ScriptModuleMinecraft::ScriptWeatherType,
        int
    );

    // vIndex: 4
    virtual std::optional<class Scripting::StrongTypedObjectHandle<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
    onBeforePlayerInteractWithEntity(class Player&, class Actor&, struct PlayerInteractWithEntityBeforeEvent const&);

    // vIndex: 5
    virtual std::optional<class Scripting::StrongTypedObjectHandle<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    onBeforePlayerInteractWithBlock(class Player&, struct PlayerInteractWithBlockBeforeEvent const&);

    // vIndex: 6
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>>
    onBeforePlayerGameModeChange(class Player const&, ::GameType, ::GameType);

    // vIndex: 7
    virtual void onBeforePlayerLeave(class Player const&);

    // vIndex: 8
    virtual void onBeforeActorRemove(class Actor const&);

    // vIndex: 9
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
    onBeforeEffectAddedEventSend(struct ActorAddEffectEvent&, class Actor const&);

    // vIndex: 10
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
    onBeforeExplosion(struct ExplosionStartedEvent const&);

    // vIndex: 11
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
    onBeforePlayerBreakBlock(class Player const&, struct BlockTryDestroyByPlayerEvent const&);

    // vIndex: 12
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
    onBeforePlayerPlaceBlock(class Player const&, struct BlockTryPlaceByPlayerEvent const&);

    // vIndex: 13
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    onBeforeItemUse(class Player const&, struct ItemUseEvent const&);

    // vIndex: 14
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    onBeforeItemUseOn(class Player const&, struct ItemUseOnEvent const&);

    MCAPI ScriptWorldBeforeEvents(class ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    MCAPI ScriptWorldBeforeEvents(class Scripting::WeakLifetimeScope, class Level*);

    MCAPI class ScriptModuleMinecraft::ScriptWorldBeforeEvents&
    operator=(class ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    MCAPI void registerListeners();

    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
