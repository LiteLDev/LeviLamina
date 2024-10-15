#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAsyncEventMetadata.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorDieAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHealthChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorLoadAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockExplodedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptButtonPushAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEvent; }
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
namespace ScriptModuleMinecraft { struct ScriptPistonActionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerDimensionChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInputPermissionCategoryChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePopAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePushAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptServerMessageAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTargetBlockHitAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTripWireTripAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldAfterEvents {
public:
    // ScriptWorldAfterEvents inner types declare
    // clang-format off
    class ScriptWorldAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptWorldAfterEvents inner types define
    class ScriptWorldAfterEventsDeferredEventListener {
    public:
        // prevent constructor by default
        ScriptWorldAfterEventsDeferredEventListener& operator=(ScriptWorldAfterEventsDeferredEventListener const&);
        ScriptWorldAfterEventsDeferredEventListener(ScriptWorldAfterEventsDeferredEventListener const&);
        ScriptWorldAfterEventsDeferredEventListener();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ScriptWorldAfterEventsDeferredEventListener() = default;

        // vIndex: 1
        virtual void onLevelTickEnd();

        // vIndex: 2
        virtual void onRunAsyncJobs();

        // vIndex: 3
        virtual bool onRunSystemTick();

        // vIndex: 4
        virtual bool onFlushWorldAfterEvents();

        // vIndex: 5
        virtual bool onFlushSystemAfterEvents();

        // vIndex: 6
        virtual bool onFlushEditorExtensionContextAfterEvents();

        // vIndex: 7
        virtual bool onFlushBlockCustomComponentAfterEvents();

        // vIndex: 8
        virtual bool onFlushEditorDataStoreAfterEvents();

        // vIndex: 9
        virtual bool onFlushItemCustomComponentAfterEvents();

        // vIndex: 10
        virtual void onPreFlushAfterEvents();

        // vIndex: 11
        virtual void onPostFlushAfterEvents();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI bool onFlushBlockCustomComponentAfterEvents$();

        MCAPI bool onFlushEditorDataStoreAfterEvents$();

        MCAPI bool onFlushEditorExtensionContextAfterEvents$();

        MCAPI bool onFlushItemCustomComponentAfterEvents$();

        MCAPI bool onFlushSystemAfterEvents$();

        MCAPI bool onFlushWorldAfterEvents$();

        MCAPI void onLevelTickEnd$();

        MCAPI void onPostFlushAfterEvents$();

        MCAPI void onPreFlushAfterEvents$();

        MCAPI void onRunAsyncJobs$();

        MCAPI bool onRunSystemTick$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptWorldAfterEvents& operator=(ScriptWorldAfterEvents const&);
    ScriptWorldAfterEvents(ScriptWorldAfterEvents const&);
    ScriptWorldAfterEvents();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptWorldAfterEvents();

    // vIndex: 1
    virtual class Level& getLevel() const;

    // vIndex: 2
    virtual void onGameRuleChange(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptGameRuleChangeAfterEvent>& gameRulesChangeEvent);

    // vIndex: 3
    virtual void onWeatherChanged(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>& weatherChangedEvent);

    // vIndex: 4
    virtual void onWorldInitialize(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>& eventData);

    // vIndex: 5
    virtual void onPlayerJoin(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>& eventData
    );

    // vIndex: 6
    virtual void onPlayerLeave(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>& eventData
    );

    // vIndex: 7
    virtual void onActorAddEffect(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent>& eventData);

    // vIndex: 8
    virtual void
    onChat(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent>& eventData);

    // vIndex: 9
    virtual void onActorLoad(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorLoadAfterEvent>& eventData
    );

    // vIndex: 10
    virtual void onActorSpawn(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>& eventData
    );

    // vIndex: 11
    virtual void onActorRemoved(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const& removedActor,
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>& eventData
    );

    // vIndex: 12
    virtual void onActorHitEntity(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>& eventData);

    // vIndex: 13
    virtual void onActorHitBlock(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>& eventData
    );

    // vIndex: 14
    virtual void onServerMessage(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent>& eventData
    );

    // vIndex: 15
    virtual void onDataDrivenActorEventSend(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&
            eventData
    );

    // vIndex: 16
    virtual void
    onActorHurt(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>&
                    actorHurtEvent);

    // vIndex: 17
    virtual void onActorHealthChanged(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&
            actorHealthChangedEvent
    );

    // vIndex: 18
    virtual void onActorDie(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorDieAfterEvent>& actorDieEvent
    );

    // vIndex: 19
    virtual void onPlayerSpawn(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>& eventData
    );

    // vIndex: 20
    virtual void onPlayerDimensionChange(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>&
            eventData
    );

    // vIndex: 21
    virtual void onPlayerInputPermissionCategoryChange(
        class Scripting::StrongTypedObjectHandle<
            struct ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>& eventData
    );

    // vIndex: 22
    virtual void
    onPlayerInteractWithEntity(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>& eventData);

    // vIndex: 23
    virtual void onPlayerInteractWithBlock(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&
            eventData
    );

    // vIndex: 24
    virtual void onPlayerGameModeChange(class Scripting::StrongTypedObjectHandle<
                                        struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>& eventData);

    // vIndex: 25
    virtual void onActivatePiston(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent>& eventData
    );

    // vIndex: 26
    virtual void onActivateLever(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent>& leverEvent
    );

    // vIndex: 27
    virtual void onPushButton(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent>& pushedButton
    );

    // vIndex: 28
    virtual void onExplosion(class Scripting::StrongTypedObjectHandle<
                             struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>& eventData);

    // vIndex: 29
    virtual void onExplodeBlock(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent>& blockExplodeEvent);

    // vIndex: 30
    virtual void onPlayerPlaceBlock(class Scripting::StrongTypedObjectHandle<
                                    struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>& blockPlaceEvent);

    // vIndex: 31
    virtual void onPlayerBreakBlock(class Scripting::StrongTypedObjectHandle<
                                    struct ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>& blockBreakEvent);

    // vIndex: 32
    virtual void onPushPressurePlate(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&
            pushedPressurePlate
    );

    // vIndex: 33
    virtual void onPopPressurePlate(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&
            poppedPressurePlate
    );

    // vIndex: 34
    virtual void onHitTargetBlock(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>& hitTargetBlock);

    // vIndex: 35
    virtual void
    onTripTripWire(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>&
                       trippedTripWire);

    // vIndex: 36
    virtual void
    onItemUse(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseAfterEvent>& eventData
    );

    // vIndex: 37
    virtual void onItemUseOn(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& eventData
    );

    // vIndex: 38
    virtual void onItemStartUseOn(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>& eventData);

    // vIndex: 39
    virtual void onItemStopUseOn(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>& eventData
    );

    // vIndex: 40
    virtual void onItemStartUse(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>& eventData
    );

    // vIndex: 41
    virtual void onItemCompleteUse(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>& eventData);

    // vIndex: 42
    virtual void onItemReleaseUse(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>& eventData);

    // vIndex: 43
    virtual void onItemStopUse(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>& eventData
    );

    // vIndex: 44
    virtual void onProjectileHitEntity(class Scripting::StrongTypedObjectHandle<
                                       struct ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>& eventData);

    // vIndex: 45
    virtual void onProjectileHitBlock(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>& eventData);

    MCAPI ScriptWorldAfterEvents(class Scripting::WeakLifetimeScope const& scope, gsl::not_null<class Level*> level);

    MCAPI void registerListeners(bool worldListener);

    MCAPI static void bind(class Scripting::ModuleBindingBuilder& moduleBuilder);

    MCAPI static void generateOrderDocumentationForVersion(
        struct Scripting::ModuleDescriptor const& moduleToDocumentFor,
        class Json::Value&                        eventOrderArray
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Scripting::WeakLifetimeScope const& scope, gsl::not_null<class Level*> level);

    MCAPI void dtor$();

    MCAPI class Level& getLevel$() const;

    MCAPI void onActivateLever$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent>& leverEvent
    );

    MCAPI void onActivatePiston$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent>& eventData
    );

    MCAPI void onActorAddEffect$(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent>& eventData);

    MCAPI void onActorDie$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorDieAfterEvent>& actorDieEvent
    );

    MCAPI void onActorHealthChanged$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&
            actorHealthChangedEvent
    );

    MCAPI void onActorHitBlock$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>& eventData
    );

    MCAPI void onActorHitEntity$(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>& eventData);

    MCAPI void
    onActorHurt$(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>&
                     actorHurtEvent);

    MCAPI void onActorLoad$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorLoadAfterEvent>& eventData
    );

    MCAPI void onActorRemoved$(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const& removedActor,
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>& eventData
    );

    MCAPI void onActorSpawn$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>& eventData
    );

    MCAPI void
    onChat$(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent>& eventData
    );

    MCAPI void onDataDrivenActorEventSend$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&
            eventData
    );

    MCAPI void onExplodeBlock$(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent>& blockExplodeEvent);

    MCAPI void onExplosion$(class Scripting::StrongTypedObjectHandle<
                            struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>& eventData);

    MCAPI void onGameRuleChange$(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptGameRuleChangeAfterEvent>& gameRulesChangeEvent);

    MCAPI void onHitTargetBlock$(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>& hitTargetBlock);

    MCAPI void onItemCompleteUse$(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>& eventData);

    MCAPI void onItemReleaseUse$(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>& eventData);

    MCAPI void onItemStartUse$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>& eventData
    );

    MCAPI void onItemStartUseOn$(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>& eventData);

    MCAPI void onItemStopUse$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>& eventData
    );

    MCAPI void onItemStopUseOn$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>& eventData
    );

    MCAPI void onItemUse$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseAfterEvent>& eventData
    );

    MCAPI void onItemUseOn$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& eventData
    );

    MCAPI void onPlayerBreakBlock$(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>& blockBreakEvent);

    MCAPI void onPlayerDimensionChange$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>&
            eventData
    );

    MCAPI void onPlayerGameModeChange$(class Scripting::StrongTypedObjectHandle<
                                       struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>& eventData);

    MCAPI void onPlayerInputPermissionCategoryChange$(
        class Scripting::StrongTypedObjectHandle<
            struct ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>& eventData
    );

    MCAPI void onPlayerInteractWithBlock$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&
            eventData
    );

    MCAPI void
    onPlayerInteractWithEntity$(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>& eventData);

    MCAPI void onPlayerJoin$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>& eventData
    );

    MCAPI void onPlayerLeave$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>& eventData
    );

    MCAPI void onPlayerPlaceBlock$(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>& blockPlaceEvent);

    MCAPI void onPlayerSpawn$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>& eventData
    );

    MCAPI void onPopPressurePlate$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&
            poppedPressurePlate
    );

    MCAPI void onProjectileHitBlock$(class Scripting::StrongTypedObjectHandle<
                                     struct ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>& eventData);

    MCAPI void onProjectileHitEntity$(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>& eventData);

    MCAPI void onPushButton$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent>& pushedButton
    );

    MCAPI void onPushPressurePlate$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&
            pushedPressurePlate
    );

    MCAPI void onServerMessage$(
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent>& eventData
    );

    MCAPI void onTripTripWire$(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>& trippedTripWire);

    MCAPI void onWeatherChanged$(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>& weatherChangedEvent);

    MCAPI void onWorldInitialize$(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>& eventData);

    MCAPI static char const* const& bindingName();

    MCAPI static struct ScriptModuleMinecraft::ScriptAsyncEventMetadata<
        class ScriptModuleMinecraft::ScriptWorldAfterEvents> const&
    mMetadata();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
