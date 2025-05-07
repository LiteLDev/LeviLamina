#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/utils/ErrorOr.h"
#include "mc/external/webrtc/StatsReport.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class AesContext; }
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectError; }
namespace NetherNet { class ConnectRequest; }
namespace NetherNet { class ConnectResponse; }
namespace NetherNet { struct NetherNetTransportGlobalConfiguration; }
namespace rtc { class IPAddress; }
namespace webrtc { class StatsReport; }
// clang-format on

namespace NetherNet {
// functions
// NOLINTBEGIN
MCNAPI ::NetherNet::ErrorOr<::std::unique_ptr<::NetherNet::AesContext>, ::std::error_code> CreateEnvelope(uint64 id);

MCNAPI ::NetherNet::ErrorOr<::std::vector<uchar>, ::std::error_code> CreateKey(uint64 id);

MCNAPI bool
GetValue(::webrtc::StatsReport const* report, ::webrtc::StatsReport::StatsValueName name, ::std::string* value);

MCNAPI void InitializeNetherNetTransport(::NetherNet::NetherNetTransportGlobalConfiguration const& config);

MCNAPI ::std::optional<::std::variant<
    ::NetherNet::ConnectRequest,
    ::NetherNet::ConnectResponse,
    ::NetherNet::ConnectError,
    ::NetherNet::CandidateAdd>>
TryParseSignalingMessage(::std::string const& message);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::rtc::IPAddress const& IPv4Any();

MCNAPI ::rtc::IPAddress const& IPv4Broadcast();

MCNAPI ::rtc::IPAddress const& IPv6AllHostsLinkLocal();

MCNAPI ::rtc::IPAddress const& IPv6Any();
// NOLINTEND

} // namespace NetherNet
