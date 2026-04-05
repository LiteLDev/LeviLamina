#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/NetworkType.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class RealmsAPI;
struct ExperienceConnectionData;
struct GameConnectionInfoEx;
struct PlayerJoinWorldContext;
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class MultiplayerGameInfo; }
// clang-format on

class INetworkGameConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INetworkGameConnector() = default;

    virtual void joinRealmsGame(
        ::Realms::World const&              realm,
        ::Social::GameConnectionInfo const& gameConnection,
        ::PlayerJoinWorldContext            context
    ) = 0;

    virtual void joinRemoteServerWithAddress(
        ::Social::GameConnectionInfo gameConnection,
        ::std::string const&         serverName,
        ::std::string const&         worldName,
        ::NetworkType                networkTypeOverride,
        ::PlayerJoinWorldContext     context
    ) = 0;

    virtual ::Bedrock::Threading::Async<void>
    joinMultiplayerGame(::Social::MultiplayerGameInfo const& gameInfo, ::PlayerJoinWorldContext context) = 0;

    virtual void setReconnectionCookie(
        ::std::optional<::std::variant<
            ::GameConnectionInfoEx,
            ::Social::MultiplayerGameInfo,
            ::ExperienceConnectionData,
            ::Realms::RealmId>> const& reconnectCookie
    ) = 0;

    virtual ::std::optional<::std::variant<
        ::GameConnectionInfoEx,
        ::Social::MultiplayerGameInfo,
        ::ExperienceConnectionData,
        ::Realms::RealmId>>
    getReconnectionCookie() = 0;

    virtual void joinRealmFromConnectLink(::Realms::World const& world, ::PlayerJoinWorldContext context) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> getPrimaryClientInstance() = 0;

    virtual ::std::weak_ptr<::RealmsAPI> getRealms() = 0;

    virtual void joinRealm(
        ::Realms::World const&                    world,
        ::IMinecraftEventing::RealmConnectionFlow telemetryEventingConnectionFlow,
        ::PlayerJoinWorldContext                  context
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
