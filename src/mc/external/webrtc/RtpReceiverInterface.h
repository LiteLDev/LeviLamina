#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FrameTransformerHost.h"
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class FrameDecryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class RtpReceiverObserverInterface; }
namespace webrtc { class RtpSource; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace webrtc {

class RtpReceiverInterface : public ::webrtc::RefCountInterface, public ::webrtc::FrameTransformerHost {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track() const = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport() const;

    virtual ::std::vector<::std::string> stream_ids() const;

    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> streams() const;

    virtual ::webrtc::MediaType media_type() const = 0;

    virtual ::std::string id() const = 0;

    virtual ::webrtc::RtpParameters GetParameters() const = 0;

    virtual bool SetParameters(::webrtc::RtpParameters const&);

    virtual void SetObserver(::webrtc::RtpReceiverObserverInterface* a1) = 0;

    virtual void SetJitterBufferMinimumDelay(::std::optional<double> a1) = 0;

    virtual ::std::vector<::webrtc::RtpSource> GetSources() const;

    virtual void SetFrameDecryptor(::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface> a1);

    virtual ::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface> GetFrameDecryptor() const;

    virtual void SetDepacketizerToDecoderFrameTransformer(
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer
    );

    virtual void SetFrameTransformer(::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> a1) /*override*/;

    virtual ~RtpReceiverInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $SetParameters(::webrtc::RtpParameters const&);

    MCNAPI void $SetDepacketizerToDecoderFrameTransformer(
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer
    );


    // NOLINTEND
};

} // namespace webrtc
