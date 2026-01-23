#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESendType.h"
#include "mc/deps/nether_net/INetherNetTransportInterface.h"

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

struct NetherNetTransportStub : public ::NetherNet::INetherNetTransportInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetherNetTransportStub() /*override*/ = default;

    virtual bool SendPacket(::NetherNet::NetworkID, uint64, ::std::string const&, ::NetherNet::ESendType) /*override*/;

    virtual bool IsPacketAvailable(::NetherNet::NetworkID, uint64, uint*) /*override*/;

    virtual bool ReadPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 connectionId,
        void*                  pubDest,
        uint                   cbDest,
        uint*                  pcbMessageSize
    ) /*override*/;

    virtual bool OpenSessionWithUser(::NetherNet::NetworkID) /*override*/;

    virtual bool CloseSessionWithUser(::NetherNet::NetworkID, uint64) /*override*/;

    virtual bool GetSessionState(
        ::NetherNet::NetworkID     peerId,
        uint64                     connectionId,
        ::NetherNet::SessionState* pConnectionState
    ) /*override*/;

    virtual void SetSignalingInterface(::std::shared_ptr<::NetherNet::ISignalingInterface> const&) /*override*/;

    virtual void SetRelayConfig(::std::vector<::NetherNet::StunRelayServer> const&) /*override*/;

    virtual bool IsBroadcastDiscoveryEnabled() /*override*/;

    virtual void EnableBroadcastDiscovery() /*override*/;

    virtual void DisableBroadcastDiscovery() /*override*/;

    virtual void EnableLANSignaling() /*override*/;

    virtual void DisableLANSignaling() /*override*/;

    virtual void EnableTrickleIce() /*override*/;

    virtual void DisableTrickleIce() /*override*/;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) /*override*/;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
