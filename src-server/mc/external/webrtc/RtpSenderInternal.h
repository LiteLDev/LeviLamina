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
    // vIndex: 20
    virtual void SetMediaChannel(::cricket::MediaSendChannelInterface*) = 0;

    // vIndex: 21
    virtual void SetSsrc(uint) = 0;

    // vIndex: 22
    virtual void set_stream_ids(::std::vector<::std::string> const&) = 0;

    // vIndex: 23
    virtual void set_init_send_encodings(::std::vector<::webrtc::RtpEncodingParameters> const&) = 0;

    // vIndex: 24
    virtual void set_transport(::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface>) = 0;

    // vIndex: 25
    virtual void Stop() = 0;

    // vIndex: 26
    virtual ::webrtc::RtpParameters GetParametersInternal() const = 0;

    // vIndex: 27
    virtual void SetParametersInternal(::webrtc::RtpParameters const&, ::absl::AnyInvocable<void(::webrtc::RTCError)&&>, bool) = 0;

    // vIndex: 28
    virtual ::webrtc::RtpParameters GetParametersInternalWithAllLayers() const = 0;

    // vIndex: 29
    virtual ::webrtc::RTCError SetParametersInternalWithAllLayers(::webrtc::RtpParameters const&) = 0;

    // vIndex: 30
    virtual ::webrtc::RTCError CheckCodecParameters(::webrtc::RtpParameters const&) = 0;

    // vIndex: 31
    virtual int AttachmentId() const = 0;

    // vIndex: 32
    virtual ::webrtc::RTCError DisableEncodingLayers(::std::vector<::std::string> const&) = 0;

    // vIndex: 33
    virtual void SetTransceiverAsStopped() = 0;

    // vIndex: 34
    virtual void SetSendCodecs(::std::vector<::cricket::Codec>) = 0;

    // vIndex: 1
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

}
