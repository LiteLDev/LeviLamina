#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/VideoSinkInterface.h"
#include "mc/external/rtc/VideoSourceInterface.h"
#include "mc/external/webrtc/MediaSourceInterface.h"
#include "mc/external/webrtc/Notifier.h"
#include "mc/external/webrtc/VideoTrackSourceInterface.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct VideoSinkWants; }
namespace webrtc { class RecordableEncodedFrame; }
namespace webrtc { class VideoFrame; }
// clang-format on

namespace webrtc {

class VideoTrackSource : public ::webrtc::Notifier<::webrtc::VideoTrackSourceInterface> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc0dc69;
    ::ll::UntypedStorage<1, 1> mUnka51a10;
    ::ll::UntypedStorage<4, 4> mUnk270c0f;
    ::ll::UntypedStorage<1, 1> mUnk3fb38a;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoTrackSource& operator=(VideoTrackSource const&);
    VideoTrackSource(VideoTrackSource const&);
    VideoTrackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::MediaSourceInterface::SourceState state() const /*override*/;

    virtual bool remote() const /*override*/;

    virtual bool is_screencast() const /*override*/;

    virtual ::std::optional<bool> needs_denoising() const /*override*/;

    virtual bool GetStats(::webrtc::VideoTrackSourceInterface::Stats* stats) /*override*/;

    virtual void AddOrUpdateSink(
        ::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink,
        ::rtc::VideoSinkWants const&                     wants
    ) /*override*/;

    virtual void RemoveSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink) /*override*/;

    virtual bool SupportsEncodedOutput() const /*override*/;

    virtual void GenerateKeyFrame() /*override*/;

    virtual void AddEncodedSink(::rtc::VideoSinkInterface<::webrtc::RecordableEncodedFrame>* sink) /*override*/;

    virtual void RemoveEncodedSink(::rtc::VideoSinkInterface<::webrtc::RecordableEncodedFrame>* sink) /*override*/;

    virtual ::rtc::VideoSourceInterface<::webrtc::VideoFrame>* source() = 0;

    virtual ~VideoTrackSource() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void SetState(::webrtc::MediaSourceInterface::SourceState new_state);

    MCNAPI explicit VideoTrackSource(bool remote);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool remote);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::MediaSourceInterface::SourceState $state() const;

    MCNAPI bool $remote() const;

    MCNAPI bool $is_screencast() const;

    MCNAPI ::std::optional<bool> $needs_denoising() const;

    MCNAPI bool $GetStats(::webrtc::VideoTrackSourceInterface::Stats* stats);

    MCNAPI void
    $AddOrUpdateSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink, ::rtc::VideoSinkWants const& wants);

    MCNAPI void $RemoveSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink);

    MCNAPI bool $SupportsEncodedOutput() const;

    MCNAPI void $GenerateKeyFrame();

    MCNAPI void $AddEncodedSink(::rtc::VideoSinkInterface<::webrtc::RecordableEncodedFrame>* sink);

    MCNAPI void $RemoveEncodedSink(::rtc::VideoSinkInterface<::webrtc::RecordableEncodedFrame>* sink);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForRefCountInterface();

    MCNAPI static void** $vftableForNotifierInterface();
    // NOLINTEND
};

} // namespace webrtc
