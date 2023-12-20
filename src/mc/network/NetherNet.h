#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/PeerConnectionInterface.h"
#include "mc/deps/webrtc/StatsReport.h"
#include "mc/deps/webrtc/detail/LoggingSeverity.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"
#include "mc/network/nethernet/ERelayServerConfigurationResult.h"
#include "mc/network/nethernet/ESendType.h"
#include "mc/network/nethernet/ESessionError.h"
#include "mc/network/nethernet/ErrorOr.h"
#include "mc/network/nethernet/FacadeErrorCode.h"
#include "mc/network/nethernet/IWebRTCSignalingInterface.h"
#include "mc/network/nethernet/LogSeverity.h"
#include "mc/network/nethernet/NetworkSessionManager.h"
#include "mc/network/nethernet/PeerRecordTable.h"
#include "mc/network/nethernet/SignalingHostConnectionStatus.h"
#include "mc/network/nethernet/ThreadSafe.h"
#include "mc/network/nethernet/ThreadState.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class AesAdapter; }
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectError; }
namespace NetherNet { class ConnectRequest; }
namespace NetherNet { class ConnectResponse; }
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { class IWebRTCSignalingInterface; }
namespace NetherNet { class LanThreadManager; }
namespace NetherNet { class NetworkSession; }
namespace NetherNet { class NetworkSessionManager; }
namespace NetherNet { class RtcThreadManager; }
namespace NetherNet { class SimpleLogSink; }
namespace NetherNet { class SimpleNetworkInterfaceImpl; }
namespace NetherNet { struct DiscoveryMessagePacket; }
namespace NetherNet { struct DiscoveryRequestPacket; }
namespace NetherNet { struct DiscoveryResponsePacket; }
namespace NetherNet { struct NetherNetTransportServerConfiguration; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace NetherNet { struct ThreadInit; }
namespace NetherNet::RunLoop { class Condition; }
namespace NetherNet::RunLoop { struct Variables; }
namespace cricket { class Candidate; }
namespace rtc { class AsyncListenSocket; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class AsyncResolverInterface; }
namespace rtc { class AsyncSocketAdapter; }
namespace rtc { class BasicPacketSocketFactory; }
namespace rtc { class IPAddress; }
namespace rtc { class LogLineRef; }
namespace rtc { class LogSink; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
namespace rtc { class SocketFactory; }
namespace rtc { class SocketServer; }
namespace rtc { class Thread; }
namespace rtc { struct PacketSocketTcpOptions; }
namespace rtc { struct ProxyInfo; }
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class DataChannelObserver; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class PeerConnectionObserver; }
namespace webrtc { class RTCError; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class SetLocalDescriptionObserverInterface; }
namespace webrtc { class SetRemoteDescriptionObserverInterface; }
namespace webrtc { class StatsObserver; }
namespace webrtc { class StatsReport; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { struct DataBuffer; }
// clang-format on

namespace NetherNet {
// NOLINTBEGIN
// symbol: ?CreateID@NetherNet@@YA_KXZ
MCAPI uint64 CreateID();

// symbol:
// ?GetValue@NetherNet@@YA_NPEBVStatsReport@webrtc@@W4StatsValueName@23@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool GetValue(class webrtc::StatsReport const*, ::webrtc::StatsReport::StatsValueName, std::string*);

// symbol: ?HandleDiscoveryPacketOnSignalThread@NetherNet@@YAXAEBVSocketAddress@rtc@@AEBUDiscoveryMessagePacket@1@@Z
MCAPI void
HandleDiscoveryPacketOnSignalThread(class rtc::SocketAddress const&, struct NetherNet::DiscoveryMessagePacket const&);

// symbol: ?HandleDiscoveryPacketOnSignalThread@NetherNet@@YAXAEBVSocketAddress@rtc@@AEBUDiscoveryRequestPacket@1@@Z
MCAPI void
HandleDiscoveryPacketOnSignalThread(class rtc::SocketAddress const&, struct NetherNet::DiscoveryRequestPacket const&);

// symbol: ?HandleDiscoveryPacketOnSignalThread@NetherNet@@YAXAEBVSocketAddress@rtc@@AEBUDiscoveryResponsePacket@1@@Z
MCAPI void
HandleDiscoveryPacketOnSignalThread(class rtc::SocketAddress const&, struct NetherNet::DiscoveryResponsePacket const&);

// symbol: ?InitializeLibrary@NetherNet@@YAX_KGGHUThreadInit@1@111@Z
MCAPI void InitializeLibrary(
    uint64,
    ushort,
    ushort,
    int,
    struct NetherNet::ThreadInit,
    struct NetherNet::ThreadInit,
    struct NetherNet::ThreadInit,
    struct NetherNet::ThreadInit
);

// symbol: ?KickoffPeriodicUpdateTask@NetherNet@@YAXXZ
MCAPI void KickoffPeriodicUpdateTask();

// symbol: ?NetherNetTransport_LogMessage@NetherNet@@YAXW4LogSeverity@1@PEBDZZ
MCAPI void NetherNetTransport_LogMessage(::NetherNet::LogSeverity, char const*, ...);

// symbol: ?PeriodicUpdateOnSignalThread@NetherNet@@YAXXZ
MCAPI void PeriodicUpdateOnSignalThread();

// symbol: ?ShutdownLibrary@NetherNet@@YAXXZ
MCAPI void ShutdownLibrary();

// symbol:
// ?TryParseSignalingMessage@NetherNet@@YA?AV?$optional@V?$variant@VConnectRequest@NetherNet@@VConnectResponse@2@VConnectError@2@VCandidateAdd@2@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
MCAPI std::optional<std::variant<
    class NetherNet::ConnectRequest,
    class NetherNet::ConnectResponse,
    class NetherNet::ConnectError,
    class NetherNet::CandidateAdd>>
      TryParseSignalingMessage(std::string const&);

// symbol:
// ?gActiveNetworkInterfaces@NetherNet@@3V?$map@UNetworkID@NetherNet@@PEAVSimpleNetworkInterfaceImpl@2@U?$less@UNetworkID@NetherNet@@@std@@V?$allocator@U?$pair@$$CBUNetworkID@NetherNet@@PEAVSimpleNetworkInterfaceImpl@2@@std@@@5@@std@@A
MCAPI extern std::map<struct NetherNet::NetworkID, class NetherNet::SimpleNetworkInterfaceImpl*>
    gActiveNetworkInterfaces;

// symbol: ?gLibraryMutex@NetherNet@@3Vmutex@std@@A
MCAPI extern std::mutex gLibraryMutex;

// symbol: ?gLogSeverity@NetherNet@@3W4LogSeverity@1@A
MCAPI extern ::NetherNet::LogSeverity gLogSeverity;

// symbol: ?gLoggingMutex@NetherNet@@3Vmutex@std@@A
MCAPI extern std::mutex gLoggingMutex;

// symbol: ?gNetworkThread@NetherNet@@3VRtcThreadManager@1@A
MCAPI extern class NetherNet::RtcThreadManager gNetworkThread;

// symbol: ?gPortMappingDescription@NetherNet@@3PEBDEB
MCAPI extern char const* gPortMappingDescription;

// symbol: ?gPreferredPort@NetherNet@@3HA
MCAPI extern int gPreferredPort;

// symbol: ?gSignalThread@NetherNet@@3VRtcThreadManager@1@A
MCAPI extern class NetherNet::RtcThreadManager gSignalThread;

// symbol: ?gSimpleLogSink@NetherNet@@3VSimpleLogSink@1@A
MCAPI extern class NetherNet::SimpleLogSink gSimpleLogSink;

// symbol: ?gWorkerThread@NetherNet@@3VRtcThreadManager@1@A
MCAPI extern class NetherNet::RtcThreadManager gWorkerThread;

// symbol: ?getLanThread@NetherNet@@YAAEAVLanThreadManager@1@XZ
MCAPI class NetherNet::LanThreadManager& getLanThread();

// symbol: ?getNetworkThread@NetherNet@@YAAEBVRtcThreadManager@1@XZ
MCAPI class NetherNet::RtcThreadManager const& getNetworkThread();

// symbol: ?getSignalThread@NetherNet@@YAAEBVRtcThreadManager@1@XZ
MCAPI class NetherNet::RtcThreadManager const& getSignalThread();

// symbol: ?getWorkerThread@NetherNet@@YAAEBVRtcThreadManager@1@XZ
MCAPI class NetherNet::RtcThreadManager const& getWorkerThread();

// symbol: ?make_error_code@NetherNet@@YA?AVerror_code@std@@W4FacadeErrorCode@1@@Z
MCAPI std::error_code make_error_code(::NetherNet::FacadeErrorCode);
// NOLINTEND

}; // namespace NetherNet
