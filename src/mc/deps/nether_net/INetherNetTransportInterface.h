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

    virtual bool SendPacket(::NetherNet::NetworkID, uint64, ::std::string const&, ::NetherNet::ESendType) = 0;

    virtual bool IsPacketAvailable(::NetherNet::NetworkID, uint64, uint*) = 0;

    virtual bool ReadPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 connectionId,
        void*                  pubDest,
        uint                   cbDest,
        uint*                  pcbMessageSize
    ) = 0;

    virtual bool OpenSessionWithUser(::NetherNet::NetworkID) = 0;

    virtual bool CloseSessionWithUser(::NetherNet::NetworkID, uint64) = 0;

    virtual bool GetSessionState(
        ::NetherNet::NetworkID     peerId,
        uint64                     connectionId,
        ::NetherNet::SessionState* pConnectionState
    ) = 0;

    virtual void SetSignalingInterface(::std::shared_ptr<::NetherNet::ISignalingInterface> const&) = 0;

    virtual void SetRelayConfig(::std::vector<::NetherNet::StunRelayServer> const&) = 0;

    virtual bool IsBroadcastDiscoveryEnabled() = 0;

    virtual void EnableBroadcastDiscovery() = 0;

    virtual void DisableBroadcastDiscovery() = 0;

    virtual void EnableLANSignaling() = 0;

    virtual void DisableLANSignaling() = 0;

    virtual void EnableTrickleIce() = 0;

    virtual void DisableTrickleIce() = 0;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) = 0;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
