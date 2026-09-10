#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/JoinServerWorldResult.h"
#include "mc/deps/core/threading/Async.h"
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
struct ExperienceJoinRequestInfo;
struct NetworkWorldInfo;
struct PlayerJoinWorldContext;
namespace Network { struct ServerID; }
namespace OreUI { class Router; }
namespace Parties { class IPartyProvider; }
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
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>()>>
                                                                      mGetPartyProvider;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                        mRouter;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mServerConnectionTime;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerWorldJoiner& operator=(ServerWorldJoiner const&);
    ServerWorldJoiner(ServerWorldJoiner const&);
    ServerWorldJoiner();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::Threading::Async<::World::JoinServerWorldResult> _joinExperienceWorld(
        ::ExperienceJoinRequestInfo const& connectionData,
        ::PlayerJoinWorldContext const&    joinContext
    );

    MCAPI void _joinFriendWorld(
        ::NetworkWorldInfo const&                             world,
        ::std::function<void(::World::JoinServerWorldResult)> onCompleteCallback
    );

    MCAPI void _joinNetworkWorld(
        ::NetworkWorldInfo&                                                             world,
        ::World::ServerWorldJoiner::ServerType const                                    serverType,
        ::std::function<void(::std::deque<::std::unique_ptr<::ProgressHandler>>, bool)> onJoinServerCompleted,
        ::std::function<void()>                                                         onJoinServerCancelled,
        ::std::function<void(::World::JoinServerWorldResult)>                           onErrorCallback
    );

    MCAPI bool _validateInternetConnection(::Social::User& user) const;

    MCAPI void joinExternalNetworkWorld(
        ::std::string const&                                                            id,
        ::std::function<void(::std::deque<::std::unique_ptr<::ProgressHandler>>, bool)> onJoinServerCompleted,
        ::std::function<void(::World::JoinServerWorldResult)>                           onErrorCallback
    );

    MCAPI void joinExternalServer(
        ::std::string const&                                  server,
        ushort                                                port,
        ::std::string const&                                  externalServerName,
        ::std::function<void(::World::JoinServerWorldResult)> onErrorCallback
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
    // NOLINTEND
};

} // namespace World
