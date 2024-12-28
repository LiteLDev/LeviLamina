#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/NotifierInterface.h"
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class VideoTrackInterface; }
// clang-format on

namespace webrtc {

class MediaStreamInterface : public ::webrtc::RefCountInterface, public ::webrtc::NotifierInterface {
public:
    // prevent constructor by default
    MediaStreamInterface& operator=(MediaStreamInterface const&);
    MediaStreamInterface(MediaStreamInterface const&);
    MediaStreamInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::std::string id() const = 0;

    // vIndex: 4
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>> GetAudioTracks() = 0;

    // vIndex: 5
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>> GetVideoTracks() = 0;

    // vIndex: 6
    virtual ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> FindAudioTrack(::std::string const&) = 0;

    // vIndex: 7
    virtual ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> FindVideoTrack(::std::string const&) = 0;

    // vIndex: 11
    virtual bool AddTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>);

    // vIndex: 10
    virtual bool AddTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>);

    // vIndex: 9
    virtual bool AddTrack(::webrtc::AudioTrackInterface*);

    // vIndex: 8
    virtual bool AddTrack(::webrtc::VideoTrackInterface*);

    // vIndex: 15
    virtual bool RemoveTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>);

    // vIndex: 14
    virtual bool RemoveTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>);

    // vIndex: 13
    virtual bool RemoveTrack(::webrtc::AudioTrackInterface*);

    // vIndex: 12
    virtual bool RemoveTrack(::webrtc::VideoTrackInterface*);

    // vIndex: 2
    virtual ~MediaStreamInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $AddTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>);

    MCAPI bool $AddTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>);

    MCAPI bool $AddTrack(::webrtc::AudioTrackInterface*);

    MCAPI bool $AddTrack(::webrtc::VideoTrackInterface*);

    MCAPI bool $RemoveTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>);

    MCAPI bool $RemoveTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>);

    MCAPI bool $RemoveTrack(::webrtc::AudioTrackInterface*);

    MCAPI bool $RemoveTrack(::webrtc::VideoTrackInterface*);
    // NOLINTEND
};

} // namespace webrtc
