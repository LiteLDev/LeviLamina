#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Environment; }
namespace webrtc { class VideoDecoder; }
namespace webrtc { struct SdpVideoFormat; }
// clang-format on

namespace webrtc {

class VideoDecoderFactory {
public:
    // VideoDecoderFactory inner types declare
    // clang-format off
    struct CodecSupport;
    // clang-format on

    // VideoDecoderFactory inner types define
    struct CodecSupport {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk35eb9f;
        ::ll::UntypedStorage<1, 1> mUnkc9d82e;
        // NOLINTEND

    public:
        // prevent constructor by default
        CodecSupport& operator=(CodecSupport const&);
        CodecSupport(CodecSupport const&);
        CodecSupport();
    };

public:
    // prevent constructor by default
    VideoDecoderFactory& operator=(VideoDecoderFactory const&);
    VideoDecoderFactory(VideoDecoderFactory const&);
    VideoDecoderFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VideoDecoderFactory();

    // vIndex: 1
    virtual ::std::vector<::webrtc::SdpVideoFormat> GetSupportedFormats() const = 0;

    // vIndex: 2
    virtual ::webrtc::VideoDecoderFactory::CodecSupport QueryCodecSupport(::webrtc::SdpVideoFormat const&, bool) const;

    // vIndex: 3
    virtual ::std::unique_ptr<::webrtc::VideoDecoder>
    Create(::webrtc::Environment const&, ::webrtc::SdpVideoFormat const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::webrtc::VideoDecoderFactory::CodecSupport $QueryCodecSupport(::webrtc::SdpVideoFormat const&, bool) const;
    // NOLINTEND
};

} // namespace webrtc
