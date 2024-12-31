#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
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

class RtpReceiverInterface : public ::webrtc::RefCountInterface {
public:
    // prevent constructor by default
    RtpReceiverInterface& operator=(RtpReceiverInterface const&);
    RtpReceiverInterface(RtpReceiverInterface const&);
    RtpReceiverInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track() const = 0;

    // vIndex: 4
    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport() const;

    // vIndex: 5
    virtual ::std::vector<::std::string> stream_ids() const;

    // vIndex: 6
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> streams() const;

    // vIndex: 7
    virtual ::cricket::MediaType media_type() const = 0;

    // vIndex: 8
    virtual ::std::string id() const = 0;

    // vIndex: 9
    virtual ::webrtc::RtpParameters GetParameters() const = 0;

    // vIndex: 10
    virtual bool SetParameters(::webrtc::RtpParameters const&);

    // vIndex: 11
    virtual void SetObserver(::webrtc::RtpReceiverObserverInterface*) = 0;

    // vIndex: 12
    virtual void SetJitterBufferMinimumDelay(::std::optional<double>) = 0;

    // vIndex: 13
    virtual ::std::vector<::webrtc::RtpSource> GetSources() const;

    // vIndex: 14
    virtual void SetFrameDecryptor(::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface>);

    // vIndex: 15
    virtual ::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface> GetFrameDecryptor() const;

    // vIndex: 16
    virtual void SetDepacketizerToDecoderFrameTransformer(::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>);

    // vIndex: 2
    virtual ~RtpReceiverInterface() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
