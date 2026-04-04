#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorDieAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHealAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHealthChangedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorItemDropAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorItemPickupAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorLoadAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockExplodedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptButtonPushAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptChatSendAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptGameRuleChangeAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptLeverActionAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPackSettingChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockAfterEventIntermediateData; }
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
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSwingStartAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerUseNameTagAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePopAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePushAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptServerMessageAfterEvent; }
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

    virtual void onGameRuleChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>& eventData
    );

    virtual void onWeatherChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>& eventData
    );

    virtual void onWorldInitialize(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>& eventData
    );

    virtual void
    onPlayerJoin(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>& eventData);

    virtual void
    onPlayerLeave(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>& eventData);

    virtual void onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
    );

    virtual void
    onChat(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendAfterEvent>& eventData);

    virtual void
    onActorLoad(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorLoadAfterEvent>& eventData);

    virtual void
    onActorSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>& eventData);

    virtual void onActorRemoved(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const&           removedActor,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>& eventData
    );

    virtual void onActorHitEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData>& eventData
    );

    virtual void onActorHitBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>& eventData
    );

    virtual void onServerMessage(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptServerMessageAfterEvent>& eventData
    );

    virtual void onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>&
            dataDrivenActorEventSend
    );

    virtual void
    onActorHeal(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>& eventData);

    virtual void
    onActorHurt(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>& eventData);

    virtual void onActorHealthChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>& eventData
    );

    virtual void
    onActorDie(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>& eventData);

    virtual void onPackSettingChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent>&
            packSettingChangeEvent
    );

    virtual void onActorItemDrop(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>& eventData
    );

    virtual void onActorItemPickup(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>& eventData
    );

    virtual void onPlayerSpawn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>& eventData
    );

    virtual void onPlayerDimensionChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>& eventData
    );

    virtual void onPlayerInputModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeAfterEvent>& eventData
    );

    virtual void onPlayerInputPermissionCategoryChange(
        ::Scripting::StrongTypedObjectHandle<
            ::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>& eventData
    );

    virtual void onPlayerInteractWithEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&
            eventData
    );

    virtual void onPlayerInteractWithBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&
            eventData
    );

    virtual void onPlayerGameModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>& eventData
    );

    virtual void onPlayerEmote(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent>& emoteEvent
    );

    virtual void onPlayerButtonInput(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerButtonInputAfterEvent>& inputEvent
    );

    virtual void onPlayerInventoryItemChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent>&
            inventoryEvent
    );

    virtual void onPlayerHotbarSelectedSlotChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeAfterEvent>&
            hotbarEvent
    );

    virtual void onPlayerUseNameTag(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent>& useNameTagEvent
    );

    virtual void onPlayerSwingStart(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSwingStartAfterEvent>&
            playerSwingStartEvent
    );

    virtual void onActivatePiston(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>& eventData
    );

    virtual void onActivateLever(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>& leverEvent
    );

    virtual void
    onPushButton(::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>& eventData);

    virtual void onExplosion(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>& eventData
    );

    virtual void onExplodeBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>& eventData
    );

    virtual void onPlayerPlaceBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>& eventData
    );

    virtual void onPlayerBreakBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>& eventData
    );

    virtual void onPushPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>& eventData
    );

    virtual void onPopPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>& eventData
    );

    virtual void onHitTargetBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>& eventData
    );

    virtual void
    onTripTripWire(::std::shared_ptr<::ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>& eventData);

    virtual void
    onItemUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseAfterEvent>& eventData);

    virtual void
    onItemUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& itemEvent);

    virtual void onItemStartUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>& eventData
    );

    virtual void onItemStopUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>& eventData
    );

    virtual void onItemStartUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>& itemEvent
    );

    virtual void onItemCompleteUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>& itemEvent
    );

    virtual void onItemReleaseUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>& itemEvent
    );

    virtual void onItemStopUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>& itemEvent
    );

    virtual void onProjectileHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>& eventData
    );

    virtual void onProjectileHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>& eventData
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onGameRuleChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
    );

    MCFOLD void
    $onChat(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendAfterEvent>& eventData);

    MCFOLD void
    $onActorLoad(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorLoadAfterEvent>& eventData);

    MCFOLD void
    $onActorSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>& eventData);

    MCFOLD void $onServerMessage(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptServerMessageAfterEvent>& eventData
    );

    MCFOLD void
    $onActorHeal(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>& eventData);

    MCFOLD void $onActorHealthChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>& eventData
    );

    MCFOLD void
    $onActorDie(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>& eventData);

    MCFOLD void $onPackSettingChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent>&
            packSettingChangeEvent
    );

    MCFOLD void $onActorItemDrop(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onActorItemPickup(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPlayerSpawn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>& eventData
    );

    MCFOLD void $onPlayerDimensionChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>& eventData
    );

    MCFOLD void $onPlayerInputModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeAfterEvent>& eventData
    );

    MCFOLD void $onPlayerInputPermissionCategoryChange(
        ::Scripting::StrongTypedObjectHandle<
            ::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>& eventData
    );

    MCFOLD void $onPlayerInteractWithEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&
            eventData
    );

    MCFOLD void $onPlayerInteractWithBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&
            eventData
    );

    MCFOLD void $onPlayerGameModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>& eventData
    );

    MCFOLD void $onPlayerEmote(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent>& emoteEvent
    );

    MCFOLD void $onPlayerButtonInput(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerButtonInputAfterEvent>& inputEvent
    );

    MCFOLD void $onPlayerInventoryItemChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent>&
            inventoryEvent
    );

    MCFOLD void $onPlayerHotbarSelectedSlotChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeAfterEvent>&
            hotbarEvent
    );

    MCFOLD void $onPlayerUseNameTag(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent>& useNameTagEvent
    );

    MCFOLD void $onPlayerSwingStart(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSwingStartAfterEvent>&
            playerSwingStartEvent
    );

    MCFOLD void $onActivatePiston(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onActivateLever(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>& leverEvent
    );

    MCFOLD void
    $onPushButton(::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>& eventData);

    MCFOLD void $onExplosion(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onExplodeBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPlayerPlaceBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPlayerBreakBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPushPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPopPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onHitTargetBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onTripTripWire(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>& eventData
    );

    MCFOLD void
    $onItemUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseAfterEvent>& eventData);

    MCFOLD void $onItemStartUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>& eventData
    );

    MCFOLD void $onItemStopUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>& eventData
    );

    MCFOLD void $onProjectileHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>& eventData
    );

    MCFOLD void $onProjectileHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>& eventData
    );


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
