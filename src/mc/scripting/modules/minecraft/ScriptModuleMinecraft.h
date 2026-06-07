#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ErrorMemberType.h"
#include "mc/scripting/modules/minecraft/events/metadata/IScriptAfterEventSignalBuilder.h"
#include "mc/world/persistence/DynamicPropertyDefinePropertyError.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class Dimension;
class PlayerUpdateEntityOverridesPacket;
class Potion;
class PropertyComponent;
class PropertyMetadata;
class Vec3;
struct GameRuleId;
namespace ScriptModuleMinecraft { class ParamStorageBase; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptAimAssistCategorySettings; }
namespace ScriptModuleMinecraft { class ScriptAimAssistPresetSettings; }
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { struct ScriptBiomeFillOptions; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandInterface; }
namespace ScriptModuleMinecraft { struct ScriptUnloadedChunksError; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct TaggedBinding; }
namespace SharedTypes::v1_21_120 { struct CameraAimAssistPresetDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::std::unique_ptr<::ScriptModuleMinecraft::ParamStorageBase>>
CreateParamStorage(::ScriptModuleMinecraft::ScriptCustomCommandInterface const& commandInterface);

MCNAPI ::Scripting::Error
_handleDefinePropertyError(::DynamicPropertyDefinePropertyError error, ::std::string const& identifier);

MCNAPI ::std::optional<::Scripting::Error> _tryQueueUpdateForOverridenProperty(
    ::Actor&                                          actor,
    ::PropertyComponent const&                        props,
    ::PlayerUpdateEntityOverridesPacket&              packet,
    ::PropertyMetadata const&                         propertyMetadata,
    ::std::variant<float, bool, ::std::string> const& value
);

MCNAPI ::std::optional<::Scripting::Error> _tryQueueUpdateForRemovedOverride(
    ::Actor&                   actor,
    ::PropertyComponent const& props,
    ::PropertyMetadata const&  propertyMetadata
);

MCNAPI ::std::optional<::Scripting::Error> _validatePropertyMetadata(
    ::PropertyMetadata const* propertyMetadata,
    ::Actor const*            actor,
    ::std::string const&      identifier
);

MCNAPI ::Scripting::EnumBinding bindActorHealCause();

MCNAPI ::Scripting::EnumBinding bindActorLocatorEnum();

MCNAPI ::Scripting::EnumBinding bindActorSwingSource();

MCNAPI ::Scripting::ClassBinding bindBlockLocation();

MCNAPI ::Scripting::EnumBinding bindButtonInputAction();

MCNAPI ::Scripting::EnumBinding bindButtonInputState();

MCNAPI ::Scripting::EnumBinding bindCommandPermissionLevel();

MCNAPI ::Scripting::EnumBinding bindCustomCommandParamTypes();

MCNAPI ::Scripting::EnumBinding bindCustomCommandSource();

MCNAPI ::Scripting::EnumBinding bindCustomCommandStatus();

MCNAPI ::Scripting::EnumBinding bindEntitySpawnCategory();

MCNAPI ::Scripting::EnumBinding bindEntitySpawnReason();

MCNAPI ::Scripting::EnumBinding bindFacingEnumV010();

MCNAPI ::Scripting::EnumBinding bindFacingEnumV1();

MCNAPI ::Scripting::EnumBinding bindHeldItemOption();

MCNAPI void bindHudElements(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCNAPI void bindHudVisibility(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCNAPI ::Scripting::EnumBinding bindItemLockMode();

MCNAPI ::Scripting::EnumBinding bindLiquidTypeEnum();

MCNAPI void bindMoonPhases(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCNAPI ::Scripting::EnumBinding bindPlayerPermissionLevel();

MCNAPI ::Scripting::EnumBinding bindScriptDisplayObjectiveSlotId();

MCNAPI ::Scripting::EnumBinding bindScriptEventSource();

MCNAPI ::Scripting::EnumBinding bindScriptPlayerInventoryType();

MCNAPI ::Scripting::EnumBinding bindTimeOfDay();

MCNAPI ::Scripting::EnumBinding bindTintMethodEnums();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createBlockContainerClosedAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createBlockContainerOpenedAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createBlockExplodeAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createButtonPushAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createButtonPushV1AfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createChatSendAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createDataDrivenEntityTriggerAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEffectAddAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntityContainerClosedAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntityContainerOpenedAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntityDieAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntityHealAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntityHealthChangedAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntityHitBlockAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntityHitEntityAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntityHurtAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntityHurtV1AfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntityItemDropAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntityItemPickupAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntityLoadAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntityRemoveAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createEntitySpawnAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createExplosionAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createGameRuleChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createItemCompleteUseAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createItemReleaseUseAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createItemStartUseAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createItemStartUseOnAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createItemStopUseAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createItemStopUseOnAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createItemUseAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createItemUseOnAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createLeverActionAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createLeverActionV1AfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createMessageReceiveAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPackSettingChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPistonActivateAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerBreakBlockAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerButtonInputAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerDimensionChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerEmoteAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerGameModeChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerHotbarSelectedSlotChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerInputModeChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerInputPermissionCategoryChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerInteractWithBlockAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerInteractWithEntityAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerInventoryItemChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerJoinAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerJoinV1AfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerLeaveAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerLeaveV1AfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerPlaceBlockAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerSpawnAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerSpawnV1AfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerSwingStartAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPlayerUseNameTagAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPressurePlatePopAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createPressurePlatePushAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createProjectileHitBlockAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createProjectileHitEntityAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createTargetBlockHitAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createTripWireTripAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createWeatherChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createWorldInitializeAfterEventMetadata();

MCNAPI ::std::unique_ptr<
    ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
createWorldLoadAfterEventMetadata();

MCNAPI ::Block const* extractBlockFromVariant(
    ::std::variant<
        ::std::string,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const& block
);

MCNAPI ::Vec3 extractLocalBlockPosFromWorldHitPos(::Vec3 const& worldPos);

MCNAPI ::Scripting::Result<
    void,
    ::ScriptModuleMinecraft::ScriptUnloadedChunksError,
    ::Scripting::InvalidArgumentError,
    ::Scripting::EngineError>
fillBiomes(
    ::Dimension& dimension,
    ::std::variant<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>> const& volume,
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBiomeType> const&                biomeType,
    ::ScriptModuleMinecraft::ScriptBiomeFillOptions const&                                               options
);

MCNAPI ::std::string formatErrorMessage(
    ::ScriptModuleMinecraft::ErrorMemberType memberType,
    ::std::string_view                       propertyName,
    ::std::string_view                       objectTypeName
);

MCNAPI ::std::optional<::Scripting::TaggedBinding> getGameRuleVersion(::GameRuleId const& ruleId);

MCNAPI ::std::string getScriptScoreboardParticipantName(
    ::std::variant<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::std::string> const& participant
);

MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition
makeAimAssistCategoryDefinition(::ScriptModuleMinecraft::ScriptAimAssistCategorySettings const& category);

MCNAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition
makeAimAssistPresetDefinition(::ScriptModuleMinecraft::ScriptAimAssistPresetSettings const& preset);

MCNAPI ::std::optional<::std::shared_ptr<::Potion const> const> tryGetPotion(::std::string const& potionNameId);
// NOLINTEND

} // namespace ScriptModuleMinecraft
