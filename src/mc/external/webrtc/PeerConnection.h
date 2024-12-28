#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceConnectionState.h"
#include "mc/external/cricket/IceGatheringState.h"
#include "mc/external/cricket/MediaType.h"
#include "mc/external/rtc/SSLHandshakeError.h"
#include "mc/external/webrtc/PeerConnectionFactoryInterface.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/PortPrunePolicy.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { struct CandidatePairChangeEvent; }
namespace cricket { struct IceCandidateErrorEvent; }
namespace cricket { struct RelayServerConfig; }
namespace cricket { struct TransportStats; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class SocketAddress; }
namespace webrtc { class Call; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class Environment; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class JsepTransportController; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtcEventLogOutput; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class TurnCustomizer; }
namespace webrtc { struct PeerConnectionDependencies; }
namespace webrtc { struct RtpEncodingParameters; }
// clang-format on

namespace webrtc {

class PeerConnection {
public:
    // PeerConnection inner types declare
    // clang-format off
    struct InitializePortAllocatorResult;
    // clang-format on

    // PeerConnection inner types define
    struct InitializePortAllocatorResult {
    public:
        // prevent constructor by default
        InitializePortAllocatorResult& operator=(InitializePortAllocatorResult const&);
        InitializePortAllocatorResult(InitializePortAllocatorResult const&);
        InitializePortAllocatorResult();
    };

public:
    // prevent constructor by default
    PeerConnection& operator=(PeerConnection const&);
    PeerConnection(PeerConnection const&);
    PeerConnection();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>>
    AddTrack(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>, ::std::vector<::std::string> const&, ::std::vector<::webrtc::RtpEncodingParameters> const*);

    MCAPI bool ConfiguredForMedia() const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
        FindTransceiverBySender(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>);

    MCAPI bool GetLocalCandidateMediaIndex(::std::string const&, int*);

    MCAPI ::webrtc::RTCError
    Initialize(::webrtc::PeerConnectionInterface::RTCConfiguration const&, ::webrtc::PeerConnectionDependencies);

    MCAPI ::webrtc::PeerConnection::InitializePortAllocatorResult
    InitializePortAllocator_n(::std::set<::rtc::SocketAddress> const&, ::std::vector<::cricket::RelayServerConfig> const&, ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const&, ::webrtc::PeerConnectionInterface::RTCConfiguration const&);

    MCAPI ::std::function<void(::rtc::CopyOnWriteBuffer const&, int64)> InitializeRtcpCallback();

    MCAPI ::webrtc::JsepTransportController*
    InitializeTransportController_n(::webrtc::PeerConnectionInterface::RTCConfiguration const&, ::webrtc::PeerConnectionDependencies const&);

    MCAPI ::std::function<void(::webrtc::RtpPacketReceived const&)> InitializeUnDemuxablePacketHandler();

    MCAPI void OnIceCandidate(::std::unique_ptr<::webrtc::IceCandidateInterface>);

    MCAPI void OnIceCandidateError(::std::string const&, int, ::std::string const&, int, ::std::string const&);

    MCAPI void OnIceCandidatesRemoved(::std::vector<::cricket::Candidate> const&);

    MCAPI void OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState);

    MCAPI void OnSelectedCandidatePairChanged(::cricket::CandidatePairChangeEvent const&);

    MCAPI void OnTransportControllerCandidateChanged(::cricket::CandidatePairChangeEvent const&);

    MCAPI void OnTransportControllerCandidateError(::cricket::IceCandidateErrorEvent const&);

    MCAPI void
    OnTransportControllerCandidatesGathered(::std::string const&, ::std::vector<::cricket::Candidate> const&);

    MCAPI void OnTransportControllerCandidatesRemoved(::std::vector<::cricket::Candidate> const&);

    MCAPI void OnTransportControllerConnectionState(::cricket::IceConnectionState);

    MCAPI void OnTransportControllerDtlsHandshakeError(::rtc::SSLHandshakeError);

    MCAPI void OnTransportControllerGatheringState(::cricket::IceGatheringState);

    MCAPI PeerConnection(
        ::webrtc::Environment const&,
        ::webrtc::scoped_refptr<::webrtc::ConnectionContext>,
        ::webrtc::PeerConnectionFactoryInterface::Options const&,
        bool,
        ::std::unique_ptr<::webrtc::Call>,
        ::webrtc::PeerConnectionDependencies&,
        bool
    );

    MCAPI bool ReconfigurePortAllocator_n(
        ::std::set<::rtc::SocketAddress> const&,
        ::std::vector<::cricket::RelayServerConfig> const&,
        ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const&,
        ::webrtc::PeerConnectionInterface::IceTransportsType,
        int,
        ::webrtc::PortPrunePolicy,
        ::webrtc::TurnCustomizer*,
        ::std::optional<int>,
        bool
    );

    MCAPI void ReportFirstConnectUsageMetrics();

    MCAPI void ReportIceCandidateCollected(::cricket::Candidate const&);

    MCAPI void ReportRemoteIceCandidateAdded(::cricket::Candidate const&);

    MCAPI void ReportTransportStats(::std::vector<::webrtc::scoped_refptr<
                                        ::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>);

    MCAPI void ReportUsagePattern() const;

    MCAPI void SetConnectionState(::webrtc::PeerConnectionInterface::PeerConnectionState);

    MCAPI void SetSctpTransportName(::std::string);

    MCAPI void SetStandardizedIceConnectionState(::webrtc::PeerConnectionInterface::IceConnectionState);

    MCAPI ::std::optional<::std::string> SetupDataChannelTransport_n(::std::string_view);

    MCAPI bool StartRtcEventLog_w(::std::unique_ptr<::webrtc::RtcEventLogOutput>, int64);

    MCAPI void StopRtcEventLog_w();

    MCAPI void TeardownDataChannelTransport_n(::webrtc::RTCError);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::PeerConnection>> Create(
        ::webrtc::Environment const&,
        ::webrtc::scoped_refptr<::webrtc::ConnectionContext>,
        ::webrtc::PeerConnectionFactoryInterface::Options const&,
        ::std::unique_ptr<::webrtc::Call>,
        ::webrtc::PeerConnectionInterface::RTCConfiguration const&,
        ::webrtc::PeerConnectionDependencies
    );

    MCAPI static void ReportBestConnectionState(::cricket::TransportStats const&);

    MCAPI static void
    ReportNegotiatedCiphers(bool, ::cricket::TransportStats const&, ::std::set<::cricket::MediaType> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::webrtc::Environment const&,
        ::webrtc::scoped_refptr<::webrtc::ConnectionContext>,
        ::webrtc::PeerConnectionFactoryInterface::Options const&,
        bool,
        ::std::unique_ptr<::webrtc::Call>,
        ::webrtc::PeerConnectionDependencies&,
        bool
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI static void** $vftableForPeerConnectionInterface();

    MCAPI static void** $vftableForPeerConnectionSdpMethods();
    // NOLINTEND
};

} // namespace webrtc
