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
        // prevent constructor by default
        EncoderSelectorInterface& operator=(EncoderSelectorInterface const&);
        EncoderSelectorInterface(EncoderSelectorInterface const&);
        EncoderSelectorInterface();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~EncoderSelectorInterface() = default;

        // vIndex: 1
        virtual void OnCurrentEncoder(::webrtc::SdpVideoFormat const&) = 0;

        // vIndex: 2
        virtual ::std::optional<::webrtc::SdpVideoFormat> OnAvailableBitrate(::webrtc::DataRate const&) = 0;

        // vIndex: 3
        virtual ::std::optional<::webrtc::SdpVideoFormat> OnResolutionChange(::webrtc::RenderResolution const&);

        // vIndex: 4
        virtual ::std::optional<::webrtc::SdpVideoFormat> OnEncoderBroken() = 0;
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

public:
    // prevent constructor by default
    VideoEncoderFactory& operator=(VideoEncoderFactory const&);
    VideoEncoderFactory(VideoEncoderFactory const&);
    VideoEncoderFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::std::vector<::webrtc::SdpVideoFormat> GetSupportedFormats() const = 0;

    // vIndex: 1
    virtual ::std::vector<::webrtc::SdpVideoFormat> GetImplementations() const;

    // vIndex: 2
    virtual ::webrtc::VideoEncoderFactory::CodecSupport
    QueryCodecSupport(::webrtc::SdpVideoFormat const&, ::std::optional<::std::string>) const;

    // vIndex: 3
    virtual ::std::unique_ptr<::webrtc::VideoEncoder>
    Create(::webrtc::Environment const&, ::webrtc::SdpVideoFormat const&);

    // vIndex: 4
    virtual ::std::unique_ptr<::webrtc::VideoEncoder> CreateVideoEncoder(::webrtc::SdpVideoFormat const&);

    // vIndex: 5
    virtual ::std::unique_ptr<::webrtc::VideoEncoderFactory::EncoderSelectorInterface> GetEncoderSelector() const;

    // vIndex: 6
    virtual ~VideoEncoderFactory() = default;
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
