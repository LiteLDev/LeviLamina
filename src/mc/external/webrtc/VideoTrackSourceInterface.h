#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/VideoSinkInterface.h"
#include "mc/external/rtc/VideoSourceInterface.h"
#include "mc/external/webrtc/MediaSourceInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RecordableEncodedFrame; }
namespace webrtc { class VideoFrame; }
namespace webrtc { struct VideoTrackSourceConstraints; }
// clang-format on

namespace webrtc {

class VideoTrackSourceInterface : public ::webrtc::MediaSourceInterface,
                                  public ::rtc::VideoSourceInterface<::webrtc::VideoFrame> {
public:
    // VideoTrackSourceInterface inner types declare
    // clang-format off
    struct Stats;
    // clang-format on

    // VideoTrackSourceInterface inner types define
    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk8c37b0;
        ::ll::UntypedStorage<4, 4> mUnk104e2b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual bool is_screencast() const = 0;

    // vIndex: 6
    virtual ::std::optional<bool> needs_denoising() const = 0;

    // vIndex: 7
    virtual bool GetStats(::webrtc::VideoTrackSourceInterface::Stats*) = 0;

    // vIndex: 8
    virtual bool SupportsEncodedOutput() const = 0;

    // vIndex: 9
    virtual void GenerateKeyFrame() = 0;

    // vIndex: 10
    virtual void AddEncodedSink(::rtc::VideoSinkInterface<::webrtc::RecordableEncodedFrame>*) = 0;

    // vIndex: 11
    virtual void RemoveEncodedSink(::rtc::VideoSinkInterface<::webrtc::RecordableEncodedFrame>*) = 0;

    // vIndex: 12
    virtual void ProcessConstraints(::webrtc::VideoTrackSourceConstraints const& constraints);

    // vIndex: 0
    virtual ~VideoTrackSourceInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $ProcessConstraints(::webrtc::VideoTrackSourceConstraints const& constraints);
    // NOLINTEND
};

} // namespace webrtc
