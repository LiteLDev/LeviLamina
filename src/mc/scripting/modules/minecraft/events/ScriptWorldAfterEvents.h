#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldAfterEvents.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAfterEventMetadata.h"

// auto generated forward declare list
// clang-format off
class Level;
class ScriptDeferredFlushTracker;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorEventListener; }
namespace ScriptModuleMinecraft { class ScriptAfterEventList; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptItemEventListener; }
namespace ScriptModuleMinecraft { class ScriptPlayerEventListener; }
namespace ScriptModuleMinecraft { class ScriptServerNetworkEventListener; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorDieAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHealthChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEventIntermediateData; }
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
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
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

        virtual ~ScriptWorldAfterEventsDeferredEventListener() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI void $onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct SignalNameSubscriberCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> name;
        ::ll::TypedStorage<8, 8, uint64>         count;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SignalNameSubscriberCount();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                      mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Level*>>                            mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptGlobalEventListeners*> mGlobalEventListeners;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptActorEventListener>> mActorEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptItemEventListener>>  mItemEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptPlayerEventListener>>
        mPlayerEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptServerNetworkEventListener>>
                                                               mServerNetworkEventListener;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnActorEntityAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPackSettingChange;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptAfterEventList>> mEvents;
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
    virtual ~ScriptWorldAfterEvents() /*override*/;

    virtual ::Level& getLevel() const /*override*/;

    virtual void onGameRuleChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onWeatherChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPushButton(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorLoad(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorLoadAfterEvent>& eventData
    ) /*override*/;

    virtual void onActorSpawn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>& eventData
    ) /*override*/;

    virtual void onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>& eventData
    ) /*override*/;

    virtual void onActorHitBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActivateLever(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>& leverEvent
    ) /*override*/;

    virtual void onPlayerPlaceBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onExplodeBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerBreakBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorHurt(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorHealthChanged(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&
            actorHealthChangedEvent
    ) /*override*/;

    virtual void onActorDie(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onActorRemoved(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const&           removedActor,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>& eventData
    ) /*override*/;

    virtual void onItemUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseAfterEvent>& eventData
    ) /*override*/;

    virtual void onItemUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& eventData
    ) /*override*/;

    virtual void onItemStartUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>& eventData
    ) /*override*/;

    virtual void onItemStopUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>& eventData
    ) /*override*/;

    virtual void onItemStartUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>& eventData
    ) /*override*/;

    virtual void onItemCompleteUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>& eventData
    ) /*override*/;

    virtual void onItemReleaseUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>& eventData
    ) /*override*/;

    virtual void onItemStopUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>& eventData
    ) /*override*/;

    virtual void onPlayerJoin(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerLeave(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerSpawn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>& eventData
    ) /*override*/;

    virtual void onPlayerDimensionChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>& eventData
    ) /*override*/;

    virtual void onPlayerInputModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeAfterEvent>& eventData
    ) /*override*/;

    virtual void onPlayerInputPermissionCategoryChange(
        ::Scripting::StrongTypedObjectHandle<
            ::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>& eventData
    ) /*override*/;

    virtual void onPlayerInteractWithEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&
            eventData
    ) /*override*/;

    virtual void onPlayerInteractWithBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&
            eventData
    ) /*override*/;

    virtual void onPlayerGameModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>& eventData
    ) /*override*/;

    virtual void onWorldInitialize(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onChat(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendAfterEvent>& eventData
    ) /*override*/;

    virtual void onServerMessage(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptServerMessageAfterEvent>& eventData
    ) /*override*/;

    virtual void onProjectileHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>& eventData
    ) /*override*/;

    virtual void onProjectileHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>& eventData
    ) /*override*/;

    virtual void onActivatePiston(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onExplosion(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPushPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPopPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onHitTargetBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onTripTripWire(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>& eventData
    ) /*override*/;

    virtual void onPlayerEmote(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent>& emoteEvent
    ) /*override*/;

    virtual void onPlayerButtonInput(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerButtonInputAfterEvent>& inputEvent
    ) /*override*/;

    virtual void onPlayerInventoryItemChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent>&
            inventoryEvent
    ) /*override*/;

    virtual void onPlayerHotbarSelectedSlotChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeAfterEvent>&
            hotbarEvent
    ) /*override*/;

    virtual void onPackSettingChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent>&
            packSettingChangeEvent
    ) /*override*/;

    virtual void onPlayerUseNameTag(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent>& useNameTagEvent
    ) /*override*/;

    virtual void onPlayerSwingStart(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSwingStartAfterEvent>&
            playerSwingStartEvent
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWorldAfterEvents(
        ::Scripting::WeakLifetimeScope const& scope,
        ::gsl::not_null<::Level*>             level,
        ::Scripting::DependencyLocator&       locator,
        ::Scripting::ContextConfig const&     config
    );

    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptWorldAfterEvents::SignalNameSubscriberCount>
    getFineGrainedSignalSubscriberStats() const;

    MCAPI void registerListeners(::ScriptModuleMinecraft::ScriptGlobalEventListeners& globalEventListeners);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata<
        ::ScriptModuleMinecraft::ScriptWorldAfterEvents> const&
    getMetadata();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& bindingName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const& scope,
        ::gsl::not_null<::Level*>             level,
        ::Scripting::DependencyLocator&       locator,
        ::Scripting::ContextConfig const&     config
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Level& $getLevel() const;

    MCAPI void $onGameRuleChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>& eventData
    );

    MCAPI void $onWeatherChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>& eventData
    );

    MCAPI void
    $onPushButton(::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>& eventData);

    MCAPI void
    $onActorLoad(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorLoadAfterEvent>& eventData);

    MCAPI void
    $onActorSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>& eventData);

    MCAPI void $onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>& eventData
    );

    MCAPI void $onActorHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>& eventData
    );

    MCAPI void $onActorHitBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>& eventData
    );

    MCAPI void $onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
    );

    MCAPI void $onActivateLever(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>& leverEvent
    );

    MCAPI void $onPlayerPlaceBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>& eventData
    );

    MCAPI void $onExplodeBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>& eventData
    );

    MCAPI void $onPlayerBreakBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>& eventData
    );

    MCAPI void
    $onActorHurt(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>& eventData);

    MCAPI void $onActorHealthChanged(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&
            actorHealthChangedEvent
    );

    MCAPI void
    $onActorDie(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>& eventData);

    MCAPI void $onActorRemoved(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const&           removedActor,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>& eventData
    );

    MCAPI void
    $onItemUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseAfterEvent>& eventData);

    MCAPI void
    $onItemUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& eventData);

    MCAPI void $onItemStartUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>& eventData
    );

    MCAPI void $onItemStopUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>& eventData
    );

    MCAPI void $onItemStartUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>& eventData
    );

    MCAPI void $onItemCompleteUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>& eventData
    );

    MCAPI void $onItemReleaseUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>& eventData
    );

    MCAPI void $onItemStopUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>& eventData
    );

    MCAPI void
    $onPlayerJoin(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>& eventData);

    MCAPI void
    $onPlayerLeave(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>& eventData);

    MCAPI void $onPlayerSpawn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>& eventData
    );

    MCAPI void $onPlayerDimensionChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>& eventData
    );

    MCAPI void $onPlayerInputModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeAfterEvent>& eventData
    );

    MCAPI void $onPlayerInputPermissionCategoryChange(
        ::Scripting::StrongTypedObjectHandle<
            ::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>& eventData
    );

    MCAPI void $onPlayerInteractWithEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&
            eventData
    );

    MCAPI void $onPlayerInteractWithBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&
            eventData
    );

    MCAPI void $onPlayerGameModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>& eventData
    );

    MCAPI void $onWorldInitialize(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>& eventData
    );

    MCAPI void
    $onChat(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendAfterEvent>& eventData);

    MCAPI void $onServerMessage(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptServerMessageAfterEvent>& eventData
    );

    MCAPI void $onProjectileHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>& eventData
    );

    MCAPI void $onProjectileHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>& eventData
    );

    MCAPI void $onActivatePiston(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>& eventData
    );

    MCAPI void $onExplosion(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>& eventData
    );

    MCAPI void $onPushPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>& eventData
    );

    MCAPI void $onPopPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>& eventData
    );

    MCAPI void $onHitTargetBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>& eventData
    );

    MCAPI void $onTripTripWire(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>& eventData
    );

    MCAPI void $onPlayerEmote(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent>& emoteEvent
    );

    MCAPI void $onPlayerButtonInput(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerButtonInputAfterEvent>& inputEvent
    );

    MCAPI void $onPlayerInventoryItemChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent>&
            inventoryEvent
    );

    MCAPI void $onPlayerHotbarSelectedSlotChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeAfterEvent>&
            hotbarEvent
    );

    MCAPI void $onPackSettingChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent>&
            packSettingChangeEvent
    );

    MCAPI void $onPlayerUseNameTag(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent>& useNameTagEvent
    );

    MCAPI void $onPlayerSwingStart(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSwingStartAfterEvent>&
            playerSwingStartEvent
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
