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
    // vIndex: 0
    virtual ~NetherNetTransportStub() /*override*/ = default;

    // vIndex: 1
    virtual bool SendPacket(::NetherNet::NetworkID, uint64, ::std::string const&, ::NetherNet::ESendType) /*override*/;

    // vIndex: 2
    virtual bool IsPacketAvailable(::NetherNet::NetworkID, uint64, uint*) /*override*/;

    // vIndex: 3
    virtual bool ReadPacket(::NetherNet::NetworkID remoteId, uint64 connectionId, void* pubDest, uint cbDest, uint* pcbMessageSize) /*override*/;

    // vIndex: 4
    virtual bool OpenSessionWithUser(::NetherNet::NetworkID) /*override*/;

    // vIndex: 5
    virtual bool CloseSessionWithUser(::NetherNet::NetworkID, uint64) /*override*/;

    // vIndex: 6
    virtual bool GetSessionState(::NetherNet::NetworkID peerId, uint64 connectionId, ::NetherNet::SessionState* pConnectionState) /*override*/;

    // vIndex: 7
    virtual void SetSignalingInterface(::std::shared_ptr<::NetherNet::ISignalingInterface> const&) /*override*/;

    // vIndex: 8
    virtual void SetRelayConfig(::std::vector<::NetherNet::StunRelayServer> const&) /*override*/;

    // vIndex: 9
    virtual bool IsBroadcastDiscoveryEnabled() /*override*/;

    // vIndex: 10
    virtual void EnableBroadcastDiscovery() /*override*/;

    // vIndex: 11
    virtual void DisableBroadcastDiscovery() /*override*/;

    // vIndex: 12
    virtual void EnableLANSignaling() /*override*/;

    // vIndex: 13
    virtual void DisableLANSignaling() /*override*/;

    // vIndex: 15
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) /*override*/;

    // vIndex: 14
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
