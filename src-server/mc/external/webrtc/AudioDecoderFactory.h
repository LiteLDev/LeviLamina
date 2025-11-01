#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioCodecPairId; }
namespace webrtc { class AudioDecoder; }
namespace webrtc { struct AudioCodecSpec; }
namespace webrtc { struct SdpAudioFormat; }
// clang-format on

namespace webrtc {

class AudioDecoderFactory : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::std::vector<::webrtc::AudioCodecSpec> GetSupportedDecoders() = 0;

    // vIndex: 4
    virtual bool IsSupportedDecoder(::webrtc::SdpAudioFormat const&) = 0;

    // vIndex: 5
    virtual ::std::unique_ptr<::webrtc::AudioDecoder> MakeAudioDecoder(::webrtc::SdpAudioFormat const&, ::std::optional<::webrtc::AudioCodecPairId>) = 0;

    // vIndex: 2
    virtual ~AudioDecoderFactory() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
