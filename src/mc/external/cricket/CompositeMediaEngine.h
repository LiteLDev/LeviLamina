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
    ::ll::UntypedStorage<8, 8> mUnkc40bdd;
    ::ll::UntypedStorage<8, 8> mUnk409b3a;
    ::ll::UntypedStorage<8, 8> mUnk8c59dd;
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

    virtual ::cricket::VoiceEngineInterface& voice() /*override*/;

    virtual ::cricket::VoiceEngineInterface const& voice() const /*override*/;

    virtual ::cricket::VideoEngineInterface& video() /*override*/;

    virtual ::cricket::VideoEngineInterface const& video() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
