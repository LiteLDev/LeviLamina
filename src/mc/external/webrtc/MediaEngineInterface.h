#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoEngineInterface; }
namespace webrtc { class VoiceEngineInterface; }
// clang-format on

namespace webrtc {

class MediaEngineInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MediaEngineInterface() = default;

    virtual bool Init() = 0;

    virtual ::webrtc::VoiceEngineInterface& voice() = 0;

    virtual ::webrtc::VoiceEngineInterface const& voice() const = 0;

    virtual ::webrtc::VideoEngineInterface& video() = 0;

    virtual ::webrtc::VideoEngineInterface const& video() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
