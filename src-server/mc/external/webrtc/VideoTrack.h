#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/VideoSinkInterface.h"
#include "mc/external/rtc/VideoSourceBaseGuarded.h"
#include "mc/external/webrtc/MediaStreamTrack.h"
#include "mc/external/webrtc/MediaStreamTrackInterface.h"
#include "mc/external/webrtc/ObserverInterface.h"
#include "mc/external/webrtc/VideoTrackInterface.h"
#include "mc/external/webrtc/VideoTrackSourceProxyWithInternal.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
namespace rtc { struct VideoSinkWants; }
namespace webrtc { class VideoFrame; }
namespace webrtc { class VideoTrackSourceInterface; }
// clang-format on

namespace webrtc {

class VideoTrack : public ::webrtc::MediaStreamTrack<::webrtc::VideoTrackInterface>, public ::rtc::VideoSourceBaseGuarded, public ::webrtc::ObserverInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk983a4d;
    ::ll::UntypedStorage<8, 8> mUnk828522;
    ::ll::UntypedStorage<8, 8> mUnk348dcd;
    ::ll::UntypedStorage<4, 4> mUnkaaa9c5;
    ::ll::UntypedStorage<1, 1> mUnka54207;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoTrack& operator=(VideoTrack const&);
    VideoTrack(VideoTrack const&);
    VideoTrack();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void AddOrUpdateSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink, ::rtc::VideoSinkWants const& wants) /*override*/;

    // vIndex: 2
    virtual void RemoveSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink) /*override*/;

    // vIndex: 3
    virtual void RequestRefreshFrame() /*override*/;

    // vIndex: 8
    virtual ::webrtc::VideoTrackSourceInterface* GetSource() const /*override*/;

    // vIndex: 9
    virtual ::webrtc::VideoTrackInterface::ContentHint content_hint() const /*override*/;

    // vIndex: 10
    virtual void set_content_hint(::webrtc::VideoTrackInterface::ContentHint hint) /*override*/;

    // vIndex: 6
    virtual bool set_enabled(bool enable) /*override*/;

    // vIndex: 5
    virtual bool enabled() const /*override*/;

    // vIndex: 7
    virtual ::webrtc::MediaStreamTrackInterface::TrackState state() const /*override*/;

    // vIndex: 3
    virtual ::std::string kind() const /*override*/;

    // vIndex: 1
    virtual ~VideoTrack() /*override*/;

    // vIndex: 0
    virtual void OnChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoTrack(::std::string_view label, ::webrtc::scoped_refptr<::webrtc::VideoTrackSourceProxyWithInternal<::webrtc::VideoTrackSourceInterface>> source, ::rtc::Thread* worker_thread);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::VideoTrack> Create(::std::string_view id, ::webrtc::scoped_refptr<::webrtc::VideoTrackSourceInterface> source, ::rtc::Thread* worker_thread);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view label, ::webrtc::scoped_refptr<::webrtc::VideoTrackSourceProxyWithInternal<::webrtc::VideoTrackSourceInterface>> source, ::rtc::Thread* worker_thread);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $AddOrUpdateSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink, ::rtc::VideoSinkWants const& wants);

    MCNAPI void $RemoveSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink);

    MCNAPI void $RequestRefreshFrame();

    MCNAPI ::webrtc::VideoTrackSourceInterface* $GetSource() const;

    MCNAPI ::webrtc::VideoTrackInterface::ContentHint $content_hint() const;

    MCNAPI void $set_content_hint(::webrtc::VideoTrackInterface::ContentHint hint);

    MCNAPI bool $set_enabled(bool enable);

    MCNAPI bool $enabled() const;

    MCNAPI ::webrtc::MediaStreamTrackInterface::TrackState $state() const;

    MCNAPI ::std::string $kind() const;

    MCNAPI void $OnChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForNotifierInterface();

    MCNAPI static void** $vftableForObserverInterface();

    MCNAPI static void** $vftableForVideoSourceBaseGuarded();

    MCNAPI static void** $vftableForRefCountInterface();

    MCNAPI static void** $vftableForMediaStreamTrack();
    // NOLINTEND

};

}
