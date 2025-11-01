#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/webrtc/PeerConnectionFactoryInterface.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/UsageEvent.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class ContentGroup; }
namespace cricket { class PortAllocator; }
namespace cricket { class SessionDescription; }
namespace webrtc { class Call; }
namespace webrtc { class DataChannelController; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class JsepTransportController; }
namespace webrtc { class LegacyStatsCollector; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class PeerConnectionMessageHandler; }
namespace webrtc { class PeerConnectionObserver; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpTransceiverInterface; }
namespace webrtc { class RtpTransmissionManager; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct RtpTransceiverInit; }
// clang-format on

namespace webrtc {

class PeerConnectionSdpMethods {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PeerConnectionSdpMethods() = default;

    // vIndex: 1
    virtual ::std::string session_id() const = 0;

    // vIndex: 2
    virtual bool NeedsIceRestart(::std::string const&) const = 0;

    // vIndex: 3
    virtual ::std::optional<::std::string> sctp_mid() const = 0;

    // vIndex: 4
    virtual ::webrtc::PeerConnectionInterface::RTCConfiguration const* configuration() const = 0;

    // vIndex: 5
    virtual void ReportSdpBundleUsage(::webrtc::SessionDescriptionInterface const&) = 0;

    // vIndex: 6
    virtual ::webrtc::PeerConnectionMessageHandler* message_handler() = 0;

    // vIndex: 8
    virtual ::webrtc::RtpTransmissionManager* rtp_manager() = 0;

    // vIndex: 7
    virtual ::webrtc::RtpTransmissionManager const* rtp_manager() const = 0;

    // vIndex: 9
    virtual bool dtls_enabled() const = 0;

    // vIndex: 10
    virtual ::webrtc::PeerConnectionFactoryInterface::Options const* options() const = 0;

    // vIndex: 11
    virtual ::webrtc::CryptoOptions GetCryptoOptions() = 0;

    // vIndex: 12
    virtual ::webrtc::JsepTransportController* transport_controller_s() = 0;

    // vIndex: 13
    virtual ::webrtc::JsepTransportController* transport_controller_n() = 0;

    // vIndex: 14
    virtual ::webrtc::DataChannelController* data_channel_controller() = 0;

    // vIndex: 15
    virtual ::cricket::PortAllocator* port_allocator() = 0;

    // vIndex: 16
    virtual ::webrtc::LegacyStatsCollector* legacy_stats() = 0;

    // vIndex: 17
    virtual ::webrtc::PeerConnectionObserver* Observer() const = 0;

    // vIndex: 18
    virtual ::std::optional<::rtc::SSLRole> GetSctpSslRole_n() = 0;

    // vIndex: 19
    virtual ::webrtc::PeerConnectionInterface::IceConnectionState ice_connection_state_internal() = 0;

    // vIndex: 20
    virtual void SetIceConnectionState(::webrtc::PeerConnectionInterface::IceConnectionState) = 0;

    // vIndex: 21
    virtual void NoteUsageEvent(::webrtc::UsageEvent) = 0;

    // vIndex: 22
    virtual bool IsClosed() const = 0;

    // vIndex: 23
    virtual bool IsUnifiedPlan() const = 0;

    // vIndex: 24
    virtual bool ValidateBundleSettings(::cricket::SessionDescription const*, ::std::map<::std::string, ::cricket::ContentGroup const*> const&) = 0;

    // vIndex: 25
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> AddTransceiver(::cricket::MediaType, ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>, ::webrtc::RtpTransceiverInit const&, bool) = 0;

    // vIndex: 26
    virtual void StartSctpTransport(int, int, int) = 0;

    // vIndex: 27
    virtual void AddRemoteCandidate(::std::string const&, ::cricket::Candidate const&) = 0;

    // vIndex: 28
    virtual ::webrtc::Call* call_ptr() = 0;

    // vIndex: 29
    virtual bool SrtpRequired() const = 0;

    // vIndex: 30
    virtual bool CreateDataChannelTransport(::std::string_view) = 0;

    // vIndex: 31
    virtual void DestroyDataChannelTransport(::webrtc::RTCError) = 0;

    // vIndex: 32
    virtual ::webrtc::FieldTrialsView const& trials() const = 0;

    // vIndex: 33
    virtual void ClearStatsCache() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
