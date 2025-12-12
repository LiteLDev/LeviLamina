#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DecodedImageCallback; }
namespace webrtc { class EncodedImage; }
// clang-format on

namespace webrtc {

class VideoDecoder {
public:
    // VideoDecoder inner types declare
    // clang-format off
    struct DecoderInfo;
    class Settings;
    // clang-format on

    // VideoDecoder inner types define
    struct DecoderInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkb9e290;
        ::ll::UntypedStorage<1, 1>  mUnkd8f66f;
        // NOLINTEND

    public:
        // prevent constructor by default
        DecoderInfo& operator=(DecoderInfo const&);
        DecoderInfo(DecoderInfo const&);
        DecoderInfo();
    };

    class Settings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnkcff7eb;
        ::ll::UntypedStorage<4, 8> mUnk479edd;
        ::ll::UntypedStorage<4, 4> mUnkdf945a;
        ::ll::UntypedStorage<4, 4> mUnke7e8d2;
        // NOLINTEND

    public:
        // prevent constructor by default
        Settings& operator=(Settings const&);
        Settings(Settings const&);
        Settings();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoDecoder() = default;

    virtual bool Configure(::webrtc::VideoDecoder::Settings const&) = 0;

    virtual int Decode(::webrtc::EncodedImage const&, int64);

    virtual int Decode(::webrtc::EncodedImage const&, bool, int64);

    virtual int RegisterDecodeCompleteCallback(::webrtc::DecodedImageCallback*) = 0;

    virtual int Release() = 0;

    virtual ::webrtc::VideoDecoder::DecoderInfo GetDecoderInfo() const;

    virtual char const* ImplementationName() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
