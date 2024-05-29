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
    // vIndex: 0, symbol: ??1ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptWorldBeforeEvents();

    // vIndex: 1, symbol:
    // ?onBeforeChat@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptChatSendBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBUChatEvent@@AEBVPlayer@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    onBeforeChat(struct ChatEvent const&, class Player const&);

    // vIndex: 2, symbol:
    // ?onBeforeWorldInitialize@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXAEBV?$StrongTypedObjectHandle@VScriptBlockComponentRegistry@ScriptModuleMinecraft@@@Scripting@@AEBV?$StrongTypedObjectHandle@VScriptItemComponentRegistry@ScriptModuleMinecraft@@@4@@Z
    virtual void
    onBeforeWorldInitialize(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockComponentRegistry> const&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemComponentRegistry> const&);

    // vIndex: 3, symbol:
    // ?onBeforeWeatherChangedEvent@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptWeatherChangedBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@W4ScriptWeatherType@2@0H@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
    onBeforeWeatherChangedEvent(
        ::ScriptModuleMinecraft::ScriptWeatherType,
        ::ScriptModuleMinecraft::ScriptWeatherType,
        int
    );

    // vIndex: 4, symbol:
    // ?onBeforePlayerInteractWithEntity@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptPlayerInteractWithEntityBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVPlayer@@AEAVActor@@AEBUPlayerInteractWithEntityBeforeEvent@@@Z
    virtual std::optional<class Scripting::StrongTypedObjectHandle<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
    onBeforePlayerInteractWithEntity(class Player&, class Actor&, struct PlayerInteractWithEntityBeforeEvent const&);

    // vIndex: 5, symbol:
    // ?onBeforePlayerInteractWithBlock@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVPlayer@@AEBUPlayerInteractWithBlockBeforeEvent@@@Z
    virtual std::optional<class Scripting::StrongTypedObjectHandle<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    onBeforePlayerInteractWithBlock(class Player&, struct PlayerInteractWithBlockBeforeEvent const&);

    // vIndex: 6, symbol:
    // ?onBeforePlayerGameModeChange@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptPlayerGameModeChangeBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVPlayer@@W4GameType@@1@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>>
    onBeforePlayerGameModeChange(class Player const&, ::GameType, ::GameType);

    // vIndex: 7, symbol: ?onBeforePlayerLeave@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXAEBVPlayer@@@Z
    virtual void onBeforePlayerLeave(class Player const&);

    // vIndex: 8, symbol: ?onBeforeActorRemove@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAAXAEBVActor@@@Z
    virtual void onBeforeActorRemove(class Actor const&);

    // vIndex: 9, symbol:
    // ?onBeforeEffectAddedEventSend@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptActorAddEffectBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEAUActorAddEffectEvent@@AEBVActor@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
    onBeforeEffectAddedEventSend(struct ActorAddEffectEvent&, class Actor const&);

    // vIndex: 10, symbol:
    // ?onBeforeExplosion@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptExplosionStartedBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBUExplosionStartedEvent@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
    onBeforeExplosion(struct ExplosionStartedEvent const&);

    // vIndex: 11, symbol:
    // ?onBeforePlayerBreakBlock@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptPlayerBreakBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVPlayer@@AEBUBlockTryDestroyByPlayerEvent@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
    onBeforePlayerBreakBlock(class Player const&, struct BlockTryDestroyByPlayerEvent const&);

    // vIndex: 12, symbol:
    // ?onBeforePlayerPlaceBlock@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptPlayerPlaceBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVPlayer@@AEBUBlockTryPlaceByPlayerEvent@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
    onBeforePlayerPlaceBlock(class Player const&, struct BlockTryPlaceByPlayerEvent const&);

    // vIndex: 13, symbol:
    // ?onBeforeItemUse@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptItemUseBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVPlayer@@AEBUItemUseEvent@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    onBeforeItemUse(class Player const&, struct ItemUseEvent const&);

    // vIndex: 14, symbol:
    // ?onBeforeItemUseOn@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@UEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptItemUseOnBeforeEvent@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVPlayer@@AEBUItemUseOnEvent@@@Z
    virtual std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    onBeforeItemUseOn(class Player const&, struct ItemUseOnEvent const&);

    // symbol: ??0ScriptWorldBeforeEvents@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptWorldBeforeEvents(class ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    // symbol: ??0ScriptWorldBeforeEvents@ScriptModuleMinecraft@@QEAA@VWeakLifetimeScope@Scripting@@PEAVLevel@@@Z
    MCAPI ScriptWorldBeforeEvents(class Scripting::WeakLifetimeScope, class Level*);

    // symbol: ??4ScriptWorldBeforeEvents@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptWorldBeforeEvents&
    operator=(class ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    // symbol: ?registerListeners@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@QEAAXXZ
    MCAPI void registerListeners();

    // symbol: ?bind@ScriptWorldBeforeEvents@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@@Z
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
