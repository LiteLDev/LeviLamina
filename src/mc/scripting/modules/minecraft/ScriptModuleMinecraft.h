#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorSelectorType.h"
#include "mc/enums/CauldronLiquidType.h"
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/enums/DynamicPropertyDefinePropertyError.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/SignTextSide.h"
#include "mc/enums/WatchdogTerminateReason.h"
#include "mc/events/LevelEvent.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/external/scripting/ErrorBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActorLifetimeState.h"
#include "mc/scripting/modules/minecraft/ScriptDimension.h"
#include "mc/scripting/modules/minecraft/ScriptDisplayObjectiveSlotId.h"
#include "mc/scripting/modules/minecraft/ScriptEventSource.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/ScriptFluidType.h"
#include "mc/scripting/modules/minecraft/ScriptObjectiveSortOrderType.h"
#include "mc/scripting/modules/minecraft/ScriptScoreboardIdentityType_t.h"
#include "mc/scripting/modules/minecraft/ScriptTickSignal.h"
#include "mc/scripting/modules/minecraft/ScriptTimeOfDay.h"
#include "mc/scripting/modules/minecraft/ScriptWorldAfterEvents.h"
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/FeedItem.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemLockMode.h"
#include "mc/world/item/enchanting/Enchant.h"
#include "mc/world/level/block/utils/CompoundBlockVolumeAction.h"
#include "mc/world/level/block/utils/SimpleBlockVolume.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class AttributeScriptActorComponent; }
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class BaseScriptBlockLiquidContainerComponent; }
namespace ScriptModuleMinecraft { class IComponentFactory; }
namespace ScriptModuleMinecraft { class IScriptAfterEvents; }
namespace ScriptModuleMinecraft { class IScriptBlockProperty; }
namespace ScriptModuleMinecraft { class IScriptItemComponentFactory; }
namespace ScriptModuleMinecraft { class MovementScriptActorComponent; }
namespace ScriptModuleMinecraft { class NavigationScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptActorIterator; }
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace ScriptModuleMinecraft { class ScriptActorTypeIterator; }
namespace ScriptModuleMinecraft { class ScriptAddRiderComponent; }
namespace ScriptModuleMinecraft { class ScriptAgeableComponent; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockAreaSize; }
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
namespace ScriptModuleMinecraft { class ScriptBlockWaterContainerComponent; }
namespace ScriptModuleMinecraft { class ScriptBoolBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptBoundingBoxUtils; }
namespace ScriptModuleMinecraft { class ScriptBreathableComponent; }
namespace ScriptModuleMinecraft { class ScriptColor; }
namespace ScriptModuleMinecraft { class ScriptComponent; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptDimensionTypes; }
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
namespace ScriptModuleMinecraft { class ScriptEffectType; }
namespace ScriptModuleMinecraft { class ScriptEntityRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptEquipmentInventoryComponent; }
namespace ScriptModuleMinecraft { class ScriptFoodComponent; }
namespace ScriptModuleMinecraft { class ScriptHealableComponent; }
namespace ScriptModuleMinecraft { class ScriptHealthComponent; }
namespace ScriptModuleMinecraft { class ScriptIntBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptInventoryComponent; }
namespace ScriptModuleMinecraft { class ScriptInventoryComponentContainer; }
namespace ScriptModuleMinecraft { class ScriptItemActorComponent; }
namespace ScriptModuleMinecraft { class ScriptItemChargeAfterEvent; }
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemCooldownComponent; }
namespace ScriptModuleMinecraft { class ScriptItemDurabilityComponent; }
namespace ScriptModuleMinecraft { class ScriptItemEnchantmentComponent; }
namespace ScriptModuleMinecraft { class ScriptItemEnchantments; }
namespace ScriptModuleMinecraft { class ScriptItemEvent; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { class ScriptItemTypeIterator; }
namespace ScriptModuleMinecraft { class ScriptLavaMovementComponent; }
namespace ScriptModuleMinecraft { class ScriptLeashableComponent; }
namespace ScriptModuleMinecraft { class ScriptLiquidContainer; }
namespace ScriptModuleMinecraft { class ScriptMinecraftBlockProperties; }
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
namespace ScriptModuleMinecraft { class ScriptOnFireComponent; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerInventoryComponentContainer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { class ScriptPropertyRegistry; }
namespace ScriptModuleMinecraft { class ScriptRideableComponent; }
namespace ScriptModuleMinecraft { class ScriptRidingComponent; }
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjective; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjectiveDisplayOptions; }
namespace ScriptModuleMinecraft { class ScriptScoreboardScoreInfo; }
namespace ScriptModuleMinecraft { class ScriptSimpleBlockVolumeUtils; }
namespace ScriptModuleMinecraft { class ScriptStrengthComponent; }
namespace ScriptModuleMinecraft { class ScriptStringBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptSystem; }
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
namespace ScriptModuleMinecraft { class ScriptTameableComponent; }
namespace ScriptModuleMinecraft { class ScriptTickSignal; }
namespace ScriptModuleMinecraft { class ScriptUnderwaterMovementComponent; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptVector; }
namespace ScriptModuleMinecraft { class ScriptWorld; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptWorldBeforeEvents; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEvent; }
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
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorRemovedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockBreakAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockExplodedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockFillOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockHitInformation; }
namespace ScriptModuleMinecraft { struct ScriptBlockPlaceAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptButtonPushAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptEntityEffectOptions; }
namespace ScriptModuleMinecraft { struct ScriptEntityHitInformation; }
namespace ScriptModuleMinecraft { struct ScriptEntityRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptEventCommandMessageAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionOptions; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemDefinitionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemDefinitionBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentInstance; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentSlot; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentType; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentTypes; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptLeverActionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
namespace ScriptModuleMinecraft { struct ScriptNavigationResult; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayAnimationOptions; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPositionInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptPositionOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePopAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePushAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageScoreInterface; }
namespace ScriptModuleMinecraft { struct ScriptRawTextInterface; }
namespace ScriptModuleMinecraft { struct ScriptScoreTargetSelectorOption; }
namespace ScriptModuleMinecraft { struct ScriptScreenDisplay; }
namespace ScriptModuleMinecraft { struct ScriptServerMessageAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptTargetBlockHitAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTeleportOptions; }
namespace ScriptModuleMinecraft { struct ScriptTickEvent; }
namespace ScriptModuleMinecraft { struct ScriptTitleDisplayOptions; }
namespace ScriptModuleMinecraft { struct ScriptTripWireTripAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWatchdogTerminateBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptXYRotation; }
namespace ScriptModuleMinecraft::ScriptPropertyComponents { struct PropertyComponentRegistration; }
namespace ScriptModuleMinecraft::ScriptRaycasting { struct BlockHitInfo; }
namespace ScriptModuleMinecraft::ScriptRaycasting { struct EntityHitInfo; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
namespace Scripting { struct JSON; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
namespace mce { class Color; }
// clang-format on

namespace ScriptModuleMinecraft {
// NOLINTBEGIN
/**
 * @symbol ?SetUpScriptAssertHandler\@ScriptModuleMinecraft\@\@YAXXZ
 */
MCAPI void SetUpScriptAssertHandler();
/**
 * @symbol ?_buildSignalId\@ScriptModuleMinecraft\@\@YA_KPEBD000\@Z
 */
MCAPI uint64_t _buildSignalId(char const*, char const*, char const*, char const*);
/**
 * @symbol
 * ?_handleDefinePropertyError\@ScriptModuleMinecraft\@\@YA?AUError\@Scripting\@\@W4DynamicPropertyDefinePropertyError\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI struct Scripting::Error
_handleDefinePropertyError(enum class DynamicPropertyDefinePropertyError, std::string const&);
/**
 * @symbol ?bindBlockLocation\@ScriptModuleMinecraft\@\@YA?AV?$ClassBindingBuilder\@VBlockPos\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::ClassBindingBuilder<class BlockPos> bindBlockLocation();
/**
 * @symbol
 * ?bindFacingEnumV010\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@W4ScriptFacing\@ScriptModuleMinecraft\@\@W412\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::
    EnumBindingBuilder<enum class ScriptModuleMinecraft::ScriptFacing, enum class ScriptModuleMinecraft::ScriptFacing>
    bindFacingEnumV010();
/**
 * @symbol
 * ?bindFacingEnumV1\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::EnumBindingBuilder<std::string, enum class ScriptModuleMinecraft::ScriptFacing>
bindFacingEnumV1();
/**
 * @symbol
 * ?bindItemLockMode\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ItemLockMode\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::EnumBindingBuilder<std::string, enum class ItemLockMode> bindItemLockMode();
/**
 * @symbol
 * ?bindScriptDisplayObjectiveSlotId\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptDisplayObjectiveSlotId\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::EnumBindingBuilder<std::string, enum class ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId>
bindScriptDisplayObjectiveSlotId();
/**
 * @symbol
 * ?bindScriptEventSource\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptEventSource\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::EnumBindingBuilder<std::string, enum class ScriptModuleMinecraft::ScriptEventSource>
bindScriptEventSource();
/**
 * @symbol
 * ?bindTimeOfDay\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@W4ScriptTimeOfDay\@ScriptModuleMinecraft\@\@W412\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::EnumBindingBuilder<
    enum class ScriptModuleMinecraft::ScriptTimeOfDay,
    enum class ScriptModuleMinecraft::ScriptTimeOfDay>
bindTimeOfDay();
/**
 * @symbol
 * ?getScriptScoreboardParticipantName\@ScriptModuleMinecraft\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$variant\@V?$StrongTypedObjectHandle\@VScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@2\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@3\@\@Z
 */
MCAPI std::string
      getScriptScoreboardParticipantName(std::variant<
                                   class Scripting::StrongTypedObjectHandle<
                                       class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                                   class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
                                   std::string> const&);
/**
 * @symbol
 * ?rawMessageOrStringToJson\@ScriptModuleMinecraft\@\@YA?AVValue\@Json\@\@AEBV?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
 */
MCAPI class Json::Value
rawMessageOrStringToJson(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> const&);
// NOLINTEND

}; // namespace ScriptModuleMinecraft
