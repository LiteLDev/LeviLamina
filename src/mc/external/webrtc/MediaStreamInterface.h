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

    virtual ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> FindAudioTrack(::std::string const& a1) = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> FindVideoTrack(::std::string const& a1) = 0;

    virtual bool AddTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> a1);

    virtual bool AddTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> a1);

    virtual bool RemoveTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> a1);

    virtual bool RemoveTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> a1);

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
    MCNAPI bool $AddTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> a1);

    MCNAPI bool $AddTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> a1);

    MCNAPI bool $RemoveTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> a1);

    MCNAPI bool $RemoveTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> a1);


    // NOLINTEND
};

} // namespace webrtc
