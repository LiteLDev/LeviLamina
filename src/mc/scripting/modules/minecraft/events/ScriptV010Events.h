#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldAfterEvents.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"
#include "mc/scripting/modules/minecraft/events/ScriptFilteredEventSignal.h"

// auto generated forward declare list
// clang-format off
class Level;
class Player;
struct ChatEvent;
struct ItemUseEvent;
struct ItemUseOnEvent;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorEventListener; }
namespace ScriptModuleMinecraft { class ScriptBlockEventListener; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptItemEventListener; }
namespace ScriptModuleMinecraft { class ScriptLevelEventListener; }
namespace ScriptModuleMinecraft { class ScriptPlayerEventListener; }
namespace ScriptModuleMinecraft { class ScriptServerNetworkEventListener; }
namespace ScriptModuleMinecraft { struct EmptyFilter; }
namespace ScriptModuleMinecraft { struct ScriptActorCreateEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTickEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEvent; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorEventFilter; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptDataDrivenActorTriggerEventFilter; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptV010Events : public ::ScriptModuleMinecraft::IScriptWorldAfterEvents,
                         public ::ScriptModuleMinecraft::IScriptWorldBeforeEvents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                            mScope;
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptV010Events>> mHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Level*>>                                                  mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptGlobalEventListeners*> mGlobalEventListeners;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptActorEventListener>> mActorEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptBlockEventListener>> mBlockEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptItemEventListener>>  mItemEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptLevelEventListener>> mLevelEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptPlayerEventListener>>
        mPlayerEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptServerNetworkEventListener>>
        mServerNetworkEventListener;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptTickEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mTickSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mWeatherChangeSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mWorldInitializeSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mPlayerJoinEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mPlayerLeaveEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptChatSendBeforeEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforeChatSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptActorCreateEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mEntityCreateSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptActorHitAfterEvent,
            0,
            ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter>>>
        mEntityHitSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent,
            0,
            ::ScriptModuleMinecraft::EventFilters::ScriptDataDrivenActorTriggerEventFilter>>>
        mDataDrivenEntityEventSend;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptActorHurtAfterEvent,
            0,
            ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter>>>
        mEntityHurtSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemUseBeforeEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemBeforeUseEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemBeforeUseOnEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemUseOnEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemStartChargeEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemCompleteChargeEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemReleaseChargeEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemStopChargeEventSignal;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptV010Events& operator=(ScriptV010Events const&);
    ScriptV010Events(ScriptV010Events const&);
    ScriptV010Events();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptV010Events() /*override*/;

    // vIndex: 1
    virtual ::Level& getLevel() const /*override*/;

    // vIndex: 3
    virtual void onWeatherChanged(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&
            weatherChangedEvent
    ) /*override*/;

    // vIndex: 4
    virtual void onWorldInitialize(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&
            worldInitializeEvent
    ) /*override*/;

    // vIndex: 5
    virtual void onPlayerJoin(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>& playerJoinEvent
    ) /*override*/;

    // vIndex: 6
    virtual void onPlayerLeave(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>& playerLeaveEvent
    ) /*override*/;

    // vIndex: 1
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    onBeforeChat(::ChatEvent const& chatEvent, ::Player const& player) /*override*/;

    // vIndex: 11
    virtual void onActorRemoved(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const& removedActor,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&
    ) /*override*/;

    // vIndex: 12
    virtual void onActorHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&
            actorHitEntityEvent
    ) /*override*/;

    // vIndex: 13
    virtual void onActorHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>& actorHitBlockEvent
    ) /*override*/;

    // vIndex: 15
    virtual void onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>&
            dataDrivenActorEventSend
    ) /*override*/;

    // vIndex: 16
    virtual void onActorHurt(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtAfterEvent>& hurtEvent
    ) /*override*/;

    // vIndex: 13
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    onBeforeItemUse(::Player const& player, ::ItemUseEvent const& itemEvent) /*override*/;

    // vIndex: 14
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    onBeforeItemUseOn(::Player const& player, ::ItemUseOnEvent const& itemEvent) /*override*/;

    // vIndex: 44
    virtual void onItemUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& itemEvent
    ) /*override*/;

    // vIndex: 47
    virtual void onItemStartUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>& itemEvent
    ) /*override*/;

    // vIndex: 48
    virtual void onItemCompleteUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>& itemEvent
    ) /*override*/;

    // vIndex: 49
    virtual void onItemReleaseUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>& itemEvent
    ) /*override*/;

    // vIndex: 50
    virtual void onItemStopUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>& itemEvent
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptV010Events(::ScriptModuleMinecraft::ScriptV010Events&&);

    MCNAPI ScriptV010Events(::Scripting::WeakLifetimeScope const& scope, ::gsl::not_null<::Level*> level);

    MCNAPI ::ScriptModuleMinecraft::ScriptV010Events& operator=(::ScriptModuleMinecraft::ScriptV010Events&&);

    MCNAPI void registerListener(
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptV010Events> handle,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners&                      globalEventListeners
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptV010Events&&);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const& scope, ::gsl::not_null<::Level*> level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Level& $getLevel() const;

    MCNAPI void $onWeatherChanged(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&
            weatherChangedEvent
    );

    MCNAPI void $onWorldInitialize(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&
            worldInitializeEvent
    );

    MCNAPI void $onPlayerJoin(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>& playerJoinEvent
    );

    MCNAPI void $onPlayerLeave(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>& playerLeaveEvent
    );

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    $onBeforeChat(::ChatEvent const& chatEvent, ::Player const& player);

    MCNAPI void $onActorRemoved(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const& removedActor,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&
    );

    MCNAPI void $onActorHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&
            actorHitEntityEvent
    );

    MCNAPI void $onActorHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>& actorHitBlockEvent
    );

    MCNAPI void $onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>&
            dataDrivenActorEventSend
    );

    MCNAPI void
    $onActorHurt(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtAfterEvent>& hurtEvent);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    $onBeforeItemUse(::Player const& player, ::ItemUseEvent const& itemEvent);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    $onBeforeItemUseOn(::Player const& player, ::ItemUseOnEvent const& itemEvent);

    MCNAPI void
    $onItemUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& itemEvent);

    MCNAPI void $onItemStartUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>& itemEvent
    );

    MCNAPI void $onItemCompleteUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>& itemEvent
    );

    MCNAPI void $onItemReleaseUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>& itemEvent
    );

    MCNAPI void $onItemStopUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>& itemEvent
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIScriptWorldAfterEvents();

    MCNAPI static void** $vftableForIScriptWorldBeforeEvents();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
