#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioEncoder; }
namespace webrtc { class Environment; }
namespace webrtc { struct AudioCodecInfo; }
namespace webrtc { struct AudioCodecSpec; }
namespace webrtc { struct SdpAudioFormat; }
// clang-format on

namespace webrtc {

class AudioEncoderFactory : public ::webrtc::RefCountInterface {
public:
    // AudioEncoderFactory inner types declare
    // clang-format off
    struct Options;
    // clang-format on

    // AudioEncoderFactory inner types define
    struct Options {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk8c0f5c;
        ::ll::UntypedStorage<8, 16> mUnk1936f3;
        // NOLINTEND

    public:
        // prevent constructor by default
        Options& operator=(Options const&);
        Options(Options const&);
        Options();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::webrtc::AudioCodecSpec> GetSupportedEncoders() = 0;

    virtual ::std::optional<::webrtc::AudioCodecInfo> QueryAudioEncoder(::webrtc::SdpAudioFormat const&) = 0;

    virtual ::std::unique_ptr<::webrtc::AudioEncoder>
    Create(::webrtc::Environment const&, ::webrtc::SdpAudioFormat const&, ::webrtc::AudioEncoderFactory::Options) = 0;

    virtual ~AudioEncoderFactory() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
