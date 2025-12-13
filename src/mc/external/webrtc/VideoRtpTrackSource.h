#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/VideoSinkInterface.h"
#include "mc/external/rtc/VideoSourceInterface.h"
#include "mc/external/webrtc/VideoTrackSource.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RecordableEncodedFrame; }
namespace webrtc { class VideoFrame; }
// clang-format on

namespace webrtc {

class VideoRtpTrackSource : public ::webrtc::VideoTrackSource {
public:
    // VideoRtpTrackSource inner types declare
    // clang-format off
    class Callback;
    // clang-format on

    // VideoRtpTrackSource inner types define
    class Callback {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Callback() = default;

        virtual void OnGenerateKeyFrame() = 0;

        virtual void OnEncodedSinkEnabled(bool) = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnke99678;
    ::ll::UntypedStorage<8, 200> mUnk6819ed;
    ::ll::UntypedStorage<8, 40>  mUnkdd4fc5;
    ::ll::UntypedStorage<8, 24>  mUnkac4663;
    ::ll::UntypedStorage<8, 8>   mUnk544369;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoRtpTrackSource& operator=(VideoRtpTrackSource const&);
    VideoRtpTrackSource(VideoRtpTrackSource const&);
    VideoRtpTrackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::rtc::VideoSourceInterface<::webrtc::VideoFrame>* source() /*override*/;

    virtual bool SupportsEncodedOutput() const /*override*/;

    virtual void GenerateKeyFrame() /*override*/;

    virtual void AddEncodedSink(::rtc::VideoSinkInterface<::webrtc::RecordableEncodedFrame>* sink) /*override*/;

    virtual void RemoveEncodedSink(::rtc::VideoSinkInterface<::webrtc::RecordableEncodedFrame>* sink) /*override*/;

    virtual ~VideoRtpTrackSource() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void BroadcastRecordableEncodedFrame(::webrtc::RecordableEncodedFrame const& frame) const;

    MCNAPI void ClearCallback();

    MCNAPI explicit VideoRtpTrackSource(::webrtc::VideoRtpTrackSource::Callback* callback);

    MCNAPI ::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::VideoRtpTrackSource::Callback* callback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::rtc::VideoSourceInterface<::webrtc::VideoFrame>* $source();

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
