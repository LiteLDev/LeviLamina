#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

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
namespace ScriptModuleMinecraft { struct ScriptBlockExplodedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptButtonPushAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEventIntermediateData; }
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
namespace ScriptModuleMinecraft { struct ScriptPackSettingChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerButtonInputAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerDimensionChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerEmoteAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerHotbarSelectedSlotChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInputModeChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInputPermissionCategoryChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInventoryItemChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSwingStartAfterEvent; }
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
    virtual void onActorRemoved(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const&,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&
    );

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
    virtual void onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>&
    );

    // vIndex: 16
    virtual void onActorHurt(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtAfterEvent>&);

    // vIndex: 17
    virtual void onActorHealthChanged(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&
    );

    // vIndex: 18
    virtual void onActorDie(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorDieAfterEvent>&);

    // vIndex: 19
    virtual void onPackSettingChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent>&
    );

    // vIndex: 20
    virtual void
    onPlayerSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>&);

    // vIndex: 21
    virtual void onPlayerDimensionChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>&
    );

    // vIndex: 22
    virtual void onPlayerInputModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeAfterEvent>&
    );

    // vIndex: 23
    virtual void onPlayerInputPermissionCategoryChange(
        ::Scripting::StrongTypedObjectHandle<
            ::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>&
    );

    // vIndex: 24
    virtual void onPlayerInteractWithEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&
    );

    // vIndex: 25
    virtual void onPlayerInteractWithBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&
    );

    // vIndex: 26
    virtual void onPlayerGameModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>&
    );

    // vIndex: 27
    virtual void
    onPlayerEmote(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent>&);

    // vIndex: 28
    virtual void onPlayerButtonInput(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerButtonInputAfterEvent>&
    );

    // vIndex: 29
    virtual void onPlayerInventoryItemChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent>&
    );

    // vIndex: 30
    virtual void onPlayerHotbarSelectedSlotChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeAfterEvent>&
    );

    // vIndex: 31
    virtual void onPlayerSwingStart(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSwingStartAfterEvent>&
    );

    // vIndex: 32
    virtual void
    onActivatePiston(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPistonActionAfterEvent>&);

    // vIndex: 33
    virtual void
    onActivateLever(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLeverActionAfterEvent>&);

    // vIndex: 34
    virtual void
    onPushButton(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptButtonPushAfterEvent>&);

    // vIndex: 35
    virtual void
    onExplosion(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>&);

    // vIndex: 36
    virtual void
    onExplodeBlock(::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>&);

    // vIndex: 37
    virtual void onPlayerPlaceBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>&
    );

    // vIndex: 38
    virtual void onPlayerBreakBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>&
    );

    // vIndex: 39
    virtual void onPushPressurePlate(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&
    );

    // vIndex: 40
    virtual void onPopPressurePlate(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&
    );

    // vIndex: 41
    virtual void
    onHitTargetBlock(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>&);

    // vIndex: 42
    virtual void
    onTripTripWire(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>&);

    // vIndex: 43
    virtual void onItemUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseAfterEvent>&);

    // vIndex: 44
    virtual void onItemUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>&);

    // vIndex: 45
    virtual void
    onItemStartUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>&);

    // vIndex: 46
    virtual void
    onItemStopUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>&);

    // vIndex: 47
    virtual void
    onItemStartUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>&);

    // vIndex: 48
    virtual void
    onItemCompleteUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>&);

    // vIndex: 49
    virtual void
    onItemReleaseUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>&);

    // vIndex: 50
    virtual void
    onItemStopUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>&);

    // vIndex: 51
    virtual void onProjectileHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>&
    );

    // vIndex: 52
    virtual void onProjectileHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>&
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $onGameRuleChange(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEvent>&);

    MCNAPI void
    $onActorAddEffect(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>&);

    MCNAPI void $onChat(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendAfterEvent>&);

    MCNAPI void $onActorLoad(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorLoadAfterEvent>&);

    MCNAPI void
    $onActorSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>&);

    MCNAPI void
    $onServerMessage(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptServerMessageAfterEvent>&);

    MCNAPI void $onActorHealthChanged(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&
    );

    MCNAPI void $onActorDie(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorDieAfterEvent>&);

    MCNAPI void $onPackSettingChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent>&
    );

    MCNAPI void
    $onPlayerSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>&);

    MCNAPI void $onPlayerDimensionChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>&
    );

    MCNAPI void $onPlayerInputModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeAfterEvent>&
    );

    MCNAPI void $onPlayerInputPermissionCategoryChange(
        ::Scripting::StrongTypedObjectHandle<
            ::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>&
    );

    MCNAPI void $onPlayerInteractWithEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&
    );

    MCNAPI void $onPlayerInteractWithBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&
    );

    MCNAPI void $onPlayerGameModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>&
    );

    MCNAPI void
    $onPlayerEmote(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent>&);

    MCNAPI void $onPlayerButtonInput(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerButtonInputAfterEvent>&
    );

    MCNAPI void $onPlayerInventoryItemChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent>&
    );

    MCNAPI void $onPlayerHotbarSelectedSlotChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeAfterEvent>&
    );

    MCNAPI void $onPlayerSwingStart(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSwingStartAfterEvent>&
    );

    MCNAPI void
    $onActivatePiston(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPistonActionAfterEvent>&);

    MCNAPI void
    $onActivateLever(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLeverActionAfterEvent>&);

    MCNAPI void
    $onPushButton(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptButtonPushAfterEvent>&);

    MCNAPI void
    $onExplosion(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>&);

    MCNAPI void
    $onExplodeBlock(::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>&);

    MCNAPI void $onPlayerPlaceBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>&
    );

    MCNAPI void $onPlayerBreakBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>&
    );

    MCNAPI void $onPushPressurePlate(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&
    );

    MCNAPI void $onPopPressurePlate(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&
    );

    MCNAPI void
    $onHitTargetBlock(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>&);

    MCNAPI void
    $onTripTripWire(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>&);

    MCNAPI void $onItemUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseAfterEvent>&);

    MCNAPI void
    $onItemStartUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>&);

    MCNAPI void
    $onItemStopUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>&);

    MCNAPI void $onProjectileHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>&
    );

    MCNAPI void $onProjectileHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
