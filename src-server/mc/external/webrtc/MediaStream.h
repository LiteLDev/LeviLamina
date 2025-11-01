#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaStreamInterface.h"
#include "mc/external/webrtc/Notifier.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class VideoTrackInterface; }
// clang-format on

namespace webrtc {

class MediaStream : public ::webrtc::Notifier<::webrtc::MediaStreamInterface> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk17151f;
    ::ll::UntypedStorage<8, 24> mUnk248527;
    ::ll::UntypedStorage<8, 24> mUnkc4c221;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaStream& operator=(MediaStream const&);
    MediaStream(MediaStream const&);
    MediaStream();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::std::string id() const /*override*/;

    // vIndex: 11
    virtual bool AddTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> track) /*override*/;

    // vIndex: 10
    virtual bool AddTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> track) /*override*/;

    // vIndex: 15
    virtual bool RemoveTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> track) /*override*/;

    // vIndex: 14
    virtual bool RemoveTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> track) /*override*/;

    // vIndex: 6
    virtual ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> FindAudioTrack(::std::string const& track_id) /*override*/;

    // vIndex: 7
    virtual ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> FindVideoTrack(::std::string const& track_id) /*override*/;

    // vIndex: 4
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>> GetAudioTracks() /*override*/;

    // vIndex: 5
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>> GetVideoTracks() /*override*/;

    // vIndex: 2
    virtual ~MediaStream() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MediaStream(::std::string const& id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::MediaStream> Create(::std::string const& id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $id() const;

    MCNAPI bool $AddTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> track);

    MCNAPI bool $AddTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> track);

    MCNAPI bool $RemoveTrack(::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> track);

    MCNAPI bool $RemoveTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> track);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface> $FindAudioTrack(::std::string const& track_id);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> $FindVideoTrack(::std::string const& track_id);

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>> $GetAudioTracks();

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>> $GetVideoTracks();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRefCountInterface();

    MCNAPI static void** $vftableForNotifierInterface();
    // NOLINTEND

};

}
