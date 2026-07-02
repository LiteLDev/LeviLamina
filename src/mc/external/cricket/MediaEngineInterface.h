#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class VideoEngineInterface; }
namespace cricket { class VoiceEngineInterface; }
// clang-format on

namespace cricket {

class MediaEngineInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MediaEngineInterface() = default;

    virtual bool Init() = 0;

    virtual ::cricket::VoiceEngineInterface& voice() = 0;

    virtual ::cricket::VoiceEngineInterface const& voice() const = 0;

    virtual ::cricket::VideoEngineInterface& video() = 0;

    virtual ::cricket::VideoEngineInterface const& video() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
