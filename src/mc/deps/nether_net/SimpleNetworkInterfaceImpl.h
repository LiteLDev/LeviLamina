#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/ESendType.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ILanEventHandler.h"
#include "mc/deps/nether_net/INetherNetTransportInterface.h"
#include "mc/deps/nether_net/ISignalingEventHandler.h"
#include "mc/deps/nether_net/SignalingChannelId.h"
#include "mc/deps/nether_net/utils/ErrorOr.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectError; }
namespace NetherNet { class ConnectRequest; }
namespace NetherNet { class ConnectResponse; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { class ISignalingInterface; }
namespace NetherNet { struct NetherNetTransportServerConfiguration; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace NetherNet { struct StunRelayServer; }
namespace NetherNet::LanEvents { struct DiscoveryRequest; }
namespace NetherNet::LanEvents { struct DiscoveryResponse; }
namespace NetherNet::LanEvents { struct MessageReceived; }
namespace NetherNet::SignalingEvents { struct MessageReceived; }
// clang-format on

namespace NetherNet {

class SimpleNetworkInterfaceImpl : public ::NetherNet::ContextProxy,
                                   public ::NetherNet::INetherNetTransportInterface,
                                   public ::NetherNet::ISignalingEventHandler,
                                   public ::NetherNet::ILanEventHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnka9f77d;
    ::ll::UntypedStorage<8, 8>   mUnk960909;
    ::ll::UntypedStorage<8, 8>   mUnk17a828;
    ::ll::UntypedStorage<8, 8>   mUnkfb8de3;
    ::ll::UntypedStorage<8, 8>   mUnkb5d73e;
    ::ll::UntypedStorage<8, 80>  mUnka71ac8;
    ::ll::UntypedStorage<8, 384> mUnkcf1ee0;
    ::ll::UntypedStorage<8, 16>  mUnk6e9a1e;
    ::ll::UntypedStorage<8, 16>  mUnkd76d91;
    ::ll::UntypedStorage<8, 16>  mUnk9e7ad4;
    ::ll::UntypedStorage<8, 8>   mUnka1effb;
    ::ll::UntypedStorage<8, 8>   mUnk51d62d;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleNetworkInterfaceImpl& operator=(SimpleNetworkInterfaceImpl const&);
    SimpleNetworkInterfaceImpl(SimpleNetworkInterfaceImpl const&);
    SimpleNetworkInterfaceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimpleNetworkInterfaceImpl() /*override*/;

    // vIndex: 1
    virtual bool SendPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 connectionId,
        ::std::string const&   data,
        ::NetherNet::ESendType eSendType
    ) /*override*/;

    // vIndex: 2
    virtual bool
    IsPacketAvailable(::NetherNet::NetworkID remoteId, uint64 connectionId, uint* pcbMessageSize) /*override*/;

    // vIndex: 3
    virtual void ClearPacketData(::NetherNet::NetworkID remoteId, uint64 connectionId) /*override*/;

    // vIndex: 4
    virtual bool ReadPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 connectionId,
        void*                  pubDest,
        uint                   cbDest,
        uint*                  pcbMessageSize
    ) /*override*/;

    // vIndex: 5
    virtual bool OpenSessionWithUser(::NetherNet::NetworkID networkIDRemote) /*override*/;

    // vIndex: 6
    virtual bool CloseSessionWithUser(::NetherNet::NetworkID networkIDRemote, uint64 connectionId) /*override*/;

    // vIndex: 7
    virtual bool GetSessionState(
        ::NetherNet::NetworkID     peerId,
        uint64                     connectionId,
        ::NetherNet::SessionState* pConnectionState
    ) /*override*/;

    // vIndex: 8
    virtual void
    SetSignalingInterface(::std::shared_ptr<::NetherNet::ISignalingInterface> const& pWebRTCSignalingInterface
    ) /*override*/;

    // vIndex: 9
    virtual void SetRelayConfig(::std::vector<::NetherNet::StunRelayServer> const& config) /*override*/;

    // vIndex: 14
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler
    ) /*override*/;

    // vIndex: 13
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler* handler) /*override*/;

    // vIndex: 10
    virtual bool IsBroadcastDiscoveryEnabled() /*override*/;

    // vIndex: 11
    virtual void EnableBroadcastDiscovery() /*override*/;

    // vIndex: 12
    virtual void DisableBroadcastDiscovery() /*override*/;

    // vIndex: 1
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageReceived const& event) /*override*/;

    // vIndex: 3
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const& event) /*override*/;

    // vIndex: 2
    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryRequest const& event) /*override*/;

    // vIndex: 1
    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryResponse const& event) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Initialize(::NetherNet::INetherNetTransportInterfaceCallbacks* pCallbacks);

    MCAPI void InitializeConfiguration(
        ::NetherNet::NetherNetTransportServerConfiguration const* pConfiguration,
        ::webrtc::PeerConnectionInterface::RTCConfiguration*      pRtcConfigOut
    );

    MCAPI void ReceiveFromSignalingChannel(
        ::NetherNet::NetworkID          from,
        ::std::string const&            message,
        ::NetherNet::SignalingChannelId sourceChannel
    );

    MCAPI ::NetherNet::ErrorOr<void, ::NetherNet::ESessionError> SendToSignalingChannel(
        ::NetherNet::NetworkID networkIDTo,
        ::std::variant<
            ::NetherNet::ConnectRequest,
            ::NetherNet::ConnectResponse,
            ::NetherNet::ConnectError,
            ::NetherNet::CandidateAdd> const&            signal,
        ::std::optional<::NetherNet::SignalingChannelId> preference
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
    MCAPI bool $SendPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 connectionId,
        ::std::string const&   data,
        ::NetherNet::ESendType eSendType
    );

    MCAPI bool $IsPacketAvailable(::NetherNet::NetworkID remoteId, uint64 connectionId, uint* pcbMessageSize);

    MCAPI void $ClearPacketData(::NetherNet::NetworkID remoteId, uint64 connectionId);

    MCAPI bool
    $ReadPacket(::NetherNet::NetworkID remoteId, uint64 connectionId, void* pubDest, uint cbDest, uint* pcbMessageSize);

    MCAPI bool $OpenSessionWithUser(::NetherNet::NetworkID networkIDRemote);

    MCAPI bool $CloseSessionWithUser(::NetherNet::NetworkID networkIDRemote, uint64 connectionId);

    MCAPI bool
    $GetSessionState(::NetherNet::NetworkID peerId, uint64 connectionId, ::NetherNet::SessionState* pConnectionState);

    MCAPI void
    $SetSignalingInterface(::std::shared_ptr<::NetherNet::ISignalingInterface> const& pWebRTCSignalingInterface);

    MCAPI void $SetRelayConfig(::std::vector<::NetherNet::StunRelayServer> const& config);

    MCAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler);

    MCAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ILanEventHandler* handler);

    MCAPI bool $IsBroadcastDiscoveryEnabled();

    MCAPI void $EnableBroadcastDiscovery();

    MCAPI void $DisableBroadcastDiscovery();

    MCAPI void $OnSignalingEvent(::NetherNet::SignalingEvents::MessageReceived const& event);

    MCAPI void $OnLanEvent(::NetherNet::LanEvents::MessageReceived const& event);

    MCAPI void $OnLanEvent(::NetherNet::LanEvents::DiscoveryRequest const& event);

    MCAPI void $OnLanEvent(::NetherNet::LanEvents::DiscoveryResponse const& event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForISignalingEventHandler();

    MCAPI static void** $vftableForILanEventHandler();

    MCAPI static void** $vftableForContextProxy();

    MCAPI static void** $vftableForINetherNetTransportInterface();
    // NOLINTEND
};

} // namespace NetherNet
