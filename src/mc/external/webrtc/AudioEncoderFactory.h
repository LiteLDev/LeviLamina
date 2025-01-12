#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioCodecPairId; }
namespace webrtc { class AudioEncoder; }
namespace webrtc { struct AudioCodecInfo; }
namespace webrtc { struct AudioCodecSpec; }
namespace webrtc { struct SdpAudioFormat; }
// clang-format on

namespace webrtc {

class AudioEncoderFactory : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::std::vector<::webrtc::AudioCodecSpec> GetSupportedEncoders() = 0;

    // vIndex: 4
    virtual ::std::optional<::webrtc::AudioCodecInfo> QueryAudioEncoder(::webrtc::SdpAudioFormat const&) = 0;

    // vIndex: 5
    virtual ::std::unique_ptr<::webrtc::AudioEncoder>
    MakeAudioEncoder(int, ::webrtc::SdpAudioFormat const&, ::std::optional<::webrtc::AudioCodecPairId>) = 0;

    // vIndex: 2
    virtual ~AudioEncoderFactory() /*override*/ = default;
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
