#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldAfterEvents.h"

// auto generated forward declare list
// clang-format off
class Level;
class ScriptDeferredFlushTracker;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptAfterEventList; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
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
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldAfterEvents : public ::ScriptModuleMinecraft::IScriptWorldAfterEvents,
                               public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptWorldAfterEvents> {
public:
    // ScriptWorldAfterEvents inner types declare
    // clang-format off
    class ScriptWorldAfterEventsDeferredEventListener;
    struct SignalNameSubscriberCount;
    // clang-format on

    // ScriptWorldAfterEvents inner types define
    class ScriptWorldAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ::ScriptModuleMinecraft::ScriptWorldAfterEvents> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);


        // NOLINTEND
    };

    struct SignalNameSubscriberCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> name;
        ::ll::TypedStorage<8, 8, uint64>         count;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                  mScope;
    ::ll::TypedStorage<8, 40, ::Scripting::Version>                                            mServerModuleVersion;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Level*>>                                        mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptGlobalEventListeners*>             mGlobalEventListeners;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                 mOnActorEntityAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                 mOnPackSettingChange;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                 mOnTrackedSoundCompleted;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptAfterEventList>> mEvents;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::ActorUniqueID,
            ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>>>
        mActorItemDropEventDataMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::ActorUniqueID,
            ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>>>
        mActorItemPickupEventDataMap;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::ScriptModuleMinecraft::ScriptWorldAfterEvents::ScriptWorldAfterEventsDeferredEventListener>>
        mScriptDeferredEventListener;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldAfterEvents();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWorldAfterEvents() /*override*/ = default;

    virtual ::Level& getLevel() const /*override*/;

    virtual void
    onChat(::std::shared_ptr<::ScriptModuleMinecraft::ScriptChatSendIntermediateData>& eventData) /*override*/;

    virtual void onGameRuleChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPackSettingChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData>& packSettingChangeEvent
    ) /*override*/;

    virtual void onServerMessage(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptServerMessageIntermediateData>& eventData
    ) /*override*/;

    virtual void onSoundCompleted(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onWeatherChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onWorldInitialize(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorDie(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorHeal(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorHealthChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorHitBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorHitEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorHurt(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorItemDrop(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorItemPickup(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorLoad(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorRemoved(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorSpawn(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorStartSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorStopSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorTamed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorTamedAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorUpgrade(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerButtonInput(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerButtonInputIntermediateData>& inputEvent
    ) /*override*/;

    virtual void onPlayerDimensionChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerEmote(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData>& emoteEvent
    ) /*override*/;

    virtual void onPlayerGameModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerHotbarSelectedSlotChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData>& hotbarEvent
    ) /*override*/;

    virtual void onPlayerInputModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerInputPermissionCategoryChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerInteractWithBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerInteractWithEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerInventoryItemChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>& inventoryEvent
    ) /*override*/;

    virtual void onPlayerCursorItemGrab(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerCursorItemTransferIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerCursorItemRelease(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerCursorItemTransferIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerCraftRecipe(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerCraftRecipeIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerJoin(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerLeave(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerStartBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerCancelBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerSpawn(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerSwingStart(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>& playerSwingStartEvent
    ) /*override*/;

    virtual void onPlayerUseNameTag(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>& useNameTagEvent
    ) /*override*/;

    virtual void onActivateLever(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>& leverEvent
    ) /*override*/;

    virtual void onActivatePiston(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onBlockContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onBlockContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onExplodeBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onExplosion(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onHitTargetBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerBreakBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerPlaceBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPopPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPushButton(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPushPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onTripTripWire(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onItemCompleteUse(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>& eventData
    ) /*override*/;

    virtual void onItemReleaseUse(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>& eventData
    ) /*override*/;

    virtual void onItemStartUse(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>& eventData
    ) /*override*/;

    virtual void onItemStartUseOn(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>& eventData
    ) /*override*/;

    virtual void onItemStopUse(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>& eventData
    ) /*override*/;

    virtual void onItemStopUseOn(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>& eventData
    ) /*override*/;

    virtual void
    onItemUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseIntermediateData>& eventData) /*override*/;

    virtual void
    onItemUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseOnIntermediateData>& eventData) /*override*/;

    virtual void onProjectileHitBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData
    ) /*override*/;

    virtual void onProjectileHitEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData
    ) /*override*/;

    virtual void onWorldClockTimeModified(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockTimeModifiedAfterEventIntermediateData>&
            clockTimeModifiedEvent
    ) /*override*/;

    virtual void onWorldClockPaused(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockPausedAfterEventIntermediateData>& clockPausedEvent
    ) /*override*/;

    virtual void onWorldClockResumed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockResumedAfterEventIntermediateData>& clockResumedEvent
    ) /*override*/;

    virtual void onWorldClockTimeMarker(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockTimeMarkerAfterEventIntermediateData>&
            clockTimeMarkerEvent
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWorldAfterEvents(
        ::Scripting::WeakLifetimeScope const& scope,
        ::gsl::not_null<::Level*>             level,
        ::Scripting::DependencyLocator&       locator,
        ::Scripting::ContextConfig const&     config,
        ::Scripting::Version                  serverModuleVersion
    );

    MCNAPI ::std::vector<::ScriptModuleMinecraft::ScriptWorldAfterEvents::SignalNameSubscriberCount>
    getFineGrainedSignalSubscriberStats() const;

    MCNAPI void registerListeners(::ScriptModuleMinecraft::ScriptGlobalEventListeners& globalEventListeners);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCNAPI static void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const& scope,
        ::gsl::not_null<::Level*>             level,
        ::Scripting::DependencyLocator&       locator,
        ::Scripting::ContextConfig const&     config,
        ::Scripting::Version                  serverModuleVersion
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Level& $getLevel() const;

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

    MCNAPI void $onWeatherChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onWorldInitialize(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>& eventData
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

    MCNAPI void $onActorHitBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onActorHitEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData>& eventData
    );

    MCNAPI void
    $onActorHurt(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>& eventData);

    MCNAPI void $onActorItemDrop(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onActorItemPickup(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>& eventData
    );

    MCNAPI void
    $onActorLoad(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData);

    MCNAPI void
    $onActorRemoved(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData>& eventData);

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

    MCNAPI void $onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>& eventData
    );

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
    $onPlayerJoin(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>& eventData);

    MCNAPI void
    $onPlayerLeave(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>& eventData);

    MCNAPI void $onPlayerStartBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    );

    MCNAPI void $onPlayerCancelBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
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

    MCNAPI void $onPlayerPlaceBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>& eventData
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
    $onItemCompleteUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>& eventData);

    MCNAPI void
    $onItemReleaseUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>& eventData);

    MCNAPI void
    $onItemStartUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>& eventData);

    MCNAPI void
    $onItemStartUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>& eventData);

    MCNAPI void
    $onItemStopUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>& eventData);

    MCNAPI void
    $onItemStopUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>& eventData);

    MCNAPI void $onItemUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseIntermediateData>& eventData);

    MCNAPI void $onItemUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseOnIntermediateData>& eventData);

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
