#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/JoinServerWorldResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GatheringManager;
class IAppPlatform;
class IClientInstance;
class IMinecraftEventing;
class INetworkGameConnector;
class IThirdPartyServerRepository;
class ProgressHandler;
class ServerLocator;
class TaskGroup;
struct NetworkWorldInfo;
struct PingedCompatibleServer;
namespace Network { struct ServerID; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class User; }
namespace World { class ExternalServerWorldList; }
namespace World { class FriendServerWorldList; }
namespace World { class IServerURLResolver; }
namespace World { class LanServerWorldList; }
namespace World { class ThirdPartyWorldList; }
// clang-format on

namespace World {

class ServerWorldJoiner {
public:
    // ServerWorldJoiner inner types define
    enum class ServerType : int {
        ThirdParty       = 0,
        ExternalServer   = 1,
        ExperienceServer = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                            mClient;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                         mMinecraftEventing;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Social::IUserManager>>           mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IAppPlatform>>                   mAppPlatform;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository>> mThirdPartyServerRepository;
    ::ll::TypedStorage<8, 8, ::ServerLocator&>                                              mServerLocator;
    ::ll::TypedStorage<8, 8, ::World::IServerURLResolver&>                                  mServerURLResolver;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                                mTaskGroup;
    ::ll::TypedStorage<8, 8, ::INetworkGameConnector&>                                      mNetworkGameConnector;
    ::ll::TypedStorage<8, 8, ::World::ExternalServerWorldList&>                             mExternalServerWorldList;
    ::ll::TypedStorage<8, 8, ::World::FriendServerWorldList&>                               mFriendServerWorldList;
    ::ll::TypedStorage<8, 8, ::World::LanServerWorldList&>                                  mLanServerWorldList;
    ::ll::TypedStorage<8, 8, ::World::ThirdPartyWorldList&>                                 mThirdPartyWorldList;
    ::ll::TypedStorage<1, 1, bool>                                                          mIsEduMode;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GatheringManager>>            mGatheringManager;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                       mServerConnectionTime;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerWorldJoiner& operator=(ServerWorldJoiner const&);
    ServerWorldJoiner(ServerWorldJoiner const&);
    ServerWorldJoiner();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerWorldJoiner(
        ::IClientInstance&                                           client,
        ::IMinecraftEventing&                                        minecraftEventing,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const& userManager,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&            appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository> thirdPartyServerRepository,
        ::ServerLocator&                                             serverLocator,
        ::World::IServerURLResolver&                                 serverURLResolver,
        ::INetworkGameConnector&                                     networkGameConnector,
        ::World::ExternalServerWorldList&                            externalServerWorldList,
        ::World::FriendServerWorldList&                              friendServerWorldList,
        ::World::LanServerWorldList&                                 lanServerWorldList,
        ::World::ThirdPartyWorldList&                                thirdPartyWorldList,
        bool                                                         isEduMode,
        ::Bedrock::NotNullNonOwnerPtr<::GatheringManager> const&     gatheringManager
    );

    MCAPI ::Social::GameConnectionInfo
    _getGameConnectionInfo(::NetworkWorldInfo& world, ::World::ServerWorldJoiner::ServerType serverType);

    MCAPI void _joinFriendWorld(
        ::NetworkWorldInfo const&                             world,
        ::std::function<void(::World::JoinServerWorldResult)> onCompleteCallback
    );

    MCAPI void _joinLanWorld(
        ::PingedCompatibleServer const*                             world,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>)> onCompleteCallback,
        ::std::function<void(::World::JoinServerWorldResult)>       onErrorCallback
    );

    MCAPI void _joinNetworkWorld(
        ::NetworkWorldInfo&                                                             world,
        ::World::ServerWorldJoiner::ServerType                                          serverType,
        ::std::function<void(::std::deque<::std::unique_ptr<::ProgressHandler>>, bool)> onJoinServerCompleted,
        ::std::function<void(::World::JoinServerWorldResult)>                           onErrorCallback
    );

    MCAPI bool _validateInternetConnection(::Social::User& user) const;

    MCAPI ::World::JoinServerWorldResult _validateUserInfo(::std::shared_ptr<::Social::User> user) const;

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

    MCAPI void joinThirdPartyServerWorld(
        ::std::string const&                                                            id,
        ::std::function<void(::std::deque<::std::unique_ptr<::ProgressHandler>>, bool)> onJoinServerCompleted,
        ::std::function<void(::World::JoinServerWorldResult)>                           onErrorCallback
    );

    MCAPI ~ServerWorldJoiner();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IClientInstance&                                           client,
        ::IMinecraftEventing&                                        minecraftEventing,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const& userManager,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&            appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository> thirdPartyServerRepository,
        ::ServerLocator&                                             serverLocator,
        ::World::IServerURLResolver&                                 serverURLResolver,
        ::INetworkGameConnector&                                     networkGameConnector,
        ::World::ExternalServerWorldList&                            externalServerWorldList,
        ::World::FriendServerWorldList&                              friendServerWorldList,
        ::World::LanServerWorldList&                                 lanServerWorldList,
        ::World::ThirdPartyWorldList&                                thirdPartyWorldList,
        bool                                                         isEduMode,
        ::Bedrock::NotNullNonOwnerPtr<::GatheringManager> const&     gatheringManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
