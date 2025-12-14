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
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace NetherNet { struct StunRelayServer; }
namespace NetherNet { struct TransportConfiguration; }
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
    ::ll::UntypedStorage<8, 24>  mUnk17a828;
    ::ll::UntypedStorage<8, 8>   mUnkfb8de3;
    ::ll::UntypedStorage<8, 8>   mUnkb5d73e;
    ::ll::UntypedStorage<8, 80>  mUnka71ac8;
    ::ll::UntypedStorage<8, 384> mUnkcf1ee0;
    ::ll::UntypedStorage<1, 1>   mUnk49643d;
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
    virtual ~SimpleNetworkInterfaceImpl() /*override*/;

    virtual bool SendPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 connectionId,
        ::std::string const&   data,
        ::NetherNet::ESendType eSendType
    ) /*override*/;

    virtual bool
    IsPacketAvailable(::NetherNet::NetworkID remoteId, uint64 connectionId, uint* pcbMessageSize) /*override*/;

    virtual bool ReadPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 connectionId,
        void*                  pubDest,
        uint                   cbDest,
        uint*                  pcbMessageSize
    ) /*override*/;

    virtual bool OpenSessionWithUser(::NetherNet::NetworkID networkIDRemote) /*override*/;

    virtual bool CloseSessionWithUser(::NetherNet::NetworkID networkIDRemote, uint64 connectionId) /*override*/;

    virtual bool GetSessionState(
        ::NetherNet::NetworkID     networkIDRemote,
        uint64                     connectionId,
        ::NetherNet::SessionState* pConnectionState
    ) /*override*/;

    virtual void SetSignalingInterface(
        ::std::shared_ptr<::NetherNet::ISignalingInterface> const& pWebRTCSignalingInterface
    ) /*override*/;

    virtual void SetRelayConfig(::std::vector<::NetherNet::StunRelayServer> const& config) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler) /*override*/;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler* handler) /*override*/;

    virtual bool IsBroadcastDiscoveryEnabled() /*override*/;

    virtual void EnableBroadcastDiscovery() /*override*/;

    virtual void DisableBroadcastDiscovery() /*override*/;

    virtual void EnableLANSignaling() /*override*/;

    virtual void DisableLANSignaling() /*override*/;

    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageReceived const& event) /*override*/;

    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const& event) /*override*/;

    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryRequest const& event) /*override*/;

    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryResponse const& event) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::PeerConnectionInterface::RTCConfiguration GetRTCConfig(::NetherNet::NetworkID peerId) const;

    MCNAPI void Initialize(::NetherNet::INetherNetTransportInterfaceCallbacks* pCallbacks);

    MCNAPI void InitializeConfiguration(
        ::NetherNet::TransportConfiguration const*           pConfiguration,
        ::webrtc::PeerConnectionInterface::RTCConfiguration* pRtcConfigOut
    );

    MCNAPI void ReceiveFromSignalingChannel(
        ::NetherNet::NetworkID          from,
        ::std::string const&            message,
        ::NetherNet::SignalingChannelId sourceChannel
    );

    MCNAPI ::NetherNet::ErrorOr<void, ::NetherNet::ESessionError> SendToSignalingChannel(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $SendPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 connectionId,
        ::std::string const&   data,
        ::NetherNet::ESendType eSendType
    );

    MCNAPI bool $IsPacketAvailable(::NetherNet::NetworkID remoteId, uint64 connectionId, uint* pcbMessageSize);

    MCNAPI bool
    $ReadPacket(::NetherNet::NetworkID remoteId, uint64 connectionId, void* pubDest, uint cbDest, uint* pcbMessageSize);

    MCNAPI bool $OpenSessionWithUser(::NetherNet::NetworkID networkIDRemote);

    MCNAPI bool $CloseSessionWithUser(::NetherNet::NetworkID networkIDRemote, uint64 connectionId);

    MCNAPI bool $GetSessionState(
        ::NetherNet::NetworkID     networkIDRemote,
        uint64                     connectionId,
        ::NetherNet::SessionState* pConnectionState
    );

    MCNAPI void
    $SetSignalingInterface(::std::shared_ptr<::NetherNet::ISignalingInterface> const& pWebRTCSignalingInterface);

    MCNAPI void $SetRelayConfig(::std::vector<::NetherNet::StunRelayServer> const& config);

    MCNAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler);

    MCNAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ILanEventHandler* handler);

    MCNAPI bool $IsBroadcastDiscoveryEnabled();

    MCNAPI void $EnableBroadcastDiscovery();

    MCNAPI void $DisableBroadcastDiscovery();

    MCNAPI void $EnableLANSignaling();

    MCNAPI void $DisableLANSignaling();

    MCNAPI void $OnSignalingEvent(::NetherNet::SignalingEvents::MessageReceived const& event);

    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageReceived const& event);

    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::DiscoveryRequest const& event);

    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::DiscoveryResponse const& event);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForISignalingEventHandler();

    MCNAPI static void** $vftableForILanEventHandler();

    MCNAPI static void** $vftableForContextProxy();

    MCNAPI static void** $vftableForINetherNetTransportInterface();
    // NOLINTEND
};

} // namespace NetherNet
