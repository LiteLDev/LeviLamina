#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ReceiveStreamInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FrameDecryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class RtpSource; }
// clang-format on

namespace webrtc {

class MediaReceiveStreamInterface : public ::webrtc::ReceiveStreamInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void Start() = 0;

    virtual void Stop() = 0;

    virtual void
        SetDepacketizerToDecoderFrameTransformer(::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>) = 0;

    virtual void SetFrameDecryptor(::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface>) = 0;

    virtual ::std::vector<::webrtc::RtpSource> GetSources() const = 0;

    virtual ~MediaReceiveStreamInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
