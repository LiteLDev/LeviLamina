#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESendType.h"
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
class NetherNetTransportFactory;
class NetworkIdentifier;
class WebRTCNetworkPeer;
struct ConnectionDefinition;
namespace Bedrock::Http { class LibHttpClientInstance; }
namespace Bedrock::PubSub { class Subscription; }
namespace Json { class Value; }
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class ISignalingInterface; }
namespace NetherNet { struct ILanEventHandler; }
namespace NetherNet { struct SessionState; }
namespace NetherNet { struct StunRelayServer; }
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
    struct DisconnectEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk7dfb60;
        ::ll::UntypedStorage<8, 8>  mUnk3ff588;
        ::ll::UntypedStorage<4, 4>  mUnkabfbdc;
        ::ll::UntypedStorage<8, 16> mUnkb65022;
        // NOLINTEND

    public:
        // prevent constructor by default
        DisconnectEvent& operator=(DisconnectEvent const&);
        DisconnectEvent(DisconnectEvent const&);
        DisconnectEvent();
    };

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

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~NewOutgoingConnectionEvent();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

    using BroadcastRequestCallback = ::std::function<bool(void*, int*)>;

    using BroadcastResponseCallback = ::std::function<void(::NetherNet::NetworkID const&, void const*, int)>;

    using Event = ::std::variant<
        ::NetherNetConnector::NewIncomingConnectionEvent,
        ::NetherNetConnector::NewOutgoingConnectionEvent,
        ::NetherNetConnector::DisconnectEvent>;

    using UniqueLock = ::Bedrock::Threading::UniqueLock<::std::recursive_mutex>;

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
    virtual ~NetherNetConnector() /*override*/;

    virtual bool closeSessionWithUser(::NetherNet::NetworkID remoteId, uint64 sessionId);

    virtual void setDisableLanSignaling(bool disableLanSignaling) /*override*/;

    virtual bool host(::ConnectionDefinition const& definition) /*override*/;

    virtual bool connect(
        ::Social::GameConnectionInfo const& primaryConnection,
        ::Social::GameConnectionInfo const& backupConnection
    ) /*override*/;

    virtual void tick() /*override*/;

    virtual void runEvents() /*override*/;

    virtual ::NetworkIdentifier getNetworkIdentifier() const /*override*/;

    virtual void closeNetworkConnection(::NetworkIdentifier const&) /*override*/;

    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&) /*override*/;

    virtual ::TransportLayer getNetworkType() const /*override*/;

    virtual void _onDisable() /*override*/;

    virtual void _onEnable() /*override*/;

    virtual void OnSpopViolation() /*override*/;

    virtual void OnSessionClose(
        ::NetherNet::NetworkID     networkID,
        uint64                     sessionId,
        ::NetherNet::ESessionError sessionError,
        ::Json::Value              summary
    ) /*override*/;

    virtual void
    OnBroadcastResponseReceived(::NetherNet::NetworkID networkID, void const* pApplicationData, int size) /*override*/;

    virtual bool OnBroadcastDiscoveryRequestReceivedGetResponse(void* pApplicationData, int* pSize) /*override*/;

    virtual void OnSessionGetConnectionFlags(::NetherNet::NetworkID flags, uint*) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetherNetConnector(
        ::NetherNetTransportFactory const&      factory,
        ::Connector::ConnectionCallbacks&       callbacks,
        ::std::optional<::NetherNet::NetworkID> networkId
    );

    MCAPI void _createEventQueue();

    MCAPI ::gsl::not_null<::std::shared_ptr<::WebRTCNetworkPeer>> _getOrCreatePeer(
        ::NetherNet::NetworkID const& remoteId,
        uint64                        sessionId,
        bool                          isLan,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const&
    );

    MCAPI void _queueIncomingConnectionEvent(::NetherNet::NetworkID peerId, uint64 sessionId, bool isLan);

#ifdef LL_PLAT_C
    MCAPI void _queueOutgoingConnectionEvent(::NetherNet::NetworkID peerId, uint64 sessionId, bool isLan);
#endif

    MCFOLD ::NetherNet::NetworkID const& getNetworkID() const;

    MCAPI bool getSessionState(
        ::NetherNet::NetworkID     remoteId,
        uint64                     sessionId,
        ::NetherNet::SessionState* connectionState
    ) const;

    MCAPI bool isPacketAvailable(::NetherNet::NetworkID remoteId, uint64 sessionId, uint* pcbMessageSize) const;

    MCAPI bool readPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 sessionId,
        void*                  pubDest,
        uint                   cbDest,
        uint*                  pcbMessageSize
    ) const;

#ifdef LL_PLAT_C
    MCAPI ::Bedrock::PubSub::Subscription registerLanEventHandler(::NetherNet::ILanEventHandler* handler) const;
#endif

    MCAPI bool sendPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 sessionId,
        ::std::string const&   data,
        ::NetherNet::ESendType eSendType
    ) const;

    MCAPI void setBroadcastRequestCallback(::std::function<bool(void*, int*)>&& broadcastRequestCallback);

    MCAPI void setBroadcastResponseCallback(
        ::std::function<void(::NetherNet::NetworkID const&, void const*, int)>&& broadcastResponseCallback
    );

    MCAPI void setRelayConfig(::std::vector<::NetherNet::StunRelayServer> const& config) const;

    MCAPI void setSignalingInterface(::std::shared_ptr<::NetherNet::ISignalingInterface>&& channel) const;
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
    MCAPI bool $closeSessionWithUser(::NetherNet::NetworkID remoteId, uint64 sessionId);

    MCAPI void $setDisableLanSignaling(bool disableLanSignaling);

    MCFOLD bool $host(::ConnectionDefinition const& definition);

    MCFOLD bool $connect(
        ::Social::GameConnectionInfo const& primaryConnection,
        ::Social::GameConnectionInfo const& backupConnection
    );

    MCFOLD void $tick();

    MCAPI void $runEvents();

    MCAPI ::NetworkIdentifier $getNetworkIdentifier() const;

    MCFOLD void $closeNetworkConnection(::NetworkIdentifier const&);

    MCFOLD bool $setApplicationHandshakeCompleted(::NetworkIdentifier const&);

    MCFOLD ::TransportLayer $getNetworkType() const;

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

    MCAPI void $OnSessionGetConnectionFlags(::NetherNet::NetworkID flags, uint*);


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
