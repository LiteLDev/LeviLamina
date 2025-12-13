#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaEngineInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class VideoEngineInterface; }
namespace cricket { class VoiceEngineInterface; }
// clang-format on

namespace cricket {

class CompositeMediaEngine : public ::cricket::MediaEngineInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk996f98;
    ::ll::UntypedStorage<8, 8> mUnk3afc8d;
    ::ll::UntypedStorage<8, 8> mUnka94305;
    // NOLINTEND

public:
    // prevent constructor by default
    CompositeMediaEngine& operator=(CompositeMediaEngine const&);
    CompositeMediaEngine(CompositeMediaEngine const&);
    CompositeMediaEngine();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompositeMediaEngine() /*override*/ = default;

    // vIndex: 1
    virtual bool Init() /*override*/;

    // vIndex: 3
    virtual ::cricket::VoiceEngineInterface& voice() /*override*/;

    // vIndex: 2
    virtual ::cricket::VoiceEngineInterface const& voice() const /*override*/;

    // vIndex: 5
    virtual ::cricket::VideoEngineInterface& video() /*override*/;

    // vIndex: 4
    virtual ::cricket::VideoEngineInterface const& video() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
