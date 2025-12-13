#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/VideoEncoderFactory.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class DtmfSenderInterface; }
namespace webrtc { class FrameEncryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { struct RtpEncodingParameters; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace webrtc {

class RtpSenderInterface : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool SetTrack(::webrtc::MediaStreamTrackInterface*) = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track() const = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport() const = 0;

    virtual uint ssrc() const = 0;

    virtual ::cricket::MediaType media_type() const = 0;

    virtual ::std::string id() const = 0;

    virtual ::std::vector<::std::string> stream_ids() const = 0;

    virtual void SetStreams(::std::vector<::std::string> const&) = 0;

    virtual ::std::vector<::webrtc::RtpEncodingParameters> init_send_encodings() const = 0;

    virtual ::webrtc::RtpParameters GetParameters() const = 0;

    virtual ::webrtc::RTCError SetParameters(::webrtc::RtpParameters const& parameters) = 0;

    virtual void SetParametersAsync(::webrtc::RtpParameters const&, ::absl::AnyInvocable<void(::webrtc::RTCError) &&>);

    virtual ::webrtc::scoped_refptr<::webrtc::DtmfSenderInterface> GetDtmfSender() const = 0;

    virtual void SetFrameEncryptor(::webrtc::scoped_refptr<::webrtc::FrameEncryptorInterface>) = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::FrameEncryptorInterface> GetFrameEncryptor() const = 0;

    virtual void
        SetEncoderToPacketizerFrameTransformer(::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>) = 0;

    virtual void SetEncoderSelector(::std::unique_ptr<::webrtc::VideoEncoderFactory::EncoderSelectorInterface>) = 0;

    virtual ~RtpSenderInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
