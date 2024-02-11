#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorDieAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHealthChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorLoadAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockExplodedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptButtonPushAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemDefinitionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptLeverActionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerDimensionChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePopAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePushAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptServerMessageAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTargetBlockHitAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTripWireTripAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEvent; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptWorldAfterEvents {
public:
    // prevent constructor by default
    IScriptWorldAfterEvents& operator=(IScriptWorldAfterEvents const&);
    IScriptWorldAfterEvents(IScriptWorldAfterEvents const&);
    IScriptWorldAfterEvents();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~IScriptWorldAfterEvents() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol:
    // ?onWeatherChanged@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptWeatherChangedAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onWeatherChanged(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&);

    // vIndex: 3, symbol:
    // ?onWorldInitialize@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptWorldInitializeAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onWorldInitialize(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&);

    // vIndex: 4, symbol:
    // ?onPlayerJoin@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerJoinAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
    onPlayerJoin(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>&);

    // vIndex: 5, symbol:
    // ?onPlayerLeave@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerLeaveAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
    onPlayerLeave(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>&);

    // vIndex: 6, symbol:
    // ?onActorAddEffect@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorAddEffectAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onActorAddEffect(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent>&);

    // vIndex: 7, symbol:
    // ?onChat@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptChatSendAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
    onChat(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent>&);

    // vIndex: 8, symbol:
    // ?onActorLoad@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorLoadAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
    onActorLoad(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorLoadAfterEvent>&);

    // vIndex: 9, symbol:
    // ?onActorSpawn@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorSpawnAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
    onActorSpawn(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>&);

    // vIndex: 10, symbol:
    // ?onActorRemoved@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEBV?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@AEAV?$StrongTypedObjectHandle@UScriptActorRemoveAfterEvent@ScriptModuleMinecraft@@@4@@Z
    virtual void
    onActorRemoved(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const&, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&);

    // vIndex: 11, symbol:
    // ?onActorHitEntity@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorHitEntityAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onActorHitEntity(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&);

    // vIndex: 12, symbol:
    // ?onActorHitBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorHitBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onActorHitBlock(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>&);

    // vIndex: 13, symbol:
    // ?onServerMessage@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptServerMessageAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onServerMessage(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent>&);

    // vIndex: 14, symbol:
    // ?onDataDrivenActorEventSend@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptDataDrivenActorTriggerAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onDataDrivenActorEventSend(class Scripting::StrongTypedObjectHandle<
                                            struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&);

    // vIndex: 15, symbol:
    // ?onActorHurt@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorHurtAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
    onActorHurt(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>&);

    // vIndex: 16, symbol:
    // ?onActorHealthChanged@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorHealthChangedAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onActorHealthChanged(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&);

    // vIndex: 17, symbol:
    // ?onActorDie@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorDieAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
    onActorDie(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorDieAfterEvent>&);

    // vIndex: 18, symbol:
    // ?onPlayerSpawn@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerSpawnAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
    onPlayerSpawn(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>&);

    // vIndex: 19, symbol:
    // ?onPlayerDimensionChange@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerDimensionChangeAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onPlayerDimensionChange(class Scripting::StrongTypedObjectHandle<
                                         struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>&);

    // vIndex: 20, symbol:
    // ?onPlayerInteractWithEntity@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerInteractWithEntityAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onPlayerInteractWithEntity(class Scripting::StrongTypedObjectHandle<
                                            struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&);

    // vIndex: 21, symbol:
    // ?onPlayerInteractWithBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerInteractWithBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onPlayerInteractWithBlock(class Scripting::StrongTypedObjectHandle<
                                           struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&);

    // vIndex: 22, symbol:
    // ?onActivatePiston@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPistonActionAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onActivatePiston(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent>&);

    // vIndex: 23, symbol:
    // ?onActivateLever@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptLeverActionAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onActivateLever(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent>&);

    // vIndex: 24, symbol:
    // ?onPushButton@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptButtonPushAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
    onPushButton(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent>&);

    // vIndex: 25, symbol:
    // ?onExplosion@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptExplosionStartedAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onExplosion(class Scripting::StrongTypedObjectHandle<
                             struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>&);

    // vIndex: 26, symbol:
    // ?onExplodeBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptBlockExplodedAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onExplodeBlock(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent>&);

    // vIndex: 27, symbol:
    // ?onPlayerPlaceBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerPlaceBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onPlayerPlaceBlock(class Scripting::StrongTypedObjectHandle<
                                    struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>&);

    // vIndex: 28, symbol:
    // ?onPlayerBreakBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerBreakBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onPlayerBreakBlock(class Scripting::StrongTypedObjectHandle<
                                    struct ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>&);

    // vIndex: 29, symbol:
    // ?onPushPressurePlate@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPressurePlatePushAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onPushPressurePlate(class Scripting::StrongTypedObjectHandle<
                                     struct ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&);

    // vIndex: 30, symbol:
    // ?onPopPressurePlate@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPressurePlatePopAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onPopPressurePlate(class Scripting::StrongTypedObjectHandle<
                                    struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&);

    // vIndex: 31, symbol:
    // ?onHitTargetBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptTargetBlockHitAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onHitTargetBlock(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>&);

    // vIndex: 32, symbol:
    // ?onTripTripWire@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptTripWireTripAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onTripTripWire(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>&);

    // vIndex: 33, symbol:
    // ?onItemDefinitionEventTriggered@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemDefinitionAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onItemDefinitionEventTriggered(class Scripting::StrongTypedObjectHandle<
                                                struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent>&);

    // vIndex: 34, symbol:
    // ?onItemUse@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
    onItemUse(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseAfterEvent>&);

    // vIndex: 35, symbol:
    // ?onItemUseOn@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
    onItemUseOn(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>&);

    // vIndex: 36, symbol:
    // ?onItemStartUseOn@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemStartUseOnAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onItemStartUseOn(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>&);

    // vIndex: 37, symbol:
    // ?onItemStopUseOn@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemStopUseOnAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onItemStopUseOn(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>&);

    // vIndex: 38, symbol:
    // ?onItemStartUse@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemStartUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onItemStartUse(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>&);

    // vIndex: 39, symbol:
    // ?onItemCompleteUse@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onItemCompleteUse(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>&);

    // vIndex: 40, symbol:
    // ?onItemReleaseUse@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemReleaseUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onItemReleaseUse(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>&);

    // vIndex: 41, symbol:
    // ?onItemStopUse@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemStopUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void
    onItemStopUse(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>&);

    // vIndex: 42, symbol:
    // ?onProjectileHitEntity@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptProjectileHitEntityAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onProjectileHitEntity(class Scripting::StrongTypedObjectHandle<
                                       struct ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>&);

    // vIndex: 43, symbol:
    // ?onProjectileHitBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptProjectileHitBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    virtual void onProjectileHitBlock(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
