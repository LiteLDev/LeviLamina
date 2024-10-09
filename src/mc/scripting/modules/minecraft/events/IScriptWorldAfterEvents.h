#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

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
namespace ScriptModuleMinecraft { struct ScriptGameRuleChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseAfterEvent; }
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
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInputPermissionCategoryChangeAfterEvent; }
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
    // vIndex: 0
    virtual ~IScriptWorldAfterEvents() = default;

    // vIndex: 1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2
    virtual void onGameRuleChange(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptGameRuleChangeAfterEvent>&);

    // vIndex: 3
    virtual void onWeatherChanged(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&);

    // vIndex: 4
    virtual void onWorldInitialize(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&);

    // vIndex: 5
    virtual void
    onPlayerJoin(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>&);

    // vIndex: 6
    virtual void
    onPlayerLeave(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>&);

    // vIndex: 7
    virtual void onActorAddEffect(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent>&);

    // vIndex: 8
    virtual void
    onChat(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent>&);

    // vIndex: 9
    virtual void
    onActorLoad(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorLoadAfterEvent>&);

    // vIndex: 10
    virtual void
    onActorSpawn(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>&);

    // vIndex: 11
    virtual void
    onActorRemoved(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const&, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&);

    // vIndex: 12
    virtual void onActorHitEntity(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&);

    // vIndex: 13
    virtual void onActorHitBlock(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>&);

    // vIndex: 14
    virtual void onServerMessage(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent>&);

    // vIndex: 15
    virtual void onDataDrivenActorEventSend(class Scripting::StrongTypedObjectHandle<
                                            struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&);

    // vIndex: 16
    virtual void
    onActorHurt(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>&);

    // vIndex: 17
    virtual void onActorHealthChanged(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&);

    // vIndex: 18
    virtual void
    onActorDie(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorDieAfterEvent>&);

    // vIndex: 19
    virtual void
    onPlayerSpawn(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>&);

    // vIndex: 20
    virtual void onPlayerDimensionChange(class Scripting::StrongTypedObjectHandle<
                                         struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>&);

    // vIndex: 21
    virtual void onPlayerInputPermissionCategoryChange(class Scripting::StrongTypedObjectHandle<
                                                       struct ScriptModuleMinecraft::
                                                           ScriptPlayerInputPermissionCategoryChangeAfterEvent>&);

    // vIndex: 22
    virtual void onPlayerInteractWithEntity(class Scripting::StrongTypedObjectHandle<
                                            struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&);

    // vIndex: 23
    virtual void onPlayerInteractWithBlock(class Scripting::StrongTypedObjectHandle<
                                           struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&);

    // vIndex: 24
    virtual void onPlayerGameModeChange(class Scripting::StrongTypedObjectHandle<
                                        struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>&);

    // vIndex: 25
    virtual void onActivatePiston(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent>&);

    // vIndex: 26
    virtual void onActivateLever(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent>&);

    // vIndex: 27
    virtual void
    onPushButton(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent>&);

    // vIndex: 28
    virtual void onExplosion(class Scripting::StrongTypedObjectHandle<
                             struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>&);

    // vIndex: 29
    virtual void onExplodeBlock(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent>&);

    // vIndex: 30
    virtual void onPlayerPlaceBlock(class Scripting::StrongTypedObjectHandle<
                                    struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>&);

    // vIndex: 31
    virtual void onPlayerBreakBlock(class Scripting::StrongTypedObjectHandle<
                                    struct ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>&);

    // vIndex: 32
    virtual void onPushPressurePlate(class Scripting::StrongTypedObjectHandle<
                                     struct ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&);

    // vIndex: 33
    virtual void onPopPressurePlate(class Scripting::StrongTypedObjectHandle<
                                    struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&);

    // vIndex: 34
    virtual void onHitTargetBlock(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>&);

    // vIndex: 35
    virtual void onTripTripWire(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>&);

    // vIndex: 36
    virtual void
    onItemUse(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseAfterEvent>&);

    // vIndex: 37
    virtual void
    onItemUseOn(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>&);

    // vIndex: 38
    virtual void onItemStartUseOn(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>&);

    // vIndex: 39
    virtual void onItemStopUseOn(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>&);

    // vIndex: 40
    virtual void onItemStartUse(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>&);

    // vIndex: 41
    virtual void onItemCompleteUse(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>&);

    // vIndex: 42
    virtual void onItemReleaseUse(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>&);

    // vIndex: 43
    virtual void
    onItemStopUse(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>&);

    // vIndex: 44
    virtual void onProjectileHitEntity(class Scripting::StrongTypedObjectHandle<
                                       struct ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>&);

    // vIndex: 45
    virtual void onProjectileHitBlock(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
