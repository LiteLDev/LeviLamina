#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    // ?onBeforeChat@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptChatSendBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBUChatEvent@@AEBVPlayer@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    onBeforeChat(struct ChatEvent const&, class Player const&);

    // vIndex: 2, symbol:
    // ?onBeforeWorldInitialize@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXAEBV?$StrongTypedObjectHandle@VScriptBlockComponentRegistry@ScriptModuleMinecraft@@@Scripting@@AEBV?$StrongTypedObjectHandle@VScriptItemComponentRegistry@ScriptModuleMinecraft@@@4@@Z
    virtual void
    onBeforeWorldInitialize(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockComponentRegistry> const&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemComponentRegistry> const&);

    // vIndex: 3, symbol:
    // ?onBeforeWeatherChangedEvent@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptWeatherChangedBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@W4ScriptWeatherType@2@0H@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
    onBeforeWeatherChangedEvent(
        ::ScriptModuleMinecraft::ScriptWeatherType,
        ::ScriptModuleMinecraft::ScriptWeatherType,
        int
    );

    // vIndex: 4, symbol:
    // ?onBeforePlayerInteractWithEntity@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptPlayerInteractWithEntityBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVPlayer@@AEAVActor@@AEBUPlayerInteractWithEntityBeforeEvent@@@Z
    virtual std::optional<class Scripting::StrongTypedObjectHandle<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
    onBeforePlayerInteractWithEntity(class Player&, class Actor&, struct PlayerInteractWithEntityBeforeEvent const&);

    // vIndex: 5, symbol:
    // ?onBeforePlayerInteractWithBlock@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVPlayer@@AEBUPlayerInteractWithBlockBeforeEvent@@@Z
    virtual std::optional<class Scripting::StrongTypedObjectHandle<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    onBeforePlayerInteractWithBlock(class Player&, struct PlayerInteractWithBlockBeforeEvent const&);

    // vIndex: 6, symbol:
    // ?onBeforePlayerGameModeChange@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptPlayerGameModeChangeBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVPlayer@@W4GameType@@1@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>>
    onBeforePlayerGameModeChange(class Player const&, ::GameType, ::GameType);

    // vIndex: 7, symbol: ?onBeforePlayerLeave@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXAEBVPlayer@@@Z
    virtual void onBeforePlayerLeave(class Player const&);

    // vIndex: 8, symbol: ?onBeforeActorRemove@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXAEBVActor@@@Z
    virtual void onBeforeActorRemove(class Actor const&);

    // vIndex: 9, symbol:
    // ?onBeforeEffectAddedEventSend@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptActorAddEffectBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEAUActorAddEffectEvent@@AEBVActor@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
    onBeforeEffectAddedEventSend(struct ActorAddEffectEvent&, class Actor const&);

    // vIndex: 10, symbol:
    // ?onBeforeExplosion@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptExplosionStartedBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBUExplosionStartedEvent@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
    onBeforeExplosion(struct ExplosionStartedEvent const&);

    // vIndex: 11, symbol:
    // ?onBeforePlayerBreakBlock@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptPlayerBreakBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVPlayer@@AEBUBlockTryDestroyByPlayerEvent@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
    onBeforePlayerBreakBlock(class Player const&, struct BlockTryDestroyByPlayerEvent const&);

    // vIndex: 12, symbol:
    // ?onBeforePlayerPlaceBlock@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptPlayerPlaceBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVPlayer@@AEBUBlockTryPlaceByPlayerEvent@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
    onBeforePlayerPlaceBlock(class Player const&, struct BlockTryPlaceByPlayerEvent const&);

    // vIndex: 13, symbol:
    // ?onBeforeItemUse@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptItemUseBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVPlayer@@AEBUItemUseEvent@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    onBeforeItemUse(class Player const&, struct ItemUseEvent const&);

    // vIndex: 14, symbol:
    // ?onBeforeItemUseOn@IScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVPlayer@@AEBUItemUseOnEvent@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    onBeforeItemUseOn(class Player const&, struct ItemUseOnEvent const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
