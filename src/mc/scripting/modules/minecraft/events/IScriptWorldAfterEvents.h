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
namespace ScriptModuleMinecraft { struct ScriptPlayerUseNameTagAfterEvent; }
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
    virtual ~IScriptWorldAfterEvents() = default;

    virtual ::Level& getLevel() const = 0;

    virtual void
    onGameRuleChange(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEvent>&);

    virtual void
    onWeatherChanged(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&);

    virtual void
    onWorldInitialize(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&);

    virtual void
    onPlayerJoin(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>&);

    virtual void
    onPlayerLeave(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>&);

    virtual void
    onActorAddEffect(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>&);

    virtual void onChat(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendAfterEvent>&);

    virtual void onActorLoad(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorLoadAfterEvent>&);

    virtual void
    onActorSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>&);

    virtual void onActorRemoved(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const&,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&
    );

    virtual void
    onActorHitEntity(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&);

    virtual void
    onActorHitBlock(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>&);

    virtual void
    onServerMessage(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptServerMessageAfterEvent>&);

    virtual void onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>&
    );

    virtual void onActorHurt(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtAfterEvent>&);

    virtual void onActorHealthChanged(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&
    );

    virtual void onActorDie(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorDieAfterEvent>&);

    virtual void onPackSettingChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent>&
    );

    virtual void
    onPlayerSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>&);

    virtual void onPlayerDimensionChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>&
    );

    virtual void onPlayerInputModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeAfterEvent>&
    );

    virtual void onPlayerInputPermissionCategoryChange(
        ::Scripting::StrongTypedObjectHandle<
            ::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>&
    );

    virtual void onPlayerInteractWithEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&
    );

    virtual void onPlayerInteractWithBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&
    );

    virtual void onPlayerGameModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>&
    );

    virtual void
    onPlayerEmote(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent>&);

    virtual void onPlayerButtonInput(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerButtonInputAfterEvent>&
    );

    virtual void onPlayerInventoryItemChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent>&
    );

    virtual void onPlayerHotbarSelectedSlotChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeAfterEvent>&
    );

    virtual void onPlayerUseNameTag(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent>&
    );

    virtual void onPlayerSwingStart(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSwingStartAfterEvent>&
    );

    virtual void
    onActivatePiston(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPistonActionAfterEvent>&);

    virtual void
    onActivateLever(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLeverActionAfterEvent>&);

    virtual void
    onPushButton(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptButtonPushAfterEvent>&);

    virtual void
    onExplosion(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>&);

    virtual void
    onExplodeBlock(::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>&);

    virtual void onPlayerPlaceBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>&
    );

    virtual void onPlayerBreakBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>&
    );

    virtual void onPushPressurePlate(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&
    );

    virtual void onPopPressurePlate(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&
    );

    virtual void
    onHitTargetBlock(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>&);

    virtual void
    onTripTripWire(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>&);

    virtual void onItemUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseAfterEvent>&);

    virtual void onItemUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>&);

    virtual void
    onItemStartUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>&);

    virtual void
    onItemStopUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>&);

    virtual void
    onItemStartUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>&);

    virtual void
    onItemCompleteUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>&);

    virtual void
    onItemReleaseUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>&);

    virtual void
    onItemStopUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>&);

    virtual void onProjectileHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>&
    );

    virtual void onProjectileHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>&
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void
    $onGameRuleChange(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEvent>&);

    MCFOLD void
    $onActorAddEffect(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>&);

    MCFOLD void $onChat(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendAfterEvent>&);

    MCFOLD void $onActorLoad(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorLoadAfterEvent>&);

    MCFOLD void
    $onActorSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>&);

    MCFOLD void
    $onServerMessage(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptServerMessageAfterEvent>&);

    MCFOLD void $onActorHealthChanged(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&
    );

    MCFOLD void $onActorDie(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorDieAfterEvent>&);

    MCFOLD void $onPackSettingChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent>&
    );

    MCFOLD void
    $onPlayerSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>&);

    MCFOLD void $onPlayerDimensionChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>&
    );

    MCFOLD void $onPlayerInputModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeAfterEvent>&
    );

    MCFOLD void $onPlayerInputPermissionCategoryChange(
        ::Scripting::StrongTypedObjectHandle<
            ::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>&
    );

    MCFOLD void $onPlayerInteractWithEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&
    );

    MCFOLD void $onPlayerInteractWithBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&
    );

    MCFOLD void $onPlayerGameModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>&
    );

    MCFOLD void
    $onPlayerEmote(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent>&);

    MCFOLD void $onPlayerButtonInput(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerButtonInputAfterEvent>&
    );

    MCFOLD void $onPlayerInventoryItemChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent>&
    );

    MCFOLD void $onPlayerHotbarSelectedSlotChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeAfterEvent>&
    );

    MCFOLD void $onPlayerUseNameTag(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent>&
    );

    MCFOLD void $onPlayerSwingStart(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSwingStartAfterEvent>&
    );

    MCFOLD void
    $onActivatePiston(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPistonActionAfterEvent>&);

    MCFOLD void
    $onActivateLever(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLeverActionAfterEvent>&);

    MCFOLD void
    $onPushButton(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptButtonPushAfterEvent>&);

    MCFOLD void
    $onExplosion(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>&);

    MCFOLD void
    $onExplodeBlock(::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>&);

    MCFOLD void $onPlayerPlaceBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>&
    );

    MCFOLD void $onPlayerBreakBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>&
    );

    MCFOLD void $onPushPressurePlate(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&
    );

    MCFOLD void $onPopPressurePlate(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&
    );

    MCFOLD void
    $onHitTargetBlock(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>&);

    MCFOLD void
    $onTripTripWire(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>&);

    MCFOLD void $onItemUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseAfterEvent>&);

    MCFOLD void
    $onItemStartUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>&);

    MCFOLD void
    $onItemStopUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>&);

    MCFOLD void $onProjectileHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>&
    );

    MCFOLD void $onProjectileHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>&
    );


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
