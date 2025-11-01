#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct DiscoveryResponsePacket; }
namespace NetherNet { struct ILanEventHandler; }
namespace NetherNet { struct NetworkID; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class ILanDiscovery {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool IsBroadcastDiscoveryEnabled(::NetherNet::NetworkID) = 0;

    // vIndex: 1
    virtual void DisableBroadcastDiscovery(::NetherNet::NetworkID) = 0;

    // vIndex: 2
    virtual void EnableBroadcastDiscovery(::NetherNet::NetworkID) = 0;

    // vIndex: 3
    virtual bool IsNetworkIdOnLan(::NetherNet::NetworkID) = 0;

    // vIndex: 4
    virtual void SendLanBroadcastResponse(::rtc::SocketAddress const&, ::NetherNet::DiscoveryResponsePacket const&) = 0;

    // vIndex: 5
    virtual void SendSignalingMessageTo(::NetherNet::NetworkID, ::NetherNet::NetworkID, ::std::string const&) = 0;

    // vIndex: 6
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler*) = 0;

    // vIndex: 7
    virtual void Suspend() = 0;

    // vIndex: 8
    virtual void Resume() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
