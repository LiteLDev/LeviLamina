#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Player;
struct ActorAddEffectEvent;
struct BlockTryDestroyByPlayerEvent;
struct BlockTryPlaceByPlayerEvent;
struct ChatEvent;
struct ClientJoinedEvent;
struct ExplosionStartedEvent;
struct ItemUseEvent;
struct ItemUseOnEvent;
struct PlayerInteractWithBlockBeforeEvent;
struct PlayerInteractWithEntityBeforeEvent;
namespace ScriptModuleMinecraft { class ScriptBlockComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptItemComponentRegistry; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedBeforeEvent; }
namespace ScriptModuleMinecraft { struct SignalNameSubscriberCount; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldBeforeEvents
: public ::ScriptModuleMinecraft::IScriptWorldBeforeEvents,
  public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk56ca7e;
    ::ll::UntypedStorage<8, 8>  mUnkfd5958;
    ::ll::UntypedStorage<8, 16> mUnkbcc9f2;
    ::ll::UntypedStorage<8, 32> mUnk34667f;
    ::ll::UntypedStorage<8, 32> mUnk332e62;
    ::ll::UntypedStorage<8, 32> mUnkfbaade;
    ::ll::UntypedStorage<8, 32> mUnkec6f78;
    ::ll::UntypedStorage<8, 32> mUnk30c72e;
    ::ll::UntypedStorage<8, 32> mUnk4c983f;
    ::ll::UntypedStorage<8, 32> mUnk76b4f3;
    ::ll::UntypedStorage<8, 32> mUnk1f7b92;
    ::ll::UntypedStorage<8, 32> mUnk7fb5b3;
    ::ll::UntypedStorage<8, 32> mUnk703a2d;
    ::ll::UntypedStorage<8, 32> mUnk191653;
    ::ll::UntypedStorage<8, 32> mUnkb41bda;
    ::ll::UntypedStorage<8, 32> mUnkd3693e;
    ::ll::UntypedStorage<8, 32> mUnkada2d9;
    ::ll::UntypedStorage<8, 32> mUnk27c8e4;
    ::ll::UntypedStorage<8, 8>  mUnkf4e2ae;
    ::ll::UntypedStorage<8, 24> mUnk1788f8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldBeforeEvents& operator=(ScriptWorldBeforeEvents const&);
    ScriptWorldBeforeEvents(ScriptWorldBeforeEvents const&);
    ScriptWorldBeforeEvents();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptWorldBeforeEvents() /*override*/;

    // vIndex: 8
    virtual void onBeforeActorRemove(::Actor const& actor) /*override*/;

    // vIndex: 1
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    onBeforeChat(::ChatEvent const& chatEvent, ::Player const& player) /*override*/;

    // vIndex: 10
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
    onBeforeExplosion(::ExplosionStartedEvent const& event) /*override*/;

    // vIndex: 13
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    onBeforeItemUse(::Player const& player, ::ItemUseEvent const& itemEvent) /*override*/;

    // vIndex: 14
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    onBeforeItemUseOn(::Player const& player, ::ItemUseOnEvent const& itemEvent) /*override*/;

    // vIndex: 11
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
    onBeforePlayerBreakBlock(::Player const& player, ::BlockTryDestroyByPlayerEvent const& eventData) /*override*/;

    // vIndex: 12
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
    onBeforePlayerPlaceBlock(::Player const& player, ::BlockTryPlaceByPlayerEvent const& eventData) /*override*/;

    // vIndex: 5
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    onBeforePlayerInteractWithBlock(
        ::Player&                                   player,
        ::PlayerInteractWithBlockBeforeEvent const& eventData
    ) /*override*/;

    // vIndex: 4
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
    onBeforePlayerInteractWithEntity(
        ::Player&                                    player,
        ::Actor&                                     target,
        ::PlayerInteractWithEntityBeforeEvent const& eventData
    ) /*override*/;

    // vIndex: 6
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>>
    onBeforePlayerGameModeChange(::Player const&, ::GameType, ::GameType) /*override*/;

    // vIndex: 2
    virtual void onBeforeWorldInitialize(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockComponentRegistry> const&
            blockComponentRegistry,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponentRegistry> const&
            itemComponentRegistry
    ) /*override*/;

    // vIndex: 7
    virtual void onBeforePlayerLeave(::Player const& player) /*override*/;

    // vIndex: 15
    virtual void onClientJoinedEvent(::ClientJoinedEvent const& e) /*override*/;

    // vIndex: 9
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
    onBeforeEffectAddedEventSend(::ActorAddEffectEvent& actorEffectAddedEvent, ::Actor const& actor) /*override*/;

    // vIndex: 3
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
    onBeforeWeatherChangedEvent(
        ::ScriptModuleMinecraft::ScriptWeatherType previousWeatherType,
        ::ScriptModuleMinecraft::ScriptWeatherType newWeatherType,
        int                                        duration
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWorldBeforeEvents(::ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    MCNAPI ScriptWorldBeforeEvents(::Scripting::WeakLifetimeScope scope, ::Level* level);

    MCNAPI ::std::vector<::ScriptModuleMinecraft::SignalNameSubscriberCount>
    getFineGrainedSignalSubscriberStats() const;

    MCNAPI void onTick();

    MCNAPI ::ScriptModuleMinecraft::ScriptWorldBeforeEvents&
    operator=(::ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    MCNAPI void registerListeners();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope scope, ::Level* level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onBeforeActorRemove(::Actor const& actor);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    $onBeforeChat(::ChatEvent const& chatEvent, ::Player const& player);

    MCNAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
    $onBeforeExplosion(::ExplosionStartedEvent const& event);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    $onBeforeItemUse(::Player const& player, ::ItemUseEvent const& itemEvent);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    $onBeforeItemUseOn(::Player const& player, ::ItemUseOnEvent const& itemEvent);

    MCNAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
    $onBeforePlayerBreakBlock(::Player const& player, ::BlockTryDestroyByPlayerEvent const& eventData);

    MCNAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
    $onBeforePlayerPlaceBlock(::Player const& player, ::BlockTryPlaceByPlayerEvent const& eventData);

    MCNAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    $onBeforePlayerInteractWithBlock(::Player& player, ::PlayerInteractWithBlockBeforeEvent const& eventData);

    MCNAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
    $onBeforePlayerInteractWithEntity(
        ::Player&                                    player,
        ::Actor&                                     target,
        ::PlayerInteractWithEntityBeforeEvent const& eventData
    );

    MCNAPI void $onBeforeWorldInitialize(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockComponentRegistry> const&
            blockComponentRegistry,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponentRegistry> const&
            itemComponentRegistry
    );

    MCNAPI void $onBeforePlayerLeave(::Player const& player);

    MCNAPI void $onClientJoinedEvent(::ClientJoinedEvent const& e);

    MCNAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
    $onBeforeEffectAddedEventSend(::ActorAddEffectEvent& actorEffectAddedEvent, ::Actor const& actor);

    MCNAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
    $onBeforeWeatherChangedEvent(
        ::ScriptModuleMinecraft::ScriptWeatherType previousWeatherType,
        ::ScriptModuleMinecraft::ScriptWeatherType newWeatherType,
        int                                        duration
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
