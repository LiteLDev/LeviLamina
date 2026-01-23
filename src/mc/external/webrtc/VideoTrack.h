#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/VideoSinkInterface.h"
#include "mc/external/rtc/VideoSourceBaseGuarded.h"
#include "mc/external/webrtc/MediaStreamTrack.h"
#include "mc/external/webrtc/MediaStreamTrackInterface.h"
#include "mc/external/webrtc/ObserverInterface.h"
#include "mc/external/webrtc/VideoTrackInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
namespace rtc { struct VideoSinkWants; }
namespace webrtc { class VideoFrame; }
namespace webrtc { class VideoTrackSourceInterface; }
// clang-format on

namespace webrtc {

class VideoTrack : public ::webrtc::MediaStreamTrack<::webrtc::VideoTrackInterface>,
                   public ::rtc::VideoSourceBaseGuarded,
                   public ::webrtc::ObserverInterface {
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
    virtual void AddOrUpdateSink(
        ::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink,
        ::rtc::VideoSinkWants const&                     wants
    ) /*override*/;

    virtual void RemoveSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink) /*override*/;

    virtual void RequestRefreshFrame() /*override*/;

    virtual ::webrtc::VideoTrackSourceInterface* GetSource() const /*override*/;

    virtual ::webrtc::VideoTrackInterface::ContentHint content_hint() const /*override*/;

    virtual void set_content_hint(::webrtc::VideoTrackInterface::ContentHint hint) /*override*/;

    virtual bool set_enabled(bool enable) /*override*/;

    virtual bool enabled() const /*override*/;

    virtual ::webrtc::MediaStreamTrackInterface::TrackState state() const /*override*/;

    virtual ::std::string kind() const /*override*/;

    virtual ~VideoTrack() /*override*/;

    virtual void OnChanged() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::VideoTrack> Create(
        ::std::string_view                                           id,
        ::webrtc::scoped_refptr<::webrtc::VideoTrackSourceInterface> source,
        ::rtc::Thread*                                               worker_thread
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $AddOrUpdateSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink, ::rtc::VideoSinkWants const& wants);

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

} // namespace webrtc
