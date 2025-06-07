#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/INetherNetTransportInterfaceCallbacks.h"
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
        MCNAPI ~NewIncomingConnectionEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
        ::ll::UntypedStorage<8, 24> mUnk7dfb60;
        ::ll::UntypedStorage<8, 8>  mUnk3ff588;
        ::ll::UntypedStorage<4, 4>  mUnkabfbdc;
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
    ::ll::UntypedStorage<8, 24> mUnk2e641f;
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

    // vIndex: 9
    virtual bool host(::ConnectionDefinition const& definition) /*override*/;

    // vIndex: 10
    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&) /*override*/;

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
        ::NetherNet::ESessionError sessionError
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
    MCNAPI NetherNetConnector(
        ::NetherNetTransportFactory const&      factory,
        ::Connector::ConnectionCallbacks&       callbacks,
        ::std::optional<::NetherNet::NetworkID> networkId
    );

    MCNAPI ::gsl::not_null<::std::shared_ptr<::WebRTCNetworkPeer>> _getOrCreatePeer(
        ::NetherNet::NetworkID const& remoteId,
        uint64                        sessionId,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const&
    );

    MCNAPI void _prepareForNewSession();

    MCNAPI void setBroadcastRequestCallback(::std::function<bool(void*, int*)>&& broadcastRequestCallback);

    MCNAPI void setBroadcastResponseCallback(
        ::std::function<void(::NetherNet::NetworkID const&, void const*, int)>&& broadcastResponseCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::NetherNetTransportFactory const&      factory,
        ::Connector::ConnectionCallbacks&       callbacks,
        ::std::optional<::NetherNet::NetworkID> networkId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $host(::ConnectionDefinition const& definition);

    MCNAPI bool $connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&);

    MCNAPI void $tick();

    MCNAPI void $runEvents();

    MCNAPI ::NetworkIdentifier $getNetworkIdentifier() const;

    MCNAPI void $closeNetworkConnection(::NetworkIdentifier const&);

    MCNAPI bool $setApplicationHandshakeCompleted(::NetworkIdentifier const&);

    MCNAPI ::TransportLayer $getNetworkType() const;

    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();

    MCNAPI void $OnSpopViolation();

    MCNAPI void
    $OnSessionClose(::NetherNet::NetworkID networkID, uint64 sessionId, ::NetherNet::ESessionError sessionError);

    MCNAPI void $OnBroadcastResponseReceived(::NetherNet::NetworkID networkID, void const* pApplicationData, int size);

    MCNAPI bool $OnBroadcastDiscoveryRequestReceivedGetResponse(void* pApplicationData, int* pSize);

    MCNAPI void $OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint* flags);
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
