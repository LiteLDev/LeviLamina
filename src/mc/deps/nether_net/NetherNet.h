#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/LogSeverity.h"
#include "mc/deps/nether_net/utils/ErrorOr.h"
#include "mc/external/webrtc/StatsReport.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class AesContext; }
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectError; }
namespace NetherNet { class ConnectRequest; }
namespace NetherNet { class ConnectResponse; }
namespace NetherNet { class LanThreadManager; }
namespace NetherNet { class RtcThreadManager; }
namespace NetherNet { class SimpleLogSink; }
namespace NetherNet { class SimpleNetworkInterfaceImpl; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct ThreadInit; }
namespace rtc { class IPAddress; }
namespace webrtc { class StatsReport; }
// clang-format on

namespace NetherNet {
// functions
// NOLINTBEGIN
MCAPI ::NetherNet::ErrorOr<::std::unique_ptr<::NetherNet::AesContext>, ::std::error_code> CreateEnvelope(uint64 id);

MCAPI uint64 CreateID();

MCAPI ::NetherNet::ErrorOr<::std::vector<uchar>, ::std::error_code> CreateKey(uint64 id);

MCAPI ::std::error_code GetLastSystemError();

MCAPI uint64 GetSessionId(::std::variant<
                          ::NetherNet::ConnectRequest,
                          ::NetherNet::ConnectResponse,
                          ::NetherNet::ConnectError,
                          ::NetherNet::CandidateAdd> const& signal);

MCAPI ::std::error_code GetSystemError(int error);

MCAPI bool
GetValue(::webrtc::StatsReport const* report, ::webrtc::StatsReport::StatsValueName name, ::std::string* value);

MCAPI void InitializeLibrary(
    uint64                  applicationUniqueID,
    ushort                  preferredPort,
    ushort                  broadcastLanPort,
    int                     broadcastPollInterval,
    ::NetherNet::ThreadInit threadInitSignaling,
    ::NetherNet::ThreadInit threadInitNetwork,
    ::NetherNet::ThreadInit threadInitWorker,
    ::NetherNet::ThreadInit threadInitLan
);

MCAPI void KickoffPeriodicUpdateTask();

MCAPI void NetherNetTransport_LogMessage(::NetherNet::LogSeverity, char const*, ...);

MCAPI ::std::optional<::std::variant<
    ::NetherNet::ConnectRequest,
    ::NetherNet::ConnectResponse,
    ::NetherNet::ConnectError,
    ::NetherNet::CandidateAdd>>
TryParseSignalingMessage(::std::string const& message);

MCAPI ::NetherNet::LanThreadManager& getLanThread();

MCAPI ::NetherNet::RtcThreadManager const& getNetworkThread();

MCAPI ::NetherNet::RtcThreadManager const& getSignalThread();

MCAPI ::NetherNet::RtcThreadManager const& getWorkerThread();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::rtc::IPAddress const& IPv4Any();

MCAPI ::rtc::IPAddress const& IPv4Broadcast();

MCAPI ::rtc::IPAddress const& IPv6AllHostsLinkLocal();

MCAPI ::rtc::IPAddress const& IPv6Any();

MCAPI ::std::map<::NetherNet::NetworkID, ::NetherNet::SimpleNetworkInterfaceImpl*>& gActiveNetworkInterfaces();

MCAPI ::std::mutex& gLibraryMutex();

MCAPI ::std::add_lvalue_reference_t<void (*)(::NetherNet::LogSeverity, ::std::string_view)> gLogProc();

MCAPI ::NetherNet::LogSeverity& gLogSeverity();

MCAPI ::std::mutex& gLoggingMutex();

MCAPI ::NetherNet::RtcThreadManager& gNetworkThread();

MCAPI char const*& gPortMappingDescription();

MCAPI int& gPreferredPort();

MCAPI ::NetherNet::RtcThreadManager& gSignalThread();

MCAPI ::NetherNet::SimpleLogSink& gSimpleLogSink();

MCAPI ::NetherNet::RtcThreadManager& gWorkerThread();
// NOLINTEND

} // namespace NetherNet
