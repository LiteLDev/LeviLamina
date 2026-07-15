#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Block;
class Dimension;
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
namespace ScriptModuleMinecraft { struct IScriptAfterEventSignalBuilder; }
namespace ScriptModuleMinecraft { struct ScriptBiomeFillOptions; }
namespace ScriptModuleMinecraft { struct ScriptUnloadedChunksError; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {
// functions
// NOLINTBEGIN
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

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createBlockContainerClosedAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createBlockContainerOpenedAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createBlockExplodeAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createButtonPushAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createChatSendAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createDataDrivenEntityTriggerAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createEffectAddAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createEntityContainerClosedAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createEntityContainerOpenedAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createEntityDieAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createEntityHealAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createEntityHealthChangedAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createEntityHitBlockAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createEntityHitEntityAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createEntityHurtAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createEntityHurtV1AfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createEntityItemDropAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createEntityItemPickupAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createEntityLoadAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createEntityRemoveAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createEntitySpawnAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createEntityStartSneakingAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createEntityUpgradeAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createExplosionAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createGameRuleChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createItemCompleteUseAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createItemReleaseUseAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createItemStartUseAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createItemStartUseOnAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createItemStopUseAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createItemStopUseOnAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createItemUseAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createItemUseOnAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createLeverActionAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createMessageReceiveAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPackSettingChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPistonActivateAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerBreakBlockAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerButtonInputAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerCancelBreakingBlockAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerDimensionChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createPlayerEmoteAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerGameModeChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerHotbarSelectedSlotChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerInputModeChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerInputPermissionCategoryChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerInteractWithBlockAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerInteractWithEntityAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerInventoryItemChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createPlayerJoinAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createPlayerLeaveAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerPlaceBlockAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createPlayerSpawnAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerStartBreakingBlockAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerSwingStartAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPlayerUseNameTagAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPressurePlatePopAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createPressurePlatePushAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createProjectileHitBlockAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createProjectileHitEntityAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createTargetBlockHitAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createTripWireTripAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createWeatherChangeAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>
createWorldInitializeAfterEventMetadata();

MCNAPI ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder> createWorldLoadAfterEventMetadata();

MCNAPI ::Block const* extractBlockFromVariant(
    ::std::variant<
        ::std::string,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const& block
);

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
// NOLINTEND

} // namespace ScriptModuleMinecraft
