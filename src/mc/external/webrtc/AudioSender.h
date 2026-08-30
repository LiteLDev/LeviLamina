#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioFrame; }
// clang-format on

namespace webrtc {

class AudioSender {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SendAudioData(::std::unique_ptr<::webrtc::AudioFrame>) = 0;

    virtual ~AudioSender();
    // NOLINTEND
};

} // namespace webrtc
