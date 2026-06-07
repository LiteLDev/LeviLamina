#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/events/NetworkType.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ItemEventListener.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IOptionRegistry;
class ISceneStack;
class LocalPlayer;
struct ActorUniqueID;
struct GameConnectionConnector;
struct PlayerNotificationEvent;
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class Router; }
// clang-format on

namespace GameplayUI {

class GameplayUIClient : public ::EventListenerDispatcher<::PlayerEventListener>,
                         public ::EventListenerDispatcher<::ItemEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::GameplayUI::GameplayUIContext&>                    mContext;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                                    mRouter;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                                  mOptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const>> mSceneStack;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mConnectedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mClientSideCloseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    GameplayUIClient& operator=(GameplayUIClient const&);
    GameplayUIClient(GameplayUIClient const&);
    GameplayUIClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onPlayerCreated(
        ::LocalPlayer&         player,
        ::persona::ProfileType personaSlot,
        ::std::string const&   classicSkinId,
        bool                   usingClassicSkin,
        ::NetworkType          networkType
    ) /*override*/;

    virtual ::EventResult onEvent(::PlayerNotificationEvent const& event) /*override*/;

    virtual ::EventResult onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player) /*override*/;

    virtual ::EventResult onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player) /*override*/;

    virtual ::EventResult onLocalPlayerOpenInventory(::IClientInstance& localPlayer, ::LocalPlayer&) /*override*/;

    virtual ::EventResult
    onLocalPlayerOpenTrading(::IClientInstance& uniqueID, ::LocalPlayer&, ::ActorUniqueID const&, bool) /*override*/;

    virtual ::EventResult onShowDataDrivenScreen(
        ::LocalPlayer&       screenId,
        ::std::string const& formId,
        uint                 dataInstanceId,
        ::std::optional<uint>
    ) /*override*/;

    virtual ::EventResult onCloseDataDrivenScreen(::LocalPlayer& formId, uint) /*override*/;

    virtual ::EventResult onCloseAllDataDrivenScreens(::LocalPlayer&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameplayUIClient(
        ::GameplayUI::GameplayUIContext&                   context,
        ::OreUI::Router&                                   router,
        ::IOptionRegistry&                                 options,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> sceneStack
    );

    MCAPI void onDataDrivenScreenClientSideClose();

    MCAPI void onJoinWorld(::IClientInstance& client);

    MCAPI void onLeaveWorld();

    MCAPI void setupGameServerConnectionListener(::GameConnectionConnector const& gameConnectionConnector);

    MCAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::GameplayUI::GameplayUIContext&                   context,
        ::OreUI::Router&                                   router,
        ::IOptionRegistry&                                 options,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> sceneStack
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onPlayerCreated(
        ::LocalPlayer&         player,
        ::persona::ProfileType personaSlot,
        ::std::string const&   classicSkinId,
        bool                   usingClassicSkin,
        ::NetworkType          networkType
    );

    MCAPI ::EventResult $onEvent(::PlayerNotificationEvent const& event);

    MCAPI ::EventResult $onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player);

    MCAPI ::EventResult $onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player);

    MCAPI ::EventResult $onLocalPlayerOpenInventory(::IClientInstance& localPlayer, ::LocalPlayer&);

    MCAPI ::EventResult
    $onLocalPlayerOpenTrading(::IClientInstance& uniqueID, ::LocalPlayer&, ::ActorUniqueID const&, bool);

    MCAPI ::EventResult $onShowDataDrivenScreen(
        ::LocalPlayer&       screenId,
        ::std::string const& formId,
        uint                 dataInstanceId,
        ::std::optional<uint>
    );

    MCAPI ::EventResult $onCloseDataDrivenScreen(::LocalPlayer& formId, uint);

    MCAPI ::EventResult $onCloseAllDataDrivenScreens(::LocalPlayer&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEventListenerDispatcherPlayerEventListener();

    MCNAPI static void** $vftableForEventListenerDispatcherItemEventListener();
    // NOLINTEND
};

} // namespace GameplayUI
