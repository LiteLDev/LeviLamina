#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEventIntermediateData; }
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
namespace ScriptModuleMinecraft { struct ScriptPlayerButtonInputAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerDimensionChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerEmoteAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInputModeChangeAfterEvent; }
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptWorldAfterEvents() = default;

    // vIndex: 1
    virtual ::Level& getLevel() const = 0;

    // vIndex: 2
    virtual void
    onGameRuleChange(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEvent>&);

    // vIndex: 3
    virtual void
    onWeatherChanged(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&);

    // vIndex: 4
    virtual void
    onWorldInitialize(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&);

    // vIndex: 5
    virtual void
    onPlayerJoin(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>&);

    // vIndex: 6
    virtual void
    onPlayerLeave(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>&);

    // vIndex: 7
    virtual void
    onActorAddEffect(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>&);

    // vIndex: 8
    virtual void onChat(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendAfterEvent>&);

    // vIndex: 9
    virtual void onActorLoad(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorLoadAfterEvent>&);

    // vIndex: 10
    virtual void
    onActorSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>&);

    // vIndex: 11
    virtual void
    onActorRemoved(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const&, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&);

    // vIndex: 12
    virtual void
    onActorHitEntity(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&);

    // vIndex: 13
    virtual void
    onActorHitBlock(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>&);

    // vIndex: 14
    virtual void
    onServerMessage(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptServerMessageAfterEvent>&);

    // vIndex: 15
    virtual void onDataDrivenActorEventSend(::Scripting::StrongTypedObjectHandle<
                                            ::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&);

    // vIndex: 16
    virtual void onActorHurt(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtAfterEvent>&);

    // vIndex: 17
    virtual void onActorHealthChanged(::Scripting::StrongTypedObjectHandle<
                                      ::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&);

    // vIndex: 18
    virtual void onActorDie(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorDieAfterEvent>&);

    // vIndex: 19
    virtual void
    onPlayerSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>&);

    // vIndex: 20
    virtual void onPlayerDimensionChange(::Scripting::StrongTypedObjectHandle<
                                         ::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>&);

    // vIndex: 21
    virtual void onPlayerInputModeChange(::Scripting::StrongTypedObjectHandle<
                                         ::ScriptModuleMinecraft::ScriptPlayerInputModeChangeAfterEvent>&);

    // vIndex: 22
    virtual void onPlayerInputPermissionCategoryChange(::Scripting::StrongTypedObjectHandle<
                                                       ::ScriptModuleMinecraft::
                                                           ScriptPlayerInputPermissionCategoryChangeAfterEvent>&);

    // vIndex: 23
    virtual void onPlayerInteractWithEntity(::Scripting::StrongTypedObjectHandle<
                                            ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&);

    // vIndex: 24
    virtual void onPlayerInteractWithBlock(::Scripting::StrongTypedObjectHandle<
                                           ::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&);

    // vIndex: 25
    virtual void onPlayerGameModeChange(::Scripting::StrongTypedObjectHandle<
                                        ::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>&);

    // vIndex: 26
    virtual void
    onPlayerEmote(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent>&);

    // vIndex: 27
    virtual void onPlayerButtonInput(::Scripting::StrongTypedObjectHandle<
                                     ::ScriptModuleMinecraft::ScriptPlayerButtonInputAfterEvent>&);

    // vIndex: 28
    virtual void
    onActivatePiston(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPistonActionAfterEvent>&);

    // vIndex: 29
    virtual void
    onActivateLever(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLeverActionAfterEvent>&);

    // vIndex: 30
    virtual void
    onPushButton(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptButtonPushAfterEvent>&);

    // vIndex: 31
    virtual void
    onExplosion(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>&);

    // vIndex: 32
    virtual void
    onExplodeBlock(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent>&);

    // vIndex: 33
    virtual void onPlayerPlaceBlock(::Scripting::StrongTypedObjectHandle<
                                    ::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>&);

    // vIndex: 34
    virtual void onPlayerBreakBlock(::Scripting::StrongTypedObjectHandle<
                                    ::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>&);

    // vIndex: 35
    virtual void onPushPressurePlate(::Scripting::StrongTypedObjectHandle<
                                     ::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&);

    // vIndex: 36
    virtual void onPopPressurePlate(::Scripting::StrongTypedObjectHandle<
                                    ::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&);

    // vIndex: 37
    virtual void
    onHitTargetBlock(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>&);

    // vIndex: 38
    virtual void
    onTripTripWire(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>&);

    // vIndex: 39
    virtual void onItemUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseAfterEvent>&);

    // vIndex: 40
    virtual void onItemUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>&);

    // vIndex: 41
    virtual void
    onItemStartUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>&);

    // vIndex: 42
    virtual void
    onItemStopUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>&);

    // vIndex: 43
    virtual void
    onItemStartUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>&);

    // vIndex: 44
    virtual void
    onItemCompleteUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>&);

    // vIndex: 45
    virtual void
    onItemReleaseUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>&);

    // vIndex: 46
    virtual void
    onItemStopUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>&);

    // vIndex: 47
    virtual void onProjectileHitEntity(::Scripting::StrongTypedObjectHandle<
                                       ::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>&);

    // vIndex: 48
    virtual void onProjectileHitBlock(::Scripting::StrongTypedObjectHandle<
                                      ::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $onGameRuleChange(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEvent>&);

    MCAPI void
    $onWeatherChanged(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&);

    MCAPI void
    $onWorldInitialize(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&);

    MCAPI void
    $onPlayerJoin(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>&);

    MCAPI void
    $onPlayerLeave(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>&);

    MCAPI void
    $onActorAddEffect(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>&);

    MCAPI void $onChat(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendAfterEvent>&);

    MCAPI void $onActorLoad(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorLoadAfterEvent>&);

    MCAPI void
    $onActorSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>&);

    MCAPI void
    $onActorRemoved(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const&, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&);

    MCAPI void
    $onActorHitEntity(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&);

    MCAPI void
    $onActorHitBlock(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>&);

    MCAPI void
    $onServerMessage(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptServerMessageAfterEvent>&);

    MCAPI void $onDataDrivenActorEventSend(::Scripting::StrongTypedObjectHandle<
                                           ::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&);

    MCAPI void $onActorHurt(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtAfterEvent>&);

    MCAPI void $onActorHealthChanged(::Scripting::StrongTypedObjectHandle<
                                     ::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&);

    MCAPI void $onActorDie(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorDieAfterEvent>&);

    MCAPI void
    $onPlayerSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>&);

    MCAPI void $onPlayerDimensionChange(::Scripting::StrongTypedObjectHandle<
                                        ::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>&);

    MCAPI void $onPlayerInputModeChange(::Scripting::StrongTypedObjectHandle<
                                        ::ScriptModuleMinecraft::ScriptPlayerInputModeChangeAfterEvent>&);

    MCAPI void $onPlayerInputPermissionCategoryChange(::Scripting::StrongTypedObjectHandle<
                                                      ::ScriptModuleMinecraft::
                                                          ScriptPlayerInputPermissionCategoryChangeAfterEvent>&);

    MCAPI void $onPlayerInteractWithEntity(::Scripting::StrongTypedObjectHandle<
                                           ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&);

    MCAPI void $onPlayerInteractWithBlock(::Scripting::StrongTypedObjectHandle<
                                          ::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&);

    MCAPI void $onPlayerGameModeChange(::Scripting::StrongTypedObjectHandle<
                                       ::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>&);

    MCAPI void
    $onPlayerEmote(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent>&);

    MCAPI void $onPlayerButtonInput(::Scripting::StrongTypedObjectHandle<
                                    ::ScriptModuleMinecraft::ScriptPlayerButtonInputAfterEvent>&);

    MCAPI void
    $onActivatePiston(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPistonActionAfterEvent>&);

    MCAPI void
    $onActivateLever(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLeverActionAfterEvent>&);

    MCAPI void
    $onPushButton(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptButtonPushAfterEvent>&);

    MCAPI void
    $onExplosion(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>&);

    MCAPI void
    $onExplodeBlock(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent>&);

    MCAPI void $onPlayerPlaceBlock(::Scripting::StrongTypedObjectHandle<
                                   ::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>&);

    MCAPI void $onPlayerBreakBlock(::Scripting::StrongTypedObjectHandle<
                                   ::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>&);

    MCAPI void $onPushPressurePlate(::Scripting::StrongTypedObjectHandle<
                                    ::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&);

    MCAPI void $onPopPressurePlate(::Scripting::StrongTypedObjectHandle<
                                   ::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&);

    MCAPI void
    $onHitTargetBlock(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>&);

    MCAPI void
    $onTripTripWire(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>&);

    MCAPI void $onItemUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseAfterEvent>&);

    MCAPI void $onItemUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>&);

    MCAPI void
    $onItemStartUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>&);

    MCAPI void
    $onItemStopUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>&);

    MCAPI void
    $onItemStartUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>&);

    MCAPI void
    $onItemCompleteUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>&);

    MCAPI void
    $onItemReleaseUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>&);

    MCAPI void
    $onItemStopUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>&);

    MCAPI void $onProjectileHitEntity(::Scripting::StrongTypedObjectHandle<
                                      ::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>&);

    MCAPI void $onProjectileHitBlock(::Scripting::StrongTypedObjectHandle<
                                     ::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
