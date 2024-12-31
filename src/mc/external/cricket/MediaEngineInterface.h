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
    // prevent constructor by default
    MediaEngineInterface& operator=(MediaEngineInterface const&);
    MediaEngineInterface(MediaEngineInterface const&);
    MediaEngineInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MediaEngineInterface() = default;

    // vIndex: 1
    virtual bool Init() = 0;

    // vIndex: 3
    virtual ::cricket::VoiceEngineInterface& voice() = 0;

    // vIndex: 2
    virtual ::cricket::VoiceEngineInterface const& voice() const = 0;

    // vIndex: 5
    virtual ::cricket::VideoEngineInterface& video() = 0;

    // vIndex: 4
    virtual ::cricket::VideoEngineInterface const& video() const = 0;
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

} // namespace cricket
