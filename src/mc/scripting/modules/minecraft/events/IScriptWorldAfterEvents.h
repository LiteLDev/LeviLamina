#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorContainerAccessAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorDieAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHealAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHealthChangedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorItemDropAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorItemPickupAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorSneakingStateAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorTamedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorUpgradeAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptBlockContainerAccessAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptBlockExplodedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptButtonPushAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptChatSendIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptGameRuleChangeAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseOnIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseOnIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptLeverActionAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPackSettingChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakingBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerButtonInputIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerDimensionChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerEmoteIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerHotbarSelectedSlotChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInputModeChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInputPermissionCategoryChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInventoryItemChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSpawnIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSwingStartIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerUseNameTagIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePopAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePushAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptServerMessageIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptSoundCompletedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptTargetBlockHitAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptTripWireTripAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEventIntermediateData; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptWorldAfterEvents {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptWorldAfterEvents() = default;

    virtual ::Level& getLevel() const = 0;

    virtual void onChat(::std::shared_ptr<::ScriptModuleMinecraft::ScriptChatSendIntermediateData>& eventData);

    virtual void onGameRuleChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>& eventData
    );

    virtual void onPackSettingChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData>& packSettingChangeEvent
    );

    virtual void
    onServerMessage(::std::shared_ptr<::ScriptModuleMinecraft::ScriptServerMessageIntermediateData>& eventData);

    virtual void onSoundCompleted(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData>& eventData
    );

    virtual void onWeatherChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>& eventData
    );

    virtual void onWorldInitialize(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>& eventData
    );

    virtual void onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
    );

    virtual void onActorContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
    );

    virtual void onActorContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
    );

    virtual void
    onActorDie(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>& eventData);

    virtual void
    onActorHeal(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>& eventData);

    virtual void onActorHealthChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>& eventData
    );

    virtual void onActorHitBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>& eventData
    );

    virtual void onActorHitEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData>& eventData
    );

    virtual void
    onActorHurt(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>& eventData);

    virtual void onActorItemDrop(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>& eventData
    );

    virtual void onActorItemPickup(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>& eventData
    );

    virtual void
    onActorLoad(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData);

    virtual void
    onActorRemoved(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData>& eventData);

    virtual void
    onActorSpawn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData);

    virtual void onActorStartSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    );

    virtual void onActorStopSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    );

    virtual void
    onActorTamed(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorTamedAfterEventIntermediateData>& eventData);

#ifdef LL_PLAT_S
    virtual void onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>&
            dataDrivenActorEventSend
    );
#else // LL_PLAT_C
    virtual void onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>& eventData
    );
#endif

    virtual void
    onActorUpgrade(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>& eventData);

    virtual void onPlayerButtonInput(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerButtonInputIntermediateData>& inputEvent
    );

    virtual void onPlayerDimensionChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData>& eventData
    );

    virtual void
    onPlayerEmote(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData>& emoteEvent);

    virtual void onPlayerGameModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData>& eventData
    );

    virtual void onPlayerHotbarSelectedSlotChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData>& hotbarEvent
    );

    virtual void onPlayerInputModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>& eventData
    );

    virtual void onPlayerInputPermissionCategoryChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>& eventData
    );

    virtual void onPlayerInteractWithBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>& eventData
    );

    virtual void onPlayerInteractWithEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>& eventData
    );

    virtual void onPlayerInventoryItemChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>& inventoryEvent
    );

    virtual void
    onPlayerJoin(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>& eventData);

    virtual void
    onPlayerLeave(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>& eventData);

    virtual void
    onPlayerSpawn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>& eventData);

    virtual void onPlayerSwingStart(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>& playerSwingStartEvent
    );

    virtual void onPlayerUseNameTag(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>& useNameTagEvent
    );

    virtual void onActivateLever(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>& leverEvent
    );

    virtual void onActivatePiston(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>& eventData
    );

    virtual void onBlockContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    );

    virtual void onBlockContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    );

    virtual void onExplodeBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>& eventData
    );

    virtual void onExplosion(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>& eventData
    );

    virtual void onHitTargetBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>& eventData
    );

    virtual void onPlayerBreakBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>& eventData
    );

    virtual void onPlayerCancelBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    );

    virtual void onPlayerPlaceBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>& eventData
    );

    virtual void onPlayerStartBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    );

    virtual void onPopPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>& eventData
    );

    virtual void
    onPushButton(::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>& eventData);

    virtual void onPushPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>& eventData
    );

    virtual void
    onTripTripWire(::std::shared_ptr<::ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>& eventData);

#ifdef LL_PLAT_S
    virtual void
    onItemCompleteUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>& itemEvent);
#else // LL_PLAT_C
    virtual void
    onItemCompleteUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>& eventData);
#endif

#ifdef LL_PLAT_S
    virtual void
    onItemReleaseUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>& itemEvent);
#else // LL_PLAT_C
    virtual void
    onItemReleaseUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>& eventData);
#endif

#ifdef LL_PLAT_S
    virtual void
    onItemStartUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>& itemEvent);
#else // LL_PLAT_C
    virtual void
    onItemStartUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>& eventData);
#endif

    virtual void
    onItemStartUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>& eventData);

#ifdef LL_PLAT_S
    virtual void
    onItemStopUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>& itemEvent);
#else // LL_PLAT_C
    virtual void
    onItemStopUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>& eventData);
#endif

    virtual void
    onItemStopUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>& eventData);

    virtual void onItemUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseIntermediateData>& eventData);

    virtual void onItemUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseOnIntermediateData>& eventData);

    virtual void
    onProjectileHitBlock(::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData);

    virtual void
    onProjectileHitEntity(::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onChat(::std::shared_ptr<::ScriptModuleMinecraft::ScriptChatSendIntermediateData>& eventData);

    MCFOLD void $onGameRuleChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPackSettingChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData>& packSettingChangeEvent
    );

    MCFOLD void
    $onServerMessage(::std::shared_ptr<::ScriptModuleMinecraft::ScriptServerMessageIntermediateData>& eventData);

    MCFOLD void $onSoundCompleted(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onActorContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onActorContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
    );

    MCFOLD void
    $onActorDie(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>& eventData);

    MCFOLD void
    $onActorHeal(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>& eventData);

    MCFOLD void $onActorHealthChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onActorItemDrop(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onActorItemPickup(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>& eventData
    );

    MCFOLD void
    $onActorLoad(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData);

    MCFOLD void
    $onActorSpawn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData);

    MCFOLD void $onActorStartSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onActorStopSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    );

    MCFOLD void
    $onActorTamed(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorTamedAfterEventIntermediateData>& eventData);

    MCFOLD void $onActorUpgrade(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPlayerButtonInput(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerButtonInputIntermediateData>& inputEvent
    );

    MCFOLD void $onPlayerDimensionChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData>& eventData
    );

    MCFOLD void
    $onPlayerEmote(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData>& emoteEvent);

    MCFOLD void $onPlayerGameModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData>& eventData
    );

    MCFOLD void $onPlayerHotbarSelectedSlotChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData>& hotbarEvent
    );

    MCFOLD void $onPlayerInputModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>& eventData
    );

    MCFOLD void $onPlayerInputPermissionCategoryChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>& eventData
    );

    MCFOLD void $onPlayerInteractWithBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>& eventData
    );

    MCFOLD void $onPlayerInteractWithEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>& eventData
    );

    MCFOLD void $onPlayerInventoryItemChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>& inventoryEvent
    );

    MCFOLD void
    $onPlayerSpawn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>& eventData);

    MCFOLD void $onPlayerSwingStart(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>& playerSwingStartEvent
    );

    MCFOLD void $onPlayerUseNameTag(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>& useNameTagEvent
    );

    MCFOLD void $onActivateLever(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>& leverEvent
    );

    MCFOLD void $onActivatePiston(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onBlockContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onBlockContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onExplodeBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onExplosion(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onHitTargetBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPlayerBreakBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPlayerCancelBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPlayerPlaceBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPlayerStartBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPopPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>& eventData
    );

    MCFOLD void
    $onPushButton(::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>& eventData);

    MCFOLD void $onPushPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onTripTripWire(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>& eventData
    );

    MCFOLD void
    $onItemStartUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>& eventData);

    MCFOLD void
    $onItemStopUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>& eventData);

    MCFOLD void $onItemUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseIntermediateData>& eventData);

    MCFOLD void
    $onProjectileHitBlock(::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData);

    MCFOLD void
    $onProjectileHitEntity(::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData);


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
