#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/LogSeverity.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { struct GlobalConfiguration; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct TransportConfiguration; }
namespace webrtc { class IPAddress; }
// clang-format on

namespace NetherNet {
// functions
// NOLINTBEGIN
MCNAPI ::NetherNet::INetherNetTransportInterface* CreateNetherNetTransportInterface(
    ::NetherNet::NetworkID const&                       localID,
    ::NetherNet::TransportConfiguration const&          configuration,
    ::NetherNet::INetherNetTransportInterfaceCallbacks* pCallbacks
);

MCNAPI void DestroyNetherNetTransportInterface(::NetherNet::INetherNetTransportInterface* transportInterface);

MCNAPI void InitializeNetherNetTransport(::NetherNet::GlobalConfiguration const& config);

#ifdef LL_PLAT_C
MCNAPI void SetNetherNetTransportLogging(::NetherNet::LogSeverity level);
#endif

MCNAPI void ShutdownNetherNetTransport();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::webrtc::IPAddress const& IPv4Any();

MCNAPI ::webrtc::IPAddress const& IPv4Broadcast();

MCNAPI ::webrtc::IPAddress const& IPv6AllHostsLinkLocal();

MCNAPI ::webrtc::IPAddress const& IPv6Any();
// NOLINTEND

} // namespace NetherNet
