#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/utils/ErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class AesContext; }
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectError; }
namespace NetherNet { class ConnectRequest; }
namespace NetherNet { class ConnectResponse; }
namespace NetherNet { struct GlobalConfiguration; }
namespace NetherNet { struct NetworkID; }
namespace rtc { class IPAddress; }
// clang-format on

namespace NetherNet {
// functions
// NOLINTBEGIN
MCNAPI ::NetherNet::ErrorOr<::std::unique_ptr<::NetherNet::AesContext>, ::std::error_code> CreateEnvelope(uint64 id);

MCNAPI uint64 CreateID();

MCNAPI ::NetherNet::ErrorOr<::std::vector<uchar>, ::std::error_code> CreateKey(uint64 id);

MCNAPI void InitializeNetherNetTransport(::NetherNet::GlobalConfiguration const& config);

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
