#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESendType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { class ISignalingInterface; }
namespace NetherNet { struct ILanEventHandler; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace NetherNet { struct StunRelayServer; }
// clang-format on

namespace NetherNet {

class INetherNetTransportInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INetherNetTransportInterface() = default;

    virtual bool SendPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 connectionId,
        ::std::string const&   data,
        ::NetherNet::ESendType eSendType
    ) = 0;

    virtual bool IsPacketAvailable(::NetherNet::NetworkID remoteId, uint64 connectionId, uint* pcbMessageSize) = 0;

    virtual bool ReadPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 connectionId,
        void*                  pubDest,
        uint                   cbDest,
        uint*                  pcbMessageSize
    ) = 0;

    virtual bool OpenSessionWithUser(::NetherNet::NetworkID networkIDRemote) = 0;

    virtual bool CloseSessionWithUser(::NetherNet::NetworkID networkIDRemote, uint64 connectionId) = 0;

    virtual bool GetSessionState(
        ::NetherNet::NetworkID     networkIDRemote,
        uint64                     connectionId,
        ::NetherNet::SessionState* pConnectionState
    ) = 0;

    virtual void
    SetSignalingInterface(::std::shared_ptr<::NetherNet::ISignalingInterface> const& pWebRTCSignalingInterface) = 0;

    virtual void SetRelayConfig(::std::vector<::NetherNet::StunRelayServer> const& config) = 0;

    virtual bool IsBroadcastDiscoveryEnabled() = 0;

    virtual void EnableBroadcastDiscovery() = 0;

    virtual void DisableBroadcastDiscovery() = 0;

    virtual void AddLanHost(::NetherNet::NetworkID remote, ::std::string const& ip, int port) = 0;

    virtual void RemoveLanHost(::NetherNet::NetworkID remote) = 0;

    virtual void EnableLANSignaling() = 0;

    virtual void DisableLANSignaling() = 0;

    virtual void EnableTrickleIce() = 0;

    virtual void DisableTrickleIce() = 0;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler) = 0;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler* handler) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
