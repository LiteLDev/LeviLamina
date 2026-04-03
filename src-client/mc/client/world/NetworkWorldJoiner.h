#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/world/JoinRealmWorldResult.h"
#include "mc/client/world/JoinServerWorldResult.h"
#include "mc/client/world/RealmWorldJoiner.h"
#include "mc/client/world/ServerURLResolver.h"
#include "mc/client/world/ServerWorldJoiner.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class GatheringManager;
class IAppPlatform;
class IClientInstance;
class IMinecraftEventing;
class INetworkGameConnector;
class IThirdPartyServerRepository;
class ProgressHandler;
class RealmsAPI;
class ServerLocator;
struct IGameServerShutdown;
namespace Bedrock::PubSub { class Subscription; }
namespace Network { struct ServerID; }
namespace OreUI { class Router; }
namespace Parties { class IPartyProvider; }
namespace Realms { struct RealmId; }
namespace Social { class IUserManager; }
namespace World { class ExternalServerWorldList; }
namespace World { class FriendServerWorldList; }
namespace World { class LanServerWorldList; }
namespace World { class ThirdPartyWorldList; }
namespace World { struct RealmsJoinData; }
namespace ui { class ProgressScreenNavigation; }
// clang-format on

namespace World {

class NetworkWorldJoiner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 472, ::World::RealmWorldJoiner>  mRealmWorldJoiner;
    ::ll::TypedStorage<8, 192, ::World::ServerWorldJoiner> mServerWorldJoiner;
    ::ll::TypedStorage<8, 8, ::World::ServerURLResolver>   mServerURLResolver;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>             mRouter;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldJoiner& operator=(NetworkWorldJoiner const&);
    NetworkWorldJoiner(NetworkWorldJoiner const&);
    NetworkWorldJoiner();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkWorldJoiner(
        ::IClientInstance&                                                       client,
        ::IGameServerShutdown&                                                   gameServerShutdown,
        ::INetworkGameConnector&                                                 networkGameConnector,
        ::IMinecraftEventing&                                                    minecraftEventing,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&             userManager,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                        appPlatform,
        ::std::weak_ptr<::RealmsAPI>                                             realmsAPI,
        ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository>             thirdPartyServerRepository,
        ::ServerLocator&                                                         serverLocator,
        ::World::ExternalServerWorldList&                                        externalServerWorldList,
        ::World::FriendServerWorldList&                                          friendServerWorldList,
        ::World::LanServerWorldList&                                             lanServerWorldList,
        ::World::ThirdPartyWorldList&                                            thirdPartyWorldList,
        bool                                                                     isEduMode,
        ::Bedrock::NotNullNonOwnerPtr<::GatheringManager> const&                 gatheringManager,
        ::ui::ProgressScreenNavigation                                           progressScreenNavigation,
        ::OreUI::Router&                                                         router,
        ::std::function<::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>()> getPartyProvider,
        ::std::function<bool(::Realms::RealmId)>                                 isRealmJoinable
    );

    MCAPI void joinExternalNetworkWorld(
        ::std::string const&                                                            id,
        ::std::function<void(::std::deque<::std::unique_ptr<::ProgressHandler>>, bool)> onJoinServerCompleted,
        ::std::function<void(::World::JoinServerWorldResult)>                           onErrorCallback
    );

    MCAPI void joinFriendServerWorld(
        ::Network::ServerID const&                            serverId,
        ::std::function<void(::World::JoinServerWorldResult)> onCompleteCallback
    );

    MCAPI void joinLANServerWorld(
        ::Network::ServerID const&                                  serverId,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>)> onCompleteCallback,
        ::std::function<void(::World::JoinServerWorldResult)>       onErrorCallback
    );

    MCAPI void joinRealmWorld(
        ::Realms::RealmId                                    realmId,
        ::IMinecraftEventing::RealmConnectionFlow            fromFlow,
        ::std::function<void(::World::JoinRealmWorldResult)> onRealmResult,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>, ::std::unique_ptr<::ProgressHandler>)>
            onRealmFetched,
        ::std::function<void(
            ::IMinecraftEventing::RealmConnectionResult,
            ::std::optional<::Realms::FailureReason>,
            ::std::optional<::World::RealmsJoinData>
        )>  onRealmJoined
    );

    MCAPI void
    joinRealmWorldWithRoute(::std::string const& realmIdString, ::IMinecraftEventing::RealmConnectionFlow fromFlow);

    MCAPI void joinThirdPartyServerWorld(
        ::std::string const&                                                            id,
        ::std::function<void(::std::deque<::std::unique_ptr<::ProgressHandler>>, bool)> onJoinServerCompleted,
        ::std::function<void(::World::JoinServerWorldResult)>                           onErrorCallback
    );

    MCAPI ::Bedrock::PubSub::Subscription subscribeToJoinRealmWorldResultPublisher(
        ::std::function<void(::World::JoinRealmWorldResult)> onJoinRealmWorldResult
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IClientInstance&                                                       client,
        ::IGameServerShutdown&                                                   gameServerShutdown,
        ::INetworkGameConnector&                                                 networkGameConnector,
        ::IMinecraftEventing&                                                    minecraftEventing,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&             userManager,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                        appPlatform,
        ::std::weak_ptr<::RealmsAPI>                                             realmsAPI,
        ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository>             thirdPartyServerRepository,
        ::ServerLocator&                                                         serverLocator,
        ::World::ExternalServerWorldList&                                        externalServerWorldList,
        ::World::FriendServerWorldList&                                          friendServerWorldList,
        ::World::LanServerWorldList&                                             lanServerWorldList,
        ::World::ThirdPartyWorldList&                                            thirdPartyWorldList,
        bool                                                                     isEduMode,
        ::Bedrock::NotNullNonOwnerPtr<::GatheringManager> const&                 gatheringManager,
        ::ui::ProgressScreenNavigation                                           progressScreenNavigation,
        ::OreUI::Router&                                                         router,
        ::std::function<::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>()> getPartyProvider,
        ::std::function<bool(::Realms::RealmId)>                                 isRealmJoinable
    );
    // NOLINTEND
};

} // namespace World
