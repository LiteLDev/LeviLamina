#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/INetherNetTransportInterfaceCallbacks.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/network/Connector.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class WebRTCNetworkPeer;
struct ConnectionDefinition;
struct NetherNetTransportFactory;
namespace Bedrock::Http { struct LibHttpClientInstance; }
namespace Json { class Value; }
namespace NetherNet { struct INetherNetTransportInterface; }
namespace Social { struct GameConnectionInfo; }
// clang-format on

struct NetherNetConnector : public ::RemoteConnector, public ::NetherNet::INetherNetTransportInterfaceCallbacks {
public:
    // NetherNetConnector inner types declare
    // clang-format off
    struct DisconnectEvent;
    struct NewIncomingConnectionEvent;
    struct NewOutgoingConnectionEvent;
    // clang-format on

    // NetherNetConnector inner types define
    using BroadcastRequestCallback = ::std::function<bool(void*, int*)>;

    using BroadcastResponseCallback = ::std::function<void(::NetherNet::NetworkID const&, void const*, int)>;

    using UniqueLock = ::Bedrock::Threading::UniqueLock<::std::recursive_mutex>;

    struct NewIncomingConnectionEvent {};

    struct NewOutgoingConnectionEvent {};

    struct DisconnectEvent {};

    using Event = ::std::variant<
        ::NetherNetConnector::NewIncomingConnectionEvent,
        ::NetherNetConnector::NewOutgoingConnectionEvent,
        ::NetherNetConnector::DisconnectEvent>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Http::LibHttpClientInstance> const> mHttpLibrary;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID const>                                    mNetworkID;
    ::ll::TypedStorage<
        8,
        72,
        ::std::unique_ptr<
            ::NetherNet::INetherNetTransportInterface,
            ::std::function<void(::NetherNet::INetherNetTransportInterface*)>>>
                                                                  mTransport;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>        mBroadcastCallbackMutex;
    ::ll::TypedStorage<8, 64, ::std::function<bool(void*, int*)>> mBroadcastRequestCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::NetherNet::NetworkID const&, void const*, int)>>
                                                      mBroadcastResponseCallback;
    ::ll::TypedStorage<8, 80, ::std::recursive_mutex> mEventsMutex;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::std::vector<::std::variant<
            ::NetherNetConnector::NewIncomingConnectionEvent,
            ::NetherNetConnector::NewOutgoingConnectionEvent,
            ::NetherNetConnector::DisconnectEvent>>>>
                                                                                   mEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::WebRTCNetworkPeer>>> mPeers;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherNetConnector() /*override*/;

    // vIndex: 18
    virtual void setDisableLanSignaling(bool disableLanSignaling) /*override*/;

    // vIndex: 9
    virtual bool host(::ConnectionDefinition const& definition) /*override*/;

    // vIndex: 10
    virtual bool connect(
        ::Social::GameConnectionInfo const& gameConnection,
        ::Social::GameConnectionInfo const& backupConnection
    ) /*override*/;

    // vIndex: 12
    virtual void tick() /*override*/;

    // vIndex: 13
    virtual void runEvents() /*override*/;

    // vIndex: 16
    virtual ::NetworkIdentifier getNetworkIdentifier() const /*override*/;

    // vIndex: 15
    virtual void closeNetworkConnection(::NetworkIdentifier const&) /*override*/;

    // vIndex: 17
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&) /*override*/;

    // vIndex: 8
    virtual ::TransportLayer getNetworkType() const /*override*/;

    // vIndex: 1
    virtual void _onDisable() /*override*/;

    // vIndex: 2
    virtual void _onEnable() /*override*/;

    // vIndex: 5
    virtual void OnSpopViolation() /*override*/;

    // vIndex: 4
    virtual void OnSessionClose(
        ::NetherNet::NetworkID     networkID,
        uint64                     sessionId,
        ::NetherNet::ESessionError sessionError,
        ::Json::Value              summary
    ) /*override*/;

    // vIndex: 6
    virtual void
    OnBroadcastResponseReceived(::NetherNet::NetworkID networkID, void const* pApplicationData, int size) /*override*/;

    // vIndex: 7
    virtual bool OnBroadcastDiscoveryRequestReceivedGetResponse(void* pApplicationData, int* pSize) /*override*/;

    // vIndex: 1
    virtual void OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint* flags) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetherNetConnector(
        ::NetherNetTransportFactory const&      factory,
        ::Connector::ConnectionCallbacks&       callbacks,
        ::std::optional<::NetherNet::NetworkID> networkId
    );

    MCAPI ::gsl::not_null<::std::shared_ptr<::WebRTCNetworkPeer>> _getOrCreatePeer(
        ::NetherNet::NetworkID const& remoteId,
        uint64                        sessionId,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const&
    );

    MCAPI void _prepareForNewSession();

    MCAPI void _queueIncomingConnectionEvent(::NetherNet::NetworkID peerId, uint64 sessionId);

    MCAPI void _queueOutgoingConnectionEvent(::NetherNet::NetworkID peerId, uint64 sessionId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::NetherNetTransportFactory const&      factory,
        ::Connector::ConnectionCallbacks&       callbacks,
        ::std::optional<::NetherNet::NetworkID> networkId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setDisableLanSignaling(bool disableLanSignaling);

    MCFOLD bool $host(::ConnectionDefinition const& definition);

    MCFOLD bool
    $connect(::Social::GameConnectionInfo const& gameConnection, ::Social::GameConnectionInfo const& backupConnection);

    MCFOLD void $tick();

    MCAPI void $runEvents();

    MCAPI ::NetworkIdentifier $getNetworkIdentifier() const;

    MCFOLD void $closeNetworkConnection(::NetworkIdentifier const&);

    MCFOLD bool $setApplicationHandshakeCompleted(::NetworkIdentifier const&);

    MCFOLD void $_onDisable();

    MCFOLD void $_onEnable();

    MCFOLD void $OnSpopViolation();

    MCAPI void $OnSessionClose(
        ::NetherNet::NetworkID     networkID,
        uint64                     sessionId,
        ::NetherNet::ESessionError sessionError,
        ::Json::Value              summary
    );

    MCAPI void $OnBroadcastResponseReceived(::NetherNet::NetworkID networkID, void const* pApplicationData, int size);

    MCAPI bool $OnBroadcastDiscoveryRequestReceivedGetResponse(void* pApplicationData, int* pSize);

    MCAPI void $OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint* flags);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForNetworkEnableDisableListener();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForConnector();
    // NOLINTEND
};
