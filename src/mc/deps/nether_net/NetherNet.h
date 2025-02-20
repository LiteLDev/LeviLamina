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
MCAPI ::NetherNet::ErrorOr<::std::unique_ptr<::NetherNet::AesContext>, ::std::error_code> CreateEnvelope(uint64 id);

MCAPI ::NetherNet::ErrorOr<::std::vector<uchar>, ::std::error_code> CreateKey(uint64 id);

MCAPI bool
GetValue(::webrtc::StatsReport const* report, ::webrtc::StatsReport::StatsValueName name, ::std::string* value);

MCAPI void InitializeNetherNetTransport(::NetherNet::NetherNetTransportGlobalConfiguration const& config);

MCAPI ::std::optional<::std::variant<
    ::NetherNet::ConnectRequest,
    ::NetherNet::ConnectResponse,
    ::NetherNet::ConnectError,
    ::NetherNet::CandidateAdd>>
TryParseSignalingMessage(::std::string const& message);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::rtc::IPAddress const& IPv4Any();

MCAPI ::rtc::IPAddress const& IPv4Broadcast();

MCAPI ::rtc::IPAddress const& IPv6AllHostsLinkLocal();

MCAPI ::rtc::IPAddress const& IPv6Any();
// NOLINTEND

} // namespace NetherNet
