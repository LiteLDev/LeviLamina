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
    struct InitializePortAllocatorResult {};

public:
    // prevent constructor by default
    PeerConnection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>>
    AddTrack(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>, ::std::vector<::std::string> const&, ::std::vector<::webrtc::RtpEncodingParameters> const*);

    MCNAPI bool ConfiguredForMedia() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
        FindTransceiverBySender(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>);

    MCNAPI bool GetLocalCandidateMediaIndex(::std::string const&, int*);

    MCNAPI ::webrtc::RTCError
    Initialize(::webrtc::PeerConnectionInterface::RTCConfiguration const&, ::webrtc::PeerConnectionDependencies);

    MCNAPI ::webrtc::PeerConnection::InitializePortAllocatorResult
    InitializePortAllocator_n(::std::set<::rtc::SocketAddress> const&, ::std::vector<::cricket::RelayServerConfig> const&, ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const&, ::webrtc::PeerConnectionInterface::RTCConfiguration const&);

    MCNAPI ::std::function<void(::rtc::CopyOnWriteBuffer const&, int64)> InitializeRtcpCallback();

    MCNAPI ::webrtc::JsepTransportController*
    InitializeTransportController_n(::webrtc::PeerConnectionInterface::RTCConfiguration const&, ::webrtc::PeerConnectionDependencies const&);

    MCNAPI ::std::function<void(::webrtc::RtpPacketReceived const&)> InitializeUnDemuxablePacketHandler();

    MCNAPI void OnIceCandidate(::std::unique_ptr<::webrtc::IceCandidateInterface>);

    MCNAPI void OnIceCandidateError(::std::string const&, int, ::std::string const&, int, ::std::string const&);

    MCNAPI void OnIceCandidatesRemoved(::std::vector<::cricket::Candidate> const&);

    MCNAPI void OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState);

    MCNAPI void OnSelectedCandidatePairChanged(::cricket::CandidatePairChangeEvent const&);

    MCNAPI void OnTransportControllerCandidateChanged(::cricket::CandidatePairChangeEvent const&);

    MCNAPI void OnTransportControllerCandidateError(::cricket::IceCandidateErrorEvent const&);

    MCNAPI void
    OnTransportControllerCandidatesGathered(::std::string const&, ::std::vector<::cricket::Candidate> const&);

    MCNAPI void OnTransportControllerCandidatesRemoved(::std::vector<::cricket::Candidate> const&);

    MCNAPI void OnTransportControllerConnectionState(::cricket::IceConnectionState);

    MCNAPI void OnTransportControllerDtlsHandshakeError(::rtc::SSLHandshakeError);

    MCNAPI void OnTransportControllerGatheringState(::cricket::IceGatheringState);

    MCNAPI PeerConnection(
        ::webrtc::Environment const&,
        ::webrtc::scoped_refptr<::webrtc::ConnectionContext>,
        ::webrtc::PeerConnectionFactoryInterface::Options const&,
        bool,
        ::std::unique_ptr<::webrtc::Call>,
        ::webrtc::PeerConnectionDependencies&,
        bool
    );

    MCNAPI bool ReconfigurePortAllocator_n(
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

    MCNAPI void ReportFirstConnectUsageMetrics();

    MCNAPI void ReportIceCandidateCollected(::cricket::Candidate const&);

    MCNAPI void ReportRemoteIceCandidateAdded(::cricket::Candidate const&);

    MCNAPI void ReportTransportStats(::std::vector<::webrtc::scoped_refptr<
                                         ::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>);

    MCNAPI void ReportUsagePattern() const;

    MCNAPI void SetConnectionState(::webrtc::PeerConnectionInterface::PeerConnectionState);

    MCNAPI void SetSctpTransportName(::std::string);

    MCNAPI void SetStandardizedIceConnectionState(::webrtc::PeerConnectionInterface::IceConnectionState);

    MCNAPI ::std::optional<::std::string> SetupDataChannelTransport_n(::std::string_view);

    MCNAPI bool StartRtcEventLog_w(::std::unique_ptr<::webrtc::RtcEventLogOutput>, int64);

    MCNAPI void StopRtcEventLog_w();

    MCNAPI void TeardownDataChannelTransport_n(::webrtc::RTCError);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::PeerConnection>> Create(
        ::webrtc::Environment const&,
        ::webrtc::scoped_refptr<::webrtc::ConnectionContext>,
        ::webrtc::PeerConnectionFactoryInterface::Options const&,
        ::std::unique_ptr<::webrtc::Call>,
        ::webrtc::PeerConnectionInterface::RTCConfiguration const&,
        ::webrtc::PeerConnectionDependencies
    );

    MCNAPI static void ReportBestConnectionState(::cricket::TransportStats const&);

    MCNAPI static void
    ReportNegotiatedCiphers(bool, ::cricket::TransportStats const&, ::std::set<::cricket::MediaType> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForPeerConnectionInterface();

    MCNAPI static void** $vftableForPeerConnectionSdpMethods();
    // NOLINTEND
};

} // namespace webrtc
