#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaEngineInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoEngineInterface; }
namespace webrtc { class VoiceEngineInterface; }
// clang-format on

namespace webrtc {

class CompositeMediaEngine : public ::webrtc::MediaEngineInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb7fc1c;
    ::ll::UntypedStorage<8, 8> mUnk84564a;
    ::ll::UntypedStorage<8, 8> mUnkb8c1ae;
    // NOLINTEND

public:
    // prevent constructor by default
    CompositeMediaEngine& operator=(CompositeMediaEngine const&);
    CompositeMediaEngine(CompositeMediaEngine const&);
    CompositeMediaEngine();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompositeMediaEngine() /*override*/ = default;

    virtual bool Init() /*override*/;

    virtual ::webrtc::VoiceEngineInterface const& voice() const /*override*/;

    virtual ::webrtc::VoiceEngineInterface& voice() /*override*/;

    virtual ::webrtc::VideoEngineInterface const& video() const /*override*/;

    virtual ::webrtc::VideoEngineInterface& video() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
