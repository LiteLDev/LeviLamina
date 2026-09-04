#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaSourceInterface.h"
#include "mc/external/webrtc/VideoSinkInterface.h"
#include "mc/external/webrtc/VideoSourceInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RecordableEncodedFrame; }
namespace webrtc { class VideoFrame; }
namespace webrtc { struct VideoTrackSourceConstraints; }
// clang-format on

namespace webrtc {

class VideoTrackSourceInterface : public ::webrtc::MediaSourceInterface,
                                  public ::webrtc::VideoSourceInterface<::webrtc::VideoFrame> {
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
    virtual bool is_screencast() const = 0;

    virtual ::std::optional<bool> needs_denoising() const = 0;

    virtual bool GetStats(::webrtc::VideoTrackSourceInterface::Stats* a1) = 0;

    virtual bool SupportsEncodedOutput() const = 0;

    virtual void GenerateKeyFrame() = 0;

    virtual void AddEncodedSink(::webrtc::VideoSinkInterface<::webrtc::RecordableEncodedFrame>* a1) = 0;

    virtual void RemoveEncodedSink(::webrtc::VideoSinkInterface<::webrtc::RecordableEncodedFrame>* a1) = 0;

    virtual void ProcessConstraints(::webrtc::VideoTrackSourceConstraints const& a1);

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
    MCNAPI void $ProcessConstraints(::webrtc::VideoTrackSourceConstraints const& a1);


    // NOLINTEND
};

} // namespace webrtc
