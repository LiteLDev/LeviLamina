#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioFrame; }
// clang-format on

namespace webrtc {

class AudioFrameProcessor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AudioFrameProcessor() = default;

    virtual void Process(::std::unique_ptr<::webrtc::AudioFrame>) = 0;

    virtual void SetSink(::std::function<void(::std::unique_ptr<::webrtc::AudioFrame>)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
