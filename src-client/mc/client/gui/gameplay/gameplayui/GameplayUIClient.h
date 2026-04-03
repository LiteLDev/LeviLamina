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
class IOptions;
class ISceneStack;
class ItemStackBase;
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
    ::ll::TypedStorage<8, 8, ::IOptions&>                                         mOptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const>> mSceneStack;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mConnectedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    GameplayUIClient& operator=(GameplayUIClient const&);
    GameplayUIClient(GameplayUIClient const&);
    GameplayUIClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::PlayerNotificationEvent const& event) /*override*/;

    virtual ::EventResult onPlayerCreated(
        ::LocalPlayer&         player,
        ::persona::ProfileType personaSlot,
        ::std::string const&   classicSkinId,
        bool                   usingClassicSkin,
        ::NetworkType          networkType
    ) /*override*/;

    virtual ::EventResult onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player) /*override*/;

    virtual ::EventResult onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player) /*override*/;

    virtual ::EventResult onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer& localPlayer) /*override*/;

    virtual ::EventResult
    onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const& uniqueID, bool) /*override*/;

    virtual ::EventResult
    onPreviewItemPopulatedInContainer(::ItemStackBase const& item, ::std::string const& containerName) /*override*/;

    virtual ::EventResult onShowDataDrivenScreen(
        ::LocalPlayer&,
        ::std::string const&  screenId,
        uint                  formId,
        ::std::optional<uint> dataInstanceId
    ) /*override*/;

    virtual ::EventResult onCloseDataDrivenScreen(::LocalPlayer&, uint formId) /*override*/;

    virtual ::EventResult onCloseAllDataDrivenScreens(::LocalPlayer&) /*override*/;

    virtual ~GameplayUIClient() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onLeaveWorld();

    MCAPI void setupGameServerConnectionListener(::GameConnectionConnector const& gameConnectionConnector);

    MCAPI void update();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::PlayerNotificationEvent const& event);

    MCAPI ::EventResult $onPlayerCreated(
        ::LocalPlayer&         player,
        ::persona::ProfileType personaSlot,
        ::std::string const&   classicSkinId,
        bool                   usingClassicSkin,
        ::NetworkType          networkType
    );

    MCAPI ::EventResult $onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player);

    MCAPI ::EventResult $onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player);

    MCAPI ::EventResult $onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer& localPlayer);

    MCAPI ::EventResult
    $onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const& uniqueID, bool);

    MCAPI ::EventResult
    $onPreviewItemPopulatedInContainer(::ItemStackBase const& item, ::std::string const& containerName);

    MCAPI ::EventResult $onShowDataDrivenScreen(
        ::LocalPlayer&,
        ::std::string const&  screenId,
        uint                  formId,
        ::std::optional<uint> dataInstanceId
    );

    MCAPI ::EventResult $onCloseDataDrivenScreen(::LocalPlayer&, uint formId);

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
