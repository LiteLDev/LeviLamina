#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/LogSeverity.h"
#include "mc/deps/nether_net/utils/ErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class AesContext; }
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectError; }
namespace NetherNet { class ConnectRequest; }
namespace NetherNet { class ConnectResponse; }
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { struct GlobalConfiguration; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct TransportConfiguration; }
namespace rtc { class IPAddress; }
// clang-format on

namespace NetherNet {
// functions
// NOLINTBEGIN
MCNAPI ::NetherNet::ErrorOr<::std::unique_ptr<::NetherNet::AesContext>, ::std::error_code> CreateEnvelope(uint64 id);

MCNAPI uint64 CreateID();

MCNAPI ::NetherNet::ErrorOr<::std::vector<uchar>, ::std::error_code> CreateKey(uint64 id);

MCNAPI ::NetherNet::INetherNetTransportInterface* CreateNetherNetTransportInterface(
    ::NetherNet::NetworkID                              localID,
    ::NetherNet::TransportConfiguration*                pConfiguration,
    ::NetherNet::INetherNetTransportInterfaceCallbacks* pCallbacks
);

MCNAPI void DestroyNetherNetTransportInterface(::NetherNet::INetherNetTransportInterface* transportInterface);

MCNAPI ::std::error_code GetLastSystemError();

MCNAPI ::std::error_code GetSystemError(int error);

MCNAPI void InitializeNetherNetTransport(::NetherNet::GlobalConfiguration const& config);

#ifdef LL_PLAT_C
MCNAPI void SetNetherNetTransportLogging(::NetherNet::LogSeverity level);
#endif

MCNAPI void ShutdownNetherNetTransport();

MCNAPI ::std::optional<::std::variant<
    ::NetherNet::ConnectRequest,
    ::NetherNet::ConnectResponse,
    ::NetherNet::ConnectError,
    ::NetherNet::CandidateAdd>>
TryParseSignalingMessage(::std::string_view message);

MCNAPI ::std::vector<::std::byte> makeDiscoveryMessagePacket(
    ::NetherNet::NetworkID     senderId,
    ::NetherNet::NetworkID     recipientId,
    ::std::vector<::std::byte> data
);

MCNAPI ::std::vector<::std::byte>
makeDiscoveryResponsePacket(::NetherNet::NetworkID senderId, ::std::vector<::std::byte> data);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::rtc::IPAddress const& IPv4Any();

MCNAPI ::rtc::IPAddress const& IPv4Broadcast();

MCNAPI ::rtc::IPAddress const& IPv6AllHostsLinkLocal();

MCNAPI ::rtc::IPAddress const& IPv6Any();
// NOLINTEND

} // namespace NetherNet
