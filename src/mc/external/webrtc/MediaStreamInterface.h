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
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string id() const = 0;

    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>> GetAudioTracks() = 0;

    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>> GetVideoTracks() = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> FindAudioTrack(::std::string const&) = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> FindVideoTrack(::std::string const&) = 0;

    virtual bool AddTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> track);

    virtual bool AddTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> track);

    virtual bool AddTrack(::webrtc::AudioTrackInterface* track);

    virtual bool AddTrack(::webrtc::VideoTrackInterface* track);

    virtual bool RemoveTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> track);

    virtual bool RemoveTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> track);

    virtual bool RemoveTrack(::webrtc::AudioTrackInterface* track);

    virtual bool RemoveTrack(::webrtc::VideoTrackInterface* track);

    virtual ~MediaStreamInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $AddTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> track);

    MCNAPI bool $AddTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> track);

    MCNAPI bool $AddTrack(::webrtc::AudioTrackInterface* track);

    MCNAPI bool $AddTrack(::webrtc::VideoTrackInterface* track);

    MCNAPI bool $RemoveTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> track);

    MCNAPI bool $RemoveTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> track);

    MCNAPI bool $RemoveTrack(::webrtc::AudioTrackInterface* track);

    MCNAPI bool $RemoveTrack(::webrtc::VideoTrackInterface* track);


    // NOLINTEND
};

} // namespace webrtc
