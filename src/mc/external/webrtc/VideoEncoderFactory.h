#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class Environment; }
namespace webrtc { class RenderResolution; }
namespace webrtc { class VideoEncoder; }
namespace webrtc { struct SdpVideoFormat; }
// clang-format on

namespace webrtc {

class VideoEncoderFactory {
public:
    // VideoEncoderFactory inner types declare
    // clang-format off
    struct CodecSupport;
    class EncoderSelectorInterface;
    // clang-format on

    // VideoEncoderFactory inner types define
    struct CodecSupport {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk10f1a4;
        ::ll::UntypedStorage<1, 1> mUnk878516;
        // NOLINTEND

    public:
        // prevent constructor by default
        CodecSupport& operator=(CodecSupport const&);
        CodecSupport(CodecSupport const&);
        CodecSupport();
    };

    class EncoderSelectorInterface {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~EncoderSelectorInterface() = default;

        virtual void OnCurrentEncoder(::webrtc::SdpVideoFormat const&) = 0;

        virtual ::std::optional<::webrtc::SdpVideoFormat> OnAvailableBitrate(::webrtc::DataRate const&) = 0;

        virtual ::std::optional<::webrtc::SdpVideoFormat> OnResolutionChange(::webrtc::RenderResolution const&);

        virtual ::std::optional<::webrtc::SdpVideoFormat> OnEncoderBroken() = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::webrtc::SdpVideoFormat> GetSupportedFormats() const = 0;

    virtual ::std::vector<::webrtc::SdpVideoFormat> GetImplementations() const;

    virtual ::webrtc::VideoEncoderFactory::CodecSupport
    QueryCodecSupport(::webrtc::SdpVideoFormat const&, ::std::optional<::std::string>) const;

    virtual ::std::unique_ptr<::webrtc::VideoEncoder>
    Create(::webrtc::Environment const&, ::webrtc::SdpVideoFormat const&);

    virtual ::std::unique_ptr<::webrtc::VideoEncoder> CreateVideoEncoder(::webrtc::SdpVideoFormat const&);

    virtual ::std::unique_ptr<::webrtc::VideoEncoderFactory::EncoderSelectorInterface> GetEncoderSelector() const;

    virtual ~VideoEncoderFactory() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
