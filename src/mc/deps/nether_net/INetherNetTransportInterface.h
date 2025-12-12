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
    // vIndex: 0
    virtual ~INetherNetTransportInterface() = default;

    // vIndex: 1
    virtual bool SendPacket(::NetherNet::NetworkID, uint64, ::std::string const&, ::NetherNet::ESendType) = 0;

    // vIndex: 2
    virtual bool IsPacketAvailable(::NetherNet::NetworkID, uint64, uint*) = 0;

    // vIndex: 3
    virtual bool ReadPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 connectionId,
        void*                  pubDest,
        uint                   cbDest,
        uint*                  pcbMessageSize
    ) = 0;

    // vIndex: 4
    virtual bool OpenSessionWithUser(::NetherNet::NetworkID) = 0;

    // vIndex: 5
    virtual bool CloseSessionWithUser(::NetherNet::NetworkID, uint64) = 0;

    // vIndex: 6
    virtual bool GetSessionState(
        ::NetherNet::NetworkID     peerId,
        uint64                     connectionId,
        ::NetherNet::SessionState* pConnectionState
    ) = 0;

    // vIndex: 7
    virtual void SetSignalingInterface(::std::shared_ptr<::NetherNet::ISignalingInterface> const&) = 0;

    // vIndex: 8
    virtual void SetRelayConfig(::std::vector<::NetherNet::StunRelayServer> const&) = 0;

    // vIndex: 9
    virtual bool IsBroadcastDiscoveryEnabled() = 0;

    // vIndex: 10
    virtual void EnableBroadcastDiscovery() = 0;

    // vIndex: 11
    virtual void DisableBroadcastDiscovery() = 0;

    // vIndex: 12
    virtual void EnableLANSignaling() = 0;

    // vIndex: 13
    virtual void DisableLANSignaling() = 0;

    // vIndex: 15
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) = 0;

    // vIndex: 14
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
