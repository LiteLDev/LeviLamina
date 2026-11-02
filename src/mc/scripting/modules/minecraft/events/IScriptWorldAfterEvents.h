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
namespace ScriptModuleMinecraft { struct ScriptPlayerCraftRecipeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerCursorItemTransferIntermediateData; }
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
namespace ScriptModuleMinecraft { struct ScriptWorldClockPausedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptWorldClockResumedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptWorldClockTimeMarkerAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptWorldClockTimeModifiedAfterEventIntermediateData; }
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

    virtual void onPlayerCursorItemGrab(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerCursorItemTransferIntermediateData>& eventData
    );

    virtual void onPlayerCursorItemRelease(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerCursorItemTransferIntermediateData>& eventData
    );

    virtual void
    onPlayerCraftRecipe(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerCraftRecipeIntermediateData>& eventData);

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

    virtual void onWorldClockTimeModified(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockTimeModifiedAfterEventIntermediateData>&
            clockTimeModifiedEvent
    );

    virtual void onWorldClockPaused(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockPausedAfterEventIntermediateData>& clockPausedEvent
    );

    virtual void onWorldClockResumed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockResumedAfterEventIntermediateData>& clockResumedEvent
    );

    virtual void onWorldClockTimeMarker(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockTimeMarkerAfterEventIntermediateData>&
            clockTimeMarkerEvent
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onChat(::std::shared_ptr<::ScriptModuleMinecraft::ScriptChatSendIntermediateData>& eventData);

    MCNAPI void $onGameRuleChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onPackSettingChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData>& packSettingChangeEvent
    );

    MCNAPI void
    $onServerMessage(::std::shared_ptr<::ScriptModuleMinecraft::ScriptServerMessageIntermediateData>& eventData);

    MCNAPI void $onSoundCompleted(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onActorContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onActorContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
    );

    MCNAPI void
    $onActorDie(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>& eventData);

    MCNAPI void
    $onActorHeal(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>& eventData);

    MCNAPI void $onActorHealthChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onActorItemDrop(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onActorItemPickup(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>& eventData
    );

    MCNAPI void
    $onActorLoad(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData);

    MCNAPI void
    $onActorSpawn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData);

    MCNAPI void $onActorStartSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onActorStopSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    );

    MCNAPI void
    $onActorTamed(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorTamedAfterEventIntermediateData>& eventData);

    MCNAPI void $onActorUpgrade(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onPlayerButtonInput(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerButtonInputIntermediateData>& inputEvent
    );

    MCNAPI void $onPlayerDimensionChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData>& eventData
    );

    MCNAPI void
    $onPlayerEmote(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData>& emoteEvent);

    MCNAPI void $onPlayerGameModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData>& eventData
    );

    MCNAPI void $onPlayerHotbarSelectedSlotChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData>& hotbarEvent
    );

    MCNAPI void $onPlayerInputModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>& eventData
    );

    MCNAPI void $onPlayerInputPermissionCategoryChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>& eventData
    );

    MCNAPI void $onPlayerInteractWithBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>& eventData
    );

    MCNAPI void $onPlayerInteractWithEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>& eventData
    );

    MCNAPI void $onPlayerInventoryItemChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>& inventoryEvent
    );

    MCNAPI void $onPlayerCursorItemGrab(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerCursorItemTransferIntermediateData>& eventData
    );

    MCNAPI void $onPlayerCursorItemRelease(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerCursorItemTransferIntermediateData>& eventData
    );

    MCNAPI void $onPlayerCraftRecipe(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerCraftRecipeIntermediateData>& eventData
    );

    MCNAPI void
    $onPlayerSpawn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>& eventData);

    MCNAPI void $onPlayerSwingStart(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>& playerSwingStartEvent
    );

    MCNAPI void $onPlayerUseNameTag(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>& useNameTagEvent
    );

    MCNAPI void $onActivateLever(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>& leverEvent
    );

    MCNAPI void $onActivatePiston(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onBlockContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onBlockContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onExplodeBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onExplosion(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onHitTargetBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onPlayerBreakBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onPlayerCancelBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onPlayerPlaceBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onPlayerStartBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onPopPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>& eventData
    );

    MCNAPI void
    $onPushButton(::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>& eventData);

    MCNAPI void $onPushPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onTripTripWire(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>& eventData
    );

    MCNAPI void
    $onItemStartUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>& eventData);

    MCNAPI void
    $onItemStopUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>& eventData);

    MCNAPI void $onItemUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseIntermediateData>& eventData);

    MCNAPI void
    $onProjectileHitBlock(::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData);

    MCNAPI void
    $onProjectileHitEntity(::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData);

    MCNAPI void $onWorldClockTimeModified(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockTimeModifiedAfterEventIntermediateData>&
            clockTimeModifiedEvent
    );

    MCNAPI void $onWorldClockPaused(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockPausedAfterEventIntermediateData>& clockPausedEvent
    );

    MCNAPI void $onWorldClockResumed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockResumedAfterEventIntermediateData>& clockResumedEvent
    );

    MCNAPI void $onWorldClockTimeMarker(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockTimeMarkerAfterEventIntermediateData>&
            clockTimeMarkerEvent
    );


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
