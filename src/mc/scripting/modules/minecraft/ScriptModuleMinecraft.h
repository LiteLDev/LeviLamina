#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/enums/ClientInputLockCategory.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/script_engine/Closure.h"
#include "mc/external/scripting/script_engine/Generator.h"
#include "mc/external/scripting/script_engine/Promise.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/ScriptTimeOfDay.h"
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorLifetimeState.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/scripting/modules/minecraft/components/ScriptComponentType.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentEntityFallOnAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentOnPlaceAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentPlayerDestroyAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentPlayerInteractAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentRandomTickAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentStepOffAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentStepOnAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentTickAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptEventSource.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptTickSignal.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAsyncEventMetadata.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptDisplayObjectiveSlotId.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptObjectiveSortOrderType.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptScoreboardIdentityType_t.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/AnimationMode.h"
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/FeedItem.h"
#include "mc/world/actor/PaletteColor.h"
#include "mc/world/actor/selectors/ActorSelectorType.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/WatchdogTerminateReason.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemLockMode.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/enchanting/Enchant.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/block/CompoundBlockVolumeAction.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"
#include "mc/world/level/block/SimpleBlockVolume.h"
#include "mc/world/level/block/actor/PistonState.h"
#include "mc/world/level/block/actor/SignTextSide.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"
#include "mc/world/persistence/DynamicPropertyDefinePropertyError.h"
#include "mc/world/scores/ObjectiveSortOrder.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { struct BlockPlayerPlacingEvent; }
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class AttributeScriptActorComponent; }
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class BaseScriptBlockLiquidContainerComponent; }
namespace ScriptModuleMinecraft { class IComponentFactory; }
namespace ScriptModuleMinecraft { class IScriptBlockProperty; }
namespace ScriptModuleMinecraft { class IScriptItemComponentFactory; }
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentRegistry; }
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentSignalCollection; }
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class MovementScriptActorComponent; }
namespace ScriptModuleMinecraft { class NavigationScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptActorFilter; }
namespace ScriptModuleMinecraft { class ScriptActorIterator; }
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace ScriptModuleMinecraft { class ScriptActorTypeIterator; }
namespace ScriptModuleMinecraft { class ScriptAddRiderComponent; }
namespace ScriptModuleMinecraft { class ScriptAgeableComponent; }
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace ScriptModuleMinecraft { class ScriptBiomeTypes; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockAreaSize; }
namespace ScriptModuleMinecraft { class ScriptBlockComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptBlockFilter; }
namespace ScriptModuleMinecraft { class ScriptBlockInventoryComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockInventoryComponentContainer; }
namespace ScriptModuleMinecraft { class ScriptBlockLavaContainerComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockPistonComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockPotionContainerComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptBlockRecordPlayerComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockRecordPlayerComponentV010; }
namespace ScriptModuleMinecraft { class ScriptBlockSignComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockSnowContainerComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockStateType; }
namespace ScriptModuleMinecraft { class ScriptBlockStates; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptBlockTypes; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptBlockWaterContainerComponent; }
namespace ScriptModuleMinecraft { class ScriptBoolBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptBoundingBoxUtils; }
namespace ScriptModuleMinecraft { class ScriptBreathableComponent; }
namespace ScriptModuleMinecraft { class ScriptColor; }
namespace ScriptModuleMinecraft { class ScriptComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolumeItem; }
namespace ScriptModuleMinecraft { class ScriptContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptDimensionType; }
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
namespace ScriptModuleMinecraft { class ScriptEffectType; }
namespace ScriptModuleMinecraft { class ScriptEntityRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptEquippableComponent; }
namespace ScriptModuleMinecraft { class ScriptFoodComponent; }
namespace ScriptModuleMinecraft { class ScriptGameRules; }
namespace ScriptModuleMinecraft { class ScriptHealableComponent; }
namespace ScriptModuleMinecraft { class ScriptHealthComponent; }
namespace ScriptModuleMinecraft { class ScriptIntBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptInventoryComponent; }
namespace ScriptModuleMinecraft { class ScriptInventoryComponentContainer; }
namespace ScriptModuleMinecraft { class ScriptItemActorComponent; }
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptItemCooldownComponent; }
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentAsyncSignalCollection; }
namespace ScriptModuleMinecraft { class ScriptItemDurabilityComponent; }
namespace ScriptModuleMinecraft { class ScriptItemEnchantmentComponent; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { class ScriptLavaMovementComponent; }
namespace ScriptModuleMinecraft { class ScriptLeashableComponent; }
namespace ScriptModuleMinecraft { class ScriptLiquidContainer; }
namespace ScriptModuleMinecraft { class ScriptListBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptMobEffectInstance; }
namespace ScriptModuleMinecraft { class ScriptMolangVariableMap; }
namespace ScriptModuleMinecraft { class ScriptMountTamingComponent; }
namespace ScriptModuleMinecraft { class ScriptMovementAmphibiousComponent; }
namespace ScriptModuleMinecraft { class ScriptMovementBasicComponent; }
namespace ScriptModuleMinecraft { class ScriptMovementComponent; }
namespace ScriptModuleMinecraft { class ScriptMovementFlyComponent; }
namespace ScriptModuleMinecraft { class ScriptMovementGenericComponent; }
namespace ScriptModuleMinecraft { class ScriptMovementGlideComponent; }
namespace ScriptModuleMinecraft { class ScriptMovementHoverComponent; }
namespace ScriptModuleMinecraft { class ScriptMovementJumpComponent; }
namespace ScriptModuleMinecraft { class ScriptMovementSkipComponent; }
namespace ScriptModuleMinecraft { class ScriptMovementSwayComponent; }
namespace ScriptModuleMinecraft { class ScriptNavigationClimbComponent; }
namespace ScriptModuleMinecraft { class ScriptNavigationFloatComponent; }
namespace ScriptModuleMinecraft { class ScriptNavigationFlyComponent; }
namespace ScriptModuleMinecraft { class ScriptNavigationGenericComponent; }
namespace ScriptModuleMinecraft { class ScriptNavigationHoverComponent; }
namespace ScriptModuleMinecraft { class ScriptNavigationWalkComponent; }
namespace ScriptModuleMinecraft { class ScriptNpcComponent; }
namespace ScriptModuleMinecraft { class ScriptOnFireComponent; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerInputPermissions; }
namespace ScriptModuleMinecraft { class ScriptPlayerInventoryComponentContainer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { class ScriptProjectileComponent; }
namespace ScriptModuleMinecraft { class ScriptPropertyRegistry; }
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace ScriptModuleMinecraft { class ScriptRideableComponent; }
namespace ScriptModuleMinecraft { class ScriptRidingComponent; }
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjective; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjectiveDisplayOptions; }
namespace ScriptModuleMinecraft { class ScriptScoreboardScoreInfo; }
namespace ScriptModuleMinecraft { class ScriptSimpleBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptStrengthComponent; }
namespace ScriptModuleMinecraft { class ScriptStringBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace ScriptModuleMinecraft { class ScriptStructureTemplate; }
namespace ScriptModuleMinecraft { class ScriptSystem; }
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
namespace ScriptModuleMinecraft { class ScriptTameableComponent; }
namespace ScriptModuleMinecraft { class ScriptTickSignal; }
namespace ScriptModuleMinecraft { class ScriptTypeFamilyComponent; }
namespace ScriptModuleMinecraft { class ScriptUnderwaterMovementComponent; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptVector; }
namespace ScriptModuleMinecraft { class ScriptWorld; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptWorldBeforeEvents; }
namespace ScriptModuleMinecraft { struct EqualsComparison; }
namespace ScriptModuleMinecraft { struct GreaterThanComparison; }
namespace ScriptModuleMinecraft { struct GreaterThanOrEqualsComparison; }
namespace ScriptModuleMinecraft { struct IScriptItemCustomComponentClosures; }
namespace ScriptModuleMinecraft { struct LessThanComparison; }
namespace ScriptModuleMinecraft { struct LessThanOrEqualsComparison; }
namespace ScriptModuleMinecraft { struct NotEqualsComparison; }
namespace ScriptModuleMinecraft { struct RangeComparison; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorApplyDamageByProjectileOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorApplyDamageOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorCreateEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorDamageSource; }
namespace ScriptModuleMinecraft { struct ScriptActorDataDrivenTriggerEventSignalOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorDieAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorEventSignalOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorHealthChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorLoadAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBiomeSearchOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentEntityFallOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentPlayerDestroyAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentPlayerInteractAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentPlayerPlaceBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentStepOffAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentStepOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockExplodedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockFillOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockHitInformation; }
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptButtonPushAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptCamera; }
namespace ScriptModuleMinecraft { struct ScriptCameraDefaultOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraEaseOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraFadeOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraFadeTimeOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetFacingOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetLocationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetPositionOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetRotationOptions; }
namespace ScriptModuleMinecraft { struct ScriptChatSendAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptEntityEffectOptions; }
namespace ScriptModuleMinecraft { struct ScriptEntityHitInformation; }
namespace ScriptModuleMinecraft { struct ScriptEntityRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptEventCommandMessageAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptEventMessageFilterOptions; }
namespace ScriptModuleMinecraft { struct ScriptExplosionOptions; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptGameRuleChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerSlotError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentBeforeDurabilityDamageEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentClosureFlags; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentClosures; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentCompleteUseEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentConsumeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentHitEntityEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentMineBlockEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentNameError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadVersionError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentUseEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentUseOnEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentInstance; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentLevelOutOfBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentType; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentTypeNotCompatibleError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentTypes; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentUnknownIdError; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnEvent; }
namespace ScriptModuleMinecraft { struct ScriptLeverActionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayAnimationOptions; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerDimensionChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInputPermissionCategoryChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePopAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePushAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitInfoAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptProjectileShootOptions; }
namespace ScriptModuleMinecraft { struct ScriptPropertyTargetSelectorOption; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageScoreInterface; }
namespace ScriptModuleMinecraft { struct ScriptRawTextInterface; }
namespace ScriptModuleMinecraft { struct ScriptScoreTargetSelectorOption; }
namespace ScriptModuleMinecraft { struct ScriptScreenDisplay; }
namespace ScriptModuleMinecraft { struct ScriptServerMessageAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptSpawnEntityOptions; }
namespace ScriptModuleMinecraft { struct ScriptStructureCreateOptions; }
namespace ScriptModuleMinecraft { struct ScriptStructurePlaceOptions; }
namespace ScriptModuleMinecraft { struct ScriptTargetBlockHitAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTeleportOptions; }
namespace ScriptModuleMinecraft { struct ScriptTickEvent; }
namespace ScriptModuleMinecraft { struct ScriptTitleDisplayOptions; }
namespace ScriptModuleMinecraft { struct ScriptTripWireTripAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptUnloadedChunksError; }
namespace ScriptModuleMinecraft { struct ScriptWatchdogTerminateBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptXYRotation; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptBlockEventFilter; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptBlockFilterData; }
namespace ScriptModuleMinecraft::ScriptPropertyComponents { struct PropertyComponentRegistration; }
namespace ScriptModuleMinecraft::ScriptRaycasting { struct BlockHitInfo; }
namespace ScriptModuleMinecraft::ScriptRaycasting { struct EntityHitInfo; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct ErrorBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct JSON; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct NumberRange; }
namespace Scripting { struct PropertyOutOfBoundsError; }
namespace Scripting { struct Version; }
namespace mce { class Color; }
// clang-format on

namespace ScriptModuleMinecraft {
// NOLINTBEGIN
MCAPI void SetUpScriptAssertHandler();

MCAPI struct Scripting::Error
_handleDefinePropertyError(::DynamicPropertyDefinePropertyError error, std::string const& identifier);

MCAPI class Scripting::ClassBindingBuilder<class BlockPos> bindBlockLocation();

MCAPI class Scripting::EnumBindingBuilder<::ScriptModuleMinecraft::ScriptFacing, ::ScriptModuleMinecraft::ScriptFacing>
bindFacingEnumV010();

MCAPI class Scripting::EnumBindingBuilder<std::string, ::ScriptModuleMinecraft::ScriptFacing> bindFacingEnumV1();

MCAPI void bindHudElements(class Scripting::ModuleBindingBuilder& moduleBuilder);

MCAPI void bindHudVisibility(class Scripting::ModuleBindingBuilder& moduleBuilder);

MCAPI class Scripting::EnumBindingBuilder<std::string, ::ItemLockMode> bindItemLockMode();

MCAPI void bindMoonPhases(class Scripting::ModuleBindingBuilder& moduleBuilder);

MCAPI class Scripting::EnumBindingBuilder<std::string, ::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId>
bindScriptDisplayObjectiveSlotId();

MCAPI class Scripting::EnumBindingBuilder<std::string, ::ScriptModuleMinecraft::ScriptEventSource>
bindScriptEventSource();

MCAPI class Scripting::
    EnumBindingBuilder<::ScriptModuleMinecraft::ScriptTimeOfDay, ::ScriptModuleMinecraft::ScriptTimeOfDay>
    bindTimeOfDay();

MCAPI class Block const* extractBlockFromVariant(
    std::variant<
        std::string,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>> const& block
);

MCAPI std::string getScriptScoreboardParticipantName(
    std::variant<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        std::string> const& participant
);

MCAPI std::string const& scriptDisplayObjectiveSlotIdToString(::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId id);
// NOLINTEND

}; // namespace ScriptModuleMinecraft
