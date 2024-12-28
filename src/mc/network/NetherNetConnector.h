#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ERelayServerConfigurationResult.h"
#include "mc/deps/nether_net/ESendType.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/INetherNetTransportInterfaceCallbacks.h"
#include "mc/deps/nether_net/IWebRTCSignalingInterface.h"
#include "mc/deps/nether_net/SignalingHostConnectionStatus.h"
#include "mc/network/Connector.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
class NetherNetTransportFactory;
class NetworkIdentifier;
class WebRTCNetworkPeer;
struct ConnectionDefinition;
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace Social { class GameConnectionInfo; }
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
    struct NewIncomingConnectionEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk7e0875;
        // NOLINTEND

    public:
        // prevent constructor by default
        NewIncomingConnectionEvent& operator=(NewIncomingConnectionEvent const&);
        NewIncomingConnectionEvent(NewIncomingConnectionEvent const&);
        NewIncomingConnectionEvent();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~NewIncomingConnectionEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct NewOutgoingConnectionEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk7af0fc;
        // NOLINTEND

    public:
        // prevent constructor by default
        NewOutgoingConnectionEvent& operator=(NewOutgoingConnectionEvent const&);
        NewOutgoingConnectionEvent(NewOutgoingConnectionEvent const&);
        NewOutgoingConnectionEvent();
    };

    struct DisconnectEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk7dfb60;
        ::ll::UntypedStorage<8, 8> mUnk3ff588;
        ::ll::UntypedStorage<4, 4> mUnkabfbdc;
        // NOLINTEND

    public:
        // prevent constructor by default
        DisconnectEvent& operator=(DisconnectEvent const&);
        DisconnectEvent(DisconnectEvent const&);
        DisconnectEvent();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1bd5e8;
    ::ll::UntypedStorage<8, 8>  mUnk2e641f;
    ::ll::UntypedStorage<8, 72> mUnkdab955;
    ::ll::UntypedStorage<8, 80> mUnka70516;
    ::ll::UntypedStorage<8, 64> mUnke5eec7;
    ::ll::UntypedStorage<8, 64> mUnkb0750a;
    ::ll::UntypedStorage<8, 80> mUnk76f98d;
    ::ll::UntypedStorage<8, 8>  mUnk3e1ced;
    ::ll::UntypedStorage<8, 24> mUnk3a81cd;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetConnector& operator=(NetherNetConnector const&);
    NetherNetConnector(NetherNetConnector const&);
    NetherNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherNetConnector() /*override*/;

    // vIndex: 11
    virtual bool host(::ConnectionDefinition const& definition) /*override*/;

    // vIndex: 12
    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&) /*override*/;

    // vIndex: 14
    virtual void tick() /*override*/;

    // vIndex: 15
    virtual void runEvents() /*override*/;

    // vIndex: 18
    virtual ::NetworkIdentifier getNetworkIdentifier() const /*override*/;

    // vIndex: 17
    virtual void closeNetworkConnection(::NetworkIdentifier const&) /*override*/;

    // vIndex: 19
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&) /*override*/;

    // vIndex: 10
    virtual ::TransportLayer getNetworkType() const /*override*/;

    // vIndex: 1
    virtual void _onDisable() /*override*/;

    // vIndex: 2
    virtual void _onEnable() /*override*/;

    // vIndex: 4
    virtual void OnSpopViolation() /*override*/;

    // vIndex: 3
    virtual void OnSessionClose(
        ::NetherNet::NetworkID     networkID,
        uint64                     sessionId,
        ::NetherNet::ESessionError sessionError
    ) /*override*/;

    // vIndex: 5
    virtual void
    OnBroadcastResponseReceived(::NetherNet::NetworkID networkID, void const* pApplicationData, int size) /*override*/;

    // vIndex: 6
    virtual bool OnBroadcastDiscoveryRequestReceivedGetResponse(void* pApplicationData, int* pSize) /*override*/;

    // vIndex: 0
    virtual void OnSessionGetConnectionFlags(::NetherNet::NetworkID id, uint* flags) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetherNetConnector(::NetherNetTransportFactory const& factory, ::Connector::ConnectionCallbacks& callbacks);

    MCAPI ::gsl::not_null<::std::shared_ptr<::WebRTCNetworkPeer>>
    _getOrCreatePeer(uint64 remoteId, uint64 sessionId, ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const&);

    MCAPI void clearPacketData(::NetherNet::NetworkID remoteId, uint64 sessionId) const;

    MCAPI bool closeSessionWithUser(::NetherNet::NetworkID remoteId, uint64 sessionId);

    MCAPI bool
    getSessionState(::NetherNet::NetworkID remoteId, uint64 sessionId, ::NetherNet::SessionState* connectionState)
        const;

    MCAPI bool isPacketAvailable(::NetherNet::NetworkID remoteId, uint64 sessionId, uint* pcbMessageSize) const;

    MCAPI bool
    readPacket(::NetherNet::NetworkID remoteId, uint64 sessionId, void* pubDest, uint cbDest, uint* pcbMessageSize)
        const;

    MCAPI bool sendPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 sessionId,
        char const*            pbData,
        uint                   cbData,
        ::NetherNet::ESendType eSendType
    ) const;

    MCAPI void setBroadcastRequestCallback(::std::function<bool(void*, int*)>&& broadcastRequestCallback);

    MCAPI void setBroadcastResponseCallback(
        ::std::function<void(::NetherNet::NetworkID const&, void const*, int)>&& broadcastResponseCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetherNetTransportFactory const& factory, ::Connector::ConnectionCallbacks& callbacks);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $host(::ConnectionDefinition const& definition);

    MCAPI bool $connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&);

    MCAPI void $tick();

    MCAPI void $runEvents();

    MCAPI ::NetworkIdentifier $getNetworkIdentifier() const;

    MCAPI void $closeNetworkConnection(::NetworkIdentifier const&);

    MCAPI bool $setApplicationHandshakeCompleted(::NetworkIdentifier const&);

    MCAPI ::TransportLayer $getNetworkType() const;

    MCAPI void $_onDisable();

    MCAPI void $_onEnable();

    MCAPI void $OnSpopViolation();

    MCAPI void
    $OnSessionClose(::NetherNet::NetworkID networkID, uint64 sessionId, ::NetherNet::ESessionError sessionError);

    MCAPI void $OnBroadcastResponseReceived(::NetherNet::NetworkID networkID, void const* pApplicationData, int size);

    MCAPI bool $OnBroadcastDiscoveryRequestReceivedGetResponse(void* pApplicationData, int* pSize);

    MCAPI void $OnSessionGetConnectionFlags(::NetherNet::NetworkID id, uint* flags);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForNetworkEnableDisableListener();

    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftable();

    MCAPI static void** $vftableForConnector();
    // NOLINTEND
};
