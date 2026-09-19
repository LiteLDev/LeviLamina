#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/INetherNetTransportInterfaceCallbacks.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/network/Connector.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
class NetherNetTransportFactory;
class NetworkIdentifier;
class PrivateKeyManager;
class WebRTCNetworkPeer;
struct ConnectionDefinition;
namespace Bedrock::Http { class LibHttpClientInstance; }
namespace Json { class Value; }
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace NetherNet { class INetherNetTransportInterface; }
namespace Social { class GameConnectionInfo; }
namespace cereal { struct SchemaWriter; }
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

    using BroadcastRequestCallback = ::brstd::move_only_function<
        ::brstd::move_only_function<bool(::cereal::SchemaWriter&, ::cereal::ContextArea)>()>;

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
    ::ll::TypedStorage<8, 80, ::std::mutex> mBroadcastCallbackMutex;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::brstd::move_only_function<bool(::cereal::SchemaWriter&, ::cereal::ContextArea)>()>>
        mBroadcastRequestCallback;
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

    virtual bool host(::ConnectionDefinition const& definition, ::PrivateKeyManager const& keys) /*override*/;

#ifdef LL_PLAT_S
    virtual bool connect(
        ::Social::GameConnectionInfo const&,
        ::Social::GameConnectionInfo const&,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator>
    ) /*override*/;
#else // LL_PLAT_C
    virtual bool connect(
        ::Social::GameConnectionInfo const&                         primaryConnection,
        ::Social::GameConnectionInfo const&                         backupConnection,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator> identityGenerator
    ) /*override*/;
#endif

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
    OnDiscoveryResponse(::NetherNet::NetworkID networkID, void const* pApplicationData, int size) /*override*/;

    virtual ::brstd::move_only_function<bool(::cereal::SchemaWriter&, ::cereal::ContextArea)>
    OnDiscoveryRequest() /*override*/;

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

#ifdef LL_PLAT_C
    MCAPI void _createEventQueue();

    MCAPI ::gsl::not_null<::std::shared_ptr<::WebRTCNetworkPeer>> _getOrCreatePeer(
        ::NetherNet::NetworkID const& remoteId,
        uint64                        sessionId,
        bool                          isLan,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const&
    );
#endif

    MCAPI void setBroadcastResponseCallback(
        ::std::function<void(::NetherNet::NetworkID const&, void const*, int)>&& broadcastResponseCallback
    );
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

    MCFOLD bool $host(::ConnectionDefinition const& definition, ::PrivateKeyManager const& keys);

#ifdef LL_PLAT_S
    MCAPI bool $connect(
        ::Social::GameConnectionInfo const&,
        ::Social::GameConnectionInfo const&,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator>
    );
#else // LL_PLAT_C
    MCAPI bool $connect(
        ::Social::GameConnectionInfo const&                         primaryConnection,
        ::Social::GameConnectionInfo const&                         backupConnection,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator> identityGenerator
    );
#endif

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

    MCAPI void $OnDiscoveryResponse(::NetherNet::NetworkID networkID, void const* pApplicationData, int size);

    MCAPI ::brstd::move_only_function<bool(::cereal::SchemaWriter&, ::cereal::ContextArea)> $OnDiscoveryRequest();

    MCAPI void $OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint* flags);


    // NOLINTEND
};
