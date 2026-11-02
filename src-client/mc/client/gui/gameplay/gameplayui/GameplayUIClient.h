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
        ::LocalPlayer& player,
        ::persona::ProfileType,
        ::std::string const&,
        bool,
        ::NetworkType
    ) /*override*/;

    virtual ::EventResult onEvent(::PlayerNotificationEvent const& event) /*override*/;

    virtual ::EventResult onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player) /*override*/;

    virtual ::EventResult onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player) /*override*/;

    virtual ::EventResult onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer& localPlayer) /*override*/;

    virtual ::EventResult
    onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const& uniqueID, bool) /*override*/;

    virtual ::EventResult onShowDataDrivenScreen(
        ::LocalPlayer&,
        ::std::string const&  screenId,
        uint                  formId,
        ::std::optional<uint> dataInstanceId
    ) /*override*/;

    virtual ::EventResult onCloseDataDrivenScreen(::LocalPlayer&, uint formId) /*override*/;

    virtual ::EventResult onCloseAllDataDrivenScreens(::LocalPlayer&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onJoinWorld(::IClientInstance& client);

    MCNAPI void onLeaveWorld();

    MCNAPI void setupGameServerConnectionListener(::GameConnectionConnector const& gameConnectionConnector);

    MCNAPI void update();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult
    $onPlayerCreated(::LocalPlayer& player, ::persona::ProfileType, ::std::string const&, bool, ::NetworkType);

    MCNAPI ::EventResult $onEvent(::PlayerNotificationEvent const& event);

    MCNAPI ::EventResult $onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player);

    MCNAPI ::EventResult $onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player);

    MCNAPI ::EventResult $onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer& localPlayer);

    MCNAPI ::EventResult
    $onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const& uniqueID, bool);

    MCNAPI ::EventResult $onShowDataDrivenScreen(
        ::LocalPlayer&,
        ::std::string const&  screenId,
        uint                  formId,
        ::std::optional<uint> dataInstanceId
    );

    MCNAPI ::EventResult $onCloseDataDrivenScreen(::LocalPlayer&, uint formId);

    MCNAPI ::EventResult $onCloseAllDataDrivenScreens(::LocalPlayer&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEventListenerDispatcherPlayerEventListener();

    MCNAPI static void** $vftableForEventListenerDispatcherItemEventListener();
    // NOLINTEND
};

} // namespace GameplayUI
