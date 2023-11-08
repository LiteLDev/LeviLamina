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

    // symbol:
    // ?onActivateLever@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptLeverActionAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onActivateLever(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent>&);

    // symbol:
    // ?onActivatePiston@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPistonActionAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onActivatePiston(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent>&);

    // symbol:
    // ?onActorAddEffect@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorAddEffectAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onActorAddEffect(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent>&);

    // symbol:
    // ?onActorDie@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorDieAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onActorDie(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorDieAfterEvent>&);

    // symbol:
    // ?onActorHealthChanged@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorHealthChangedAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onActorHealthChanged(class Scripting::StrongTypedObjectHandle<
                                     struct ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&);

    // symbol:
    // ?onActorHitBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorHitBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onActorHitBlock(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>&);

    // symbol:
    // ?onActorHitEntity@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorHitEntityAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onActorHitEntity(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&);

    // symbol:
    // ?onActorHurt@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorHurtAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onActorHurt(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>&);

    // symbol:
    // ?onActorLoad@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorLoadAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onActorLoad(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorLoadAfterEvent>&);

    // symbol:
    // ?onActorRemoved@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEBV?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@AEAV?$StrongTypedObjectHandle@UScriptActorRemoveAfterEvent@ScriptModuleMinecraft@@@4@@Z
    MCVAPI void
    onActorRemoved(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const&, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&);

    // symbol:
    // ?onActorSpawn@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptActorSpawnAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onActorSpawn(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>&);

    // symbol:
    // ?onChat@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptChatSendAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onChat(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent>&);

    // symbol:
    // ?onDataDrivenActorEventSend@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptDataDrivenActorTriggerAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onDataDrivenActorEventSend(class Scripting::StrongTypedObjectHandle<
                                           struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&);

    // symbol:
    // ?onExplodeBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptBlockExplodedAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onExplodeBlock(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent>&);

    // symbol:
    // ?onExplosion@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptExplosionStartedAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onExplosion(class Scripting::StrongTypedObjectHandle<
                            struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>&);

    // symbol:
    // ?onHitTargetBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptTargetBlockHitAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onHitTargetBlock(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>&);

    // symbol:
    // ?onItemCompleteUse@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onItemCompleteUse(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>&);

    // symbol:
    // ?onItemDefinitionEventTriggered@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemDefinitionAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onItemDefinitionEventTriggered(class Scripting::StrongTypedObjectHandle<
                                               struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent>&);

    // symbol:
    // ?onItemReleaseUse@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemReleaseUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onItemReleaseUse(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>&);

    // symbol:
    // ?onItemStartUse@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemStartUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onItemStartUse(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>&);

    // symbol:
    // ?onItemStartUseOn@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemStartUseOnAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onItemStartUseOn(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>&);

    // symbol:
    // ?onItemStopUse@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemStopUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onItemStopUse(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>&);

    // symbol:
    // ?onItemStopUseOn@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemStopUseOnAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onItemStopUseOn(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>&);

    // symbol:
    // ?onItemUse@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onItemUse(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseAfterEvent>&);

    // symbol:
    // ?onItemUseOn@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onItemUseOn(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>&);

    // symbol:
    // ?onPlayerBreakBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerBreakBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onPlayerBreakBlock(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>&);

    // symbol:
    // ?onPlayerDimensionChange@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerDimensionChangeAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onPlayerDimensionChange(class Scripting::StrongTypedObjectHandle<
                                        struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>&);

    // symbol:
    // ?onPlayerInteractWithBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerInteractWithBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onPlayerInteractWithBlock(class Scripting::StrongTypedObjectHandle<
                                          struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&);

    // symbol:
    // ?onPlayerInteractWithEntity@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerInteractWithEntityAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onPlayerInteractWithEntity(class Scripting::StrongTypedObjectHandle<
                                           struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&);

    // symbol:
    // ?onPlayerJoin@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerJoinAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onPlayerJoin(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>&);

    // symbol:
    // ?onPlayerLeave@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerLeaveAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onPlayerLeave(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>&);

    // symbol:
    // ?onPlayerPlaceBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerPlaceBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onPlayerPlaceBlock(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>&);

    // symbol:
    // ?onPlayerSpawn@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPlayerSpawnAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onPlayerSpawn(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>&);

    // symbol:
    // ?onPopPressurePlate@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPressurePlatePopAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onPopPressurePlate(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&);

    // symbol:
    // ?onProjectileHitBlock@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptProjectileHitBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onProjectileHitBlock(class Scripting::StrongTypedObjectHandle<
                                     struct ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>&);

    // symbol:
    // ?onProjectileHitEntity@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptProjectileHitEntityAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onProjectileHitEntity(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>&);

    // symbol:
    // ?onPushButton@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptButtonPushAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void
    onPushButton(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent>&);

    // symbol:
    // ?onPushPressurePlate@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptPressurePlatePushAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onPushPressurePlate(class Scripting::StrongTypedObjectHandle<
                                    struct ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&);

    // symbol:
    // ?onServerMessage@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptServerMessageAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onServerMessage(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent>&);

    // symbol:
    // ?onTripTripWire@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptTripWireTripAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onTripTripWire(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>&);

    // symbol:
    // ?onWeatherChanged@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptWeatherChangedAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onWeatherChanged(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&);

    // symbol:
    // ?onWorldInitialize@IScriptWorldAfterEvents@ScriptModuleMinecraft@@UEAAXAEAV?$StrongTypedObjectHandle@UScriptWorldInitializeAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCVAPI void onWorldInitialize(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
