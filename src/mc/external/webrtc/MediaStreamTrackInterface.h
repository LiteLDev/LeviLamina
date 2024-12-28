#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/NotifierInterface.h"
#include "mc/external/webrtc/RefCountInterface.h"

namespace webrtc {

class MediaStreamTrackInterface : public ::webrtc::RefCountInterface, public ::webrtc::NotifierInterface {
public:
    // MediaStreamTrackInterface inner types define
    enum class TrackState : int {
        KLive  = 0,
        KEnded = 1,
    };

public:
    // prevent constructor by default
    MediaStreamTrackInterface& operator=(MediaStreamTrackInterface const&);
    MediaStreamTrackInterface(MediaStreamTrackInterface const&);
    MediaStreamTrackInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::std::string kind() const = 0;

    // vIndex: 4
    virtual ::std::string id() const = 0;

    // vIndex: 5
    virtual bool enabled() const = 0;

    // vIndex: 6
    virtual bool set_enabled(bool) = 0;

    // vIndex: 7
    virtual ::webrtc::MediaStreamTrackInterface::TrackState state() const = 0;

    // vIndex: 2
    virtual ~MediaStreamTrackInterface() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const* const& kAudioKind();

    MCAPI static char const* const& kVideoKind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
