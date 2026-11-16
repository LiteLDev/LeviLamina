#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ServerSupportedAuthenticationTypes.h"
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/ConnectionType.h"
#include "mc/network/Nonce.h"
#include "mc/network/PingedCompatibleServer.h"
#include "mc/network/StubServerLocator.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/server/AsynchronousIPResolver.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class SignalingService;
class TransportEndpointCache;
struct NetherNetConnector;
struct PortPair;
namespace Bedrock::Http { class DispatcherInterface; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace NetherNet { struct NetworkID; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaWriter; }
// clang-format on

class NetherNetServerLocator : public ::StubServerLocator {
public:
    // NetherNetServerLocator inner types declare
    // clang-format off
    struct ExternalServerPing;
    struct HttpProbeImpl;
    struct ServerData;
    // clang-format on

    // NetherNetServerLocator inner types define
    struct ExternalServerPing {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::AsynchronousIPResolver>                                      mFutureIP;
        ::ll::TypedStorage<2, 2, ushort>                                                         mPort;
        ::ll::TypedStorage<8, 40, ::std::deque<::std::string>>                                   mUrls;
        ::ll::TypedStorage<8, 40, ::std::deque<::std::string>>                                   mFallbackUrls;
        ::ll::TypedStorage<8, 424, ::Bedrock::Threading::AsyncPromise<::PingedCompatibleServer>> mPromise;
        ::ll::TypedStorage<8, 8, uint64>                                                         mInFlightRequests;
        // NOLINTEND
    };

    struct HttpProbeImpl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            48,
            ::brstd::flat_map<
                ::std::string,
                ::std::shared_ptr<::NetherNetServerLocator::ExternalServerPing>,
                ::std::less<::std::string>,
                ::std::vector<::std::string>,
                ::std::vector<::std::shared_ptr<::NetherNetServerLocator::ExternalServerPing>>>>
            mExternalServers;
        ::ll::
            TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                mHttpProbePermissions;
        ::ll::TypedStorage<8, 40, ::std::deque<::std::shared_ptr<::NetherNetServerLocator::ExternalServerPing>>>
                                         mPendingExternalServerPings;
        ::ll::TypedStorage<8, 8, uint64> mInFlightExternalServerRequests;
        // NOLINTEND
    };

    struct ServerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar>                                mVersion;
        ::ll::TypedStorage<8, 32, ::std::string>                       mServerName;
        ::ll::TypedStorage<4, 4, int>                                  mProtocolVersion;
        ::ll::TypedStorage<8, 24, ::SemVersion>                        mAppVersion;
        ::ll::TypedStorage<8, 32, ::std::string>                       mLevelName;
        ::ll::TypedStorage<4, 4, ::GameType>                           mGameType;
        ::ll::TypedStorage<4, 4, int>                                  mNumPlayers;
        ::ll::TypedStorage<4, 4, int>                                  mMaxNumPlayers;
        ::ll::TypedStorage<1, 1, bool>                                 mIsEditorWorld;
        ::ll::TypedStorage<1, 1, bool>                                 mIsHardcore;
        ::ll::TypedStorage<1, 2, ::ServerSupportedAuthenticationTypes> mSupportedAuth;
        ::ll::TypedStorage<8, 32, ::Social::Nonce>                     mNonce;
        ::ll::TypedStorage<2, 2, ::Social::ConnectionType>             mConnectionType;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND
    };

    using Mutex = ::std::mutex;

    using UniqueLock = ::Bedrock::Threading::UniqueLock<::std::mutex>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PingedCompatibleServer>>                          mLanServerList;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NetherNetServerLocator::HttpProbeImpl>>        mHttpProbeImpl;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>>              mNetherNetConnector;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Bedrock::Http::DispatcherInterface>> mHttpDispatcher;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::TransportEndpointCache>>                      mTransportEndpointCache;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::ReflectionCtx>>                        mReflectionCtx;
    ::ll::TypedStorage<8, 168, ::std::optional<::NetherNetServerLocator::ServerData>> mCachedBroadcastDiscoveryResponse;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mSignalingStatus;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::AppPlatform>>              mAppPlatform;
    ::ll::TypedStorage<1, 1, bool>                                                    mAnnouncing;
    ::ll::TypedStorage<1, 1, bool>                                                    mDiscovering;
    ::ll::TypedStorage<8, 160, ::NetherNetServerLocator::ServerData>                  mServerToAnnounce;
    ::ll::TypedStorage<8, 80, ::std::mutex>                                           mLocatorLock;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                           mCustomServerTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetServerLocator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetherNetServerLocator() /*override*/ = default;

    virtual ::std::shared_ptr<::TransportEndpointCache> getTransportEndpointCache() const /*override*/;

    virtual void startAnnouncingServer(
        ::std::string const&                 playerName,
        ::std::string const&                 worldName,
        ::GameType                           gameType,
        int                                  numPlayers,
        int                                  maxNumPlayers,
        bool                                 isJoinableThroughServerScreen,
        bool                                 isEditorWorld,
        bool                                 isHardcore,
        ::ServerSupportedAuthenticationTypes supportedAuth,
        ::Social::Nonce const&               nonce
    ) /*override*/;

    virtual void stopAnnouncingServer() /*override*/;

    virtual void startServerDiscovery(::PortPair ports) /*override*/;

    virtual void stopServerDiscovery() /*override*/;

    virtual void addCustomServer(::AsynchronousIPResolver const& futureIP, int port) /*override*/;

    virtual ::Bedrock::PubSub::Subscription acquireHttpProbePermission() /*override*/;

    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherNetServerLocator(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&&            connector,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&                 appPlatform,
        ::Bedrock::NonOwnerPointer<::Bedrock::Http::DispatcherInterface> dispatcher,
        ::Bedrock::NonOwnerPointer<::SignalingService>                   signalingService
    );

    MCNAPI void _cacheDiscoveryResponseData();

    MCAPI bool _onDiscoveryRequest(::cereal::SchemaWriter& writer, ::cereal::ContextArea area);

    MCNAPI void _setDiscoveryRequestCallback(bool enable);

    MCNAPI void _setIsDiscovering(bool isDiscovering);

    MCNAPI void _startPendingExternalServerRequests();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PingedCompatibleServer
    _transformFrom(::NetherNet::NetworkID const& networkID, ::NetherNetServerLocator::ServerData&& serverData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&&            connector,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&                 appPlatform,
        ::Bedrock::NonOwnerPointer<::Bedrock::Http::DispatcherInterface> dispatcher,
        ::Bedrock::NonOwnerPointer<::SignalingService>                   signalingService
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::TransportEndpointCache> $getTransportEndpointCache() const;

    MCNAPI void $startAnnouncingServer(
        ::std::string const&                 playerName,
        ::std::string const&                 worldName,
        ::GameType                           gameType,
        int                                  numPlayers,
        int                                  maxNumPlayers,
        bool                                 isJoinableThroughServerScreen,
        bool                                 isEditorWorld,
        bool                                 isHardcore,
        ::ServerSupportedAuthenticationTypes supportedAuth,
        ::Social::Nonce const&               nonce
    );

    MCNAPI void $stopAnnouncingServer();

    MCNAPI void $startServerDiscovery(::PortPair ports);

    MCNAPI void $stopServerDiscovery();

    MCNAPI void $addCustomServer(::AsynchronousIPResolver const& futureIP, int port);

    MCNAPI ::Bedrock::PubSub::Subscription $acquireHttpProbePermission();

    MCNAPI ::std::vector<::PingedCompatibleServer> $getServerList() const;

    MCNAPI void $update();


    // NOLINTEND
};
