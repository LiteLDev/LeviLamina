#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/DevConnectionQuality.h"
#include "mc/network/NetworkEnableDisableListener.h"
#include "mc/network/NetworkSettingOptions.h"
#include "mc/network/PacketGroupDefinition.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class IPacketObserver;
class IPacketSerializationController;
class LocalConnector;
class NetworkConnection;
class NetworkIdentifier;
class NetworkPeer;
class NetworkSessionOwner;
class NetworkStatistics;
class Packet;
class RemoteConnector;
class Scheduler;
class ServerLocator;
class TaskGroup;
class WeakEntityRef;
struct NetworkIdentifierWithSubId;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class NetworkSystem : public ::RakNetConnector::ConnectionCallbacks,
                      public ::RakPeerHelper::IPSupportInterface,
                      public ::NetworkEnableDisableListener {
public:
    // NetworkSystem inner types declare
    // clang-format off
    struct Dependencies;
    struct IncomingPacketQueue;
    // clang-format on

    // NetworkSystem inner types define
    struct Dependencies {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk9c4ba3;
        ::ll::UntypedStorage<8, 8>  mUnke8cab9;
        ::ll::UntypedStorage<8, 8>  mUnkdd05b9;
        ::ll::UntypedStorage<8, 24> mUnk331fbf;
        ::ll::UntypedStorage<8, 24> mUnkf4c1a6;
        ::ll::UntypedStorage<4, 20> mUnkfbdc8b;
        ::ll::UntypedStorage<8, 8>  mUnk3861c4;
        // NOLINTEND

    public:
        // prevent constructor by default
        Dependencies& operator=(Dependencies const&);
        Dependencies(Dependencies const&);
        Dependencies();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Dependencies();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct IncomingPacketQueue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk601258;
        ::ll::UntypedStorage<8, 80> mUnk83a39b;
        // NOLINTEND

    public:
        // prevent constructor by default
        IncomingPacketQueue& operator=(IncomingPacketQueue const&);
        IncomingPacketQueue(IncomingPacketQueue const&);
        IncomingPacketQueue();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner>>           mNetworkSessionOwner;
    ::ll::TypedStorage<8, 80, ::std::recursive_mutex>                                         mConnectionsMutex;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::NetworkConnection>>>          mConnections;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LocalConnector>>                             mLocalConnector;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder>> mPacketGroupBuilder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RemoteConnector>>                            mRemoteConnector;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerLocator>>                              mServerLocator;
    ::ll::TypedStorage<8, 8, uint64>                                                          mCurrentConnection;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>                              mReceiveTask;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                                  mReceiveTaskGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IPacketObserver>>                  mPacketObserver;
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                                    mMainThread;
    ::ll::TypedStorage<8, 32, ::std::string>                                                  mReceiveBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                                  mSendBuffer;
    ::ll::TypedStorage<8, 80, ::BinaryStream>                                                 mSendStream;
    ::ll::TypedStorage<8, 32, ::std::unique_ptr<::NetworkSystem::IncomingPacketQueue>[4]>     mIncomingPackets;
    ::ll::TypedStorage<1, 1, bool>                                                            mUseIPv6Only;
    ::ll::TypedStorage<2, 2, ushort>                                                          mDefaultGamePort;
    ::ll::TypedStorage<2, 2, ushort>                                                          mDefaultGamePortv6;
    ::ll::TypedStorage<1, 1, bool>                                                            mIsLanDiscoveryEnabled;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NetworkStatistics>>                          mNetworkStatistics;
    ::ll::TypedStorage<1, 1, bool>                                                            mWebsocketsEnabled;
    ::ll::TypedStorage<4, 20, ::NetworkSettingOptions>                                        mNetworkSettingOptions;
    ::ll::TypedStorage<1, 1, bool>                                                            mRawRecordingEnabled;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::cereal::ReflectionCtx>>>     mReflectionCtx;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPacketSerializationController>>> mPacketOverrides;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSystem& operator=(NetworkSystem const&);
    NetworkSystem(NetworkSystem const&);
    NetworkSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool useIPv4Only() const /*override*/;

    // vIndex: 2
    virtual bool useIPv6Only() const /*override*/;

    // vIndex: 3
    virtual ushort getDefaultGamePort() const /*override*/;

    // vIndex: 4
    virtual ushort getDefaultGamePortv6() const /*override*/;

    // vIndex: 0
    virtual ~NetworkSystem() /*override*/;

    // vIndex: 1
    virtual void _onDisable() /*override*/;

    // vIndex: 2
    virtual void _onEnable() /*override*/;

    // vIndex: 1
    virtual bool
    onNewIncomingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer) /*override*/;

    // vIndex: 2
    virtual bool
    onNewOutgoingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer) /*override*/;

    // vIndex: 3
    virtual void onConnectionClosed(
        ::NetworkIdentifier const&               id,
        ::Connection::DisconnectFailReason const discoReason,
        ::std::string const&                     reasonMessage,
        bool                                     skipDisconnectMessage
    ) /*override*/;

    // vIndex: 4
    virtual void onAllConnectionsClosed(::Connection::DisconnectFailReason, ::std::string const&, bool) /*override*/;

    // vIndex: 5
    virtual void
    onAllRemoteConnectionsClosed(::Connection::DisconnectFailReason, ::std::string const&, bool) /*override*/;

    // vIndex: 6
    virtual void onOutgoingConnectionFailed(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               reasonMessage
    ) /*override*/;

    // vIndex: 7
    virtual void onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit NetworkSystem(::NetworkSystem::Dependencies&& deps);

    MCAPI void _sendInternal(::NetworkIdentifier const& id, ::Packet const& packet, ::std::string const& data);

    MCAPI bool
    _sortAndPacketizeEvents(::NetworkConnection& connection, ::std::chrono::steady_clock::time_point endTime);

    MCAPI void disconnect();

    MCAPI void enableAsyncFlush(::NetworkIdentifier const& id);

    MCAPI ::NetworkPeer* getPeerForUser(::NetworkIdentifier const& id);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::RemoteConnector> getRemoteConnector();

    MCAPI bool isServer() const;

    MCAPI void runEvents(bool networkIsCritical);

    MCAPI void send(::NetworkIdentifier const& id, ::Packet const& packet, ::SubClientId recipientSubId);

    MCAPI void sendToMultiple(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet);

    MCAPI void setDevConnectionQuality(::DevConnectionQuality quality);

    MCAPI void update(::std::vector<::WeakEntityRef> const* userList);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetworkSystem::Dependencies&& deps);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $useIPv4Only() const;

    MCAPI bool $useIPv6Only() const;

    MCAPI ushort $getDefaultGamePort() const;

    MCAPI ushort $getDefaultGamePortv6() const;

    MCAPI void $_onDisable();

    MCAPI void $_onEnable();

    MCAPI bool $onNewIncomingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer);

    MCAPI bool $onNewOutgoingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer);

    MCAPI void $onConnectionClosed(
        ::NetworkIdentifier const&               id,
        ::Connection::DisconnectFailReason const discoReason,
        ::std::string const&                     reasonMessage,
        bool                                     skipDisconnectMessage
    );

    MCAPI void
    $onOutgoingConnectionFailed(::Connection::DisconnectFailReason discoReason, ::std::string const& reasonMessage);

    MCAPI void $onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForConnectionCallbacks();

    MCNAPI static void** $vftableForIPSupportInterface();

    MCNAPI static void** $vftableForNetworkEnableDisableListener();
    // NOLINTEND
};
