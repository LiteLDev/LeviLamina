#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
// clang-format on

namespace webrtc {

class StreamCollectionInterface : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual uint64 count() = 0;

    // vIndex: 4
    virtual ::webrtc::MediaStreamInterface* at(uint64) = 0;

    // vIndex: 5
    virtual ::webrtc::MediaStreamInterface* find(::std::string const&) = 0;

    // vIndex: 6
    virtual ::webrtc::MediaStreamTrackInterface* FindAudioTrack(::std::string const&) = 0;

    // vIndex: 7
    virtual ::webrtc::MediaStreamTrackInterface* FindVideoTrack(::std::string const&) = 0;

    // vIndex: 2
    virtual ~StreamCollectionInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
