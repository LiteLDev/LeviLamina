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
    virtual bool IsBroadcastDiscoveryEnabled(::NetherNet::NetworkID) = 0;

    virtual void DisableBroadcastDiscovery(::NetherNet::NetworkID) = 0;

    virtual void EnableBroadcastDiscovery(::NetherNet::NetworkID) = 0;

    virtual bool IsNetworkIdOnLan(::NetherNet::NetworkID) = 0;

    virtual void SendLanBroadcastResponse(::rtc::SocketAddress const&, ::NetherNet::DiscoveryResponsePacket const&) = 0;

    virtual void SendSignalingMessageTo(::NetherNet::NetworkID, ::NetherNet::NetworkID, ::std::string const&) = 0;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler*) = 0;

    virtual void Suspend() = 0;

    virtual void Resume() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
