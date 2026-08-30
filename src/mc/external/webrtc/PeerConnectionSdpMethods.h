#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/PeerConnectionFactoryInterface.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/SSLRole.h"
#include "mc/external/webrtc/UsageEvent.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Call; }
namespace webrtc { class Candidate; }
namespace webrtc { class ContentGroup; }
namespace webrtc { class DataChannelController; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class JsepTransportController; }
namespace webrtc { class LegacyStatsCollector; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class PayloadTypePicker; }
namespace webrtc { class PeerConnectionMessageHandler; }
namespace webrtc { class PeerConnectionObserver; }
namespace webrtc { class PortAllocator; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpTransceiverInterface; }
namespace webrtc { class RtpTransmissionManager; }
namespace webrtc { class SessionDescription; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct RtpTransceiverInit; }
namespace webrtc { struct SctpOptions; }
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

    virtual ::webrtc::PortAllocator* port_allocator() = 0;

    virtual ::webrtc::LegacyStatsCollector* legacy_stats() = 0;

    virtual void RunWithObserver(::absl::AnyInvocable<void(::webrtc::PeerConnectionObserver*) &&> task) = 0;

    virtual ::std::optional<::webrtc::SSLRole> GetSctpSslRole_n() = 0;

    virtual ::webrtc::PeerConnectionInterface::IceConnectionState ice_connection_state_internal() = 0;

    virtual void SetIceConnectionState(::webrtc::PeerConnectionInterface::IceConnectionState new_state) = 0;

    virtual void NoteUsageEvent(::webrtc::UsageEvent event) = 0;

    virtual bool IsClosed() const = 0;

    virtual bool IsUnifiedPlan() const = 0;

    virtual bool ValidateBundleSettings(
        ::webrtc::SessionDescription const*                             desc,
        ::std::map<::std::string, ::webrtc::ContentGroup const*> const& bundle_groups_by_mid
    ) = 0;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> AddTransceiver(
        ::webrtc::MediaType                                          media_type,
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::webrtc::RtpTransceiverInit const&                          init,
        bool                                                         update_negotiation_needed
    ) = 0;

    virtual ::webrtc::RTCError StartSctpTransport(::webrtc::SctpOptions const& options) = 0;

    virtual void StartSctpTransport(int local_port, int remote_port, int max_message_size);

    virtual void AddRemoteCandidate(::std::string_view mid, ::webrtc::Candidate const& candidate) = 0;

    virtual ::webrtc::Call* call_ptr() = 0;

    virtual bool SrtpRequired() const = 0;

    virtual bool CreateDataChannelTransport(::std::string_view mid) = 0;

    virtual void DestroyDataChannelTransport(::webrtc::RTCError error) = 0;

    virtual ::webrtc::FieldTrialsView const& trials() const = 0;

    virtual void ClearStatsCache() = 0;

    virtual ::webrtc::PayloadTypePicker& payload_type_picker() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $StartSctpTransport(int local_port, int remote_port, int max_message_size);


    // NOLINTEND
};

} // namespace webrtc
