#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/RtpSenderInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaSendChannelInterface; }
namespace cricket { struct Codec; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { struct RtpEncodingParameters; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace webrtc {

class RtpSenderInternal : public ::webrtc::RtpSenderInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SetMediaChannel(::cricket::MediaSendChannelInterface* media_channel) = 0;

    virtual void SetSsrc(uint ssrc) = 0;

    virtual void set_stream_ids(::std::vector<::std::string> const& stream_ids) = 0;

    virtual void set_init_send_encodings(::std::vector<::webrtc::RtpEncodingParameters> const& init_send_encodings) = 0;

    virtual void set_transport(::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport) = 0;

    virtual void Stop() = 0;

    virtual ::webrtc::RtpParameters GetParametersInternal() const = 0;

    virtual void SetParametersInternal(
        ::webrtc::RtpParameters const&                    parameters,
        ::absl::AnyInvocable<void(::webrtc::RTCError) &&> callback,
        bool                                              blocking
    ) = 0;

    virtual ::webrtc::RtpParameters GetParametersInternalWithAllLayers() const = 0;

    virtual ::webrtc::RTCError SetParametersInternalWithAllLayers(::webrtc::RtpParameters const& parameters) = 0;

    virtual ::webrtc::RTCError CheckCodecParameters(::webrtc::RtpParameters const& parameters) = 0;

    virtual int AttachmentId() const = 0;

    virtual ::webrtc::RTCError DisableEncodingLayers(::std::vector<::std::string> const& rids) = 0;

    virtual void SetTransceiverAsStopped() = 0;

    virtual void SetSendCodecs(::std::vector<::cricket::Codec> send_codecs) = 0;

    virtual ~RtpSenderInternal() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
