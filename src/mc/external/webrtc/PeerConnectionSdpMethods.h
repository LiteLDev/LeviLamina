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
    virtual ~PeerConnectionSdpMethods() = default;

    virtual ::std::string session_id() const = 0;

    virtual bool NeedsIceRestart(::std::string const& content_name) const = 0;

    virtual ::std::optional<::std::string> sctp_mid() const = 0;

    virtual ::webrtc::PeerConnectionInterface::RTCConfiguration const* configuration() const = 0;

    virtual void ReportSdpBundleUsage(::webrtc::SessionDescriptionInterface const& remote_description) = 0;

    virtual ::webrtc::PeerConnectionMessageHandler* message_handler() = 0;

    virtual ::webrtc::RtpTransmissionManager* rtp_manager() = 0;

    virtual ::webrtc::RtpTransmissionManager const* rtp_manager() const = 0;

    virtual bool dtls_enabled() const = 0;

    virtual ::webrtc::PeerConnectionFactoryInterface::Options const* options() const = 0;

    virtual ::webrtc::CryptoOptions GetCryptoOptions() = 0;

    virtual ::webrtc::JsepTransportController* transport_controller_s() = 0;

    virtual ::webrtc::JsepTransportController* transport_controller_n() = 0;

    virtual ::webrtc::DataChannelController* data_channel_controller() = 0;

    virtual ::cricket::PortAllocator* port_allocator() = 0;

    virtual ::webrtc::LegacyStatsCollector* legacy_stats() = 0;

    virtual ::webrtc::PeerConnectionObserver* Observer() const = 0;

    virtual ::std::optional<::rtc::SSLRole> GetSctpSslRole_n() = 0;

    virtual ::webrtc::PeerConnectionInterface::IceConnectionState ice_connection_state_internal() = 0;

    virtual void SetIceConnectionState(::webrtc::PeerConnectionInterface::IceConnectionState new_state) = 0;

    virtual void NoteUsageEvent(::webrtc::UsageEvent event) = 0;

    virtual bool IsClosed() const = 0;

    virtual bool IsUnifiedPlan() const = 0;

    virtual bool ValidateBundleSettings(
        ::cricket::SessionDescription const*                             desc,
        ::std::map<::std::string, ::cricket::ContentGroup const*> const& bundle_groups_by_mid
    ) = 0;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> AddTransceiver(
        ::cricket::MediaType                                         media_type,
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::webrtc::RtpTransceiverInit const&                          init,
        bool                                                         update_negotiation_needed
    ) = 0;

    virtual void StartSctpTransport(int local_port, int remote_port, int max_message_size) = 0;

    virtual void AddRemoteCandidate(::std::string const& mid, ::cricket::Candidate const& candidate) = 0;

    virtual ::webrtc::Call* call_ptr() = 0;

    virtual bool SrtpRequired() const = 0;

    virtual bool CreateDataChannelTransport(::std::string_view mid) = 0;

    virtual void DestroyDataChannelTransport(::webrtc::RTCError error) = 0;

    virtual ::webrtc::FieldTrialsView const& trials() const = 0;

    virtual void ClearStatsCache() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
