#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ILanEventHandler; }
namespace NetherNet { struct NetworkID; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class ILanDiscovery {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool IsBroadcastDiscoveryEnabled(::NetherNet::NetworkID id) = 0;

    virtual void DisableBroadcastDiscovery(::NetherNet::NetworkID id) = 0;

    virtual void EnableBroadcastDiscovery(::NetherNet::NetworkID id) = 0;

    virtual void AddLanHost(::NetherNet::NetworkID remote, ::std::string const& ipStr, int port) = 0;

    virtual void RemoveLanHost(::NetherNet::NetworkID remote) = 0;

    virtual bool IsNetworkIdOnLan(::NetherNet::NetworkID networkId) = 0;

    virtual void SendLanBroadcastResponse(
        ::rtc::SocketAddress const& destination,
        ::NetherNet::NetworkID      from,
        ::std::vector<::std::byte>  data
    ) = 0;

    virtual void SendSignalingMessageTo(
        ::NetherNet::NetworkID     networkIdFrom,
        ::NetherNet::NetworkID     networkIdTo,
        ::std::vector<::std::byte> data
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler* handler) = 0;

    virtual void Suspend() = 0;

    virtual void Resume() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
