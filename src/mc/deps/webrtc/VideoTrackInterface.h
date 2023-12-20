#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/VideoSinkInterface.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct VideoSinkWants; }
namespace webrtc { class VideoFrame; }
// clang-format on

namespace webrtc {

class VideoTrackInterface {
public:
    // VideoTrackInterface inner types define
    enum class ContentHint {};

public:
    // prevent constructor by default
    VideoTrackInterface& operator=(VideoTrackInterface const&);
    VideoTrackInterface(VideoTrackInterface const&);
    VideoTrackInterface();

public:
    // NOLINTBEGIN
    // symbol:
    // ?AddOrUpdateSink@VideoTrackInterface@webrtc@@UEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@rtc@@AEBUVideoSinkWants@4@@Z
    MCVAPI void
    AddOrUpdateSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*, struct rtc::VideoSinkWants const&);

    // symbol: ?RemoveSink@VideoTrackInterface@webrtc@@UEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@rtc@@@Z
    MCVAPI void RemoveSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*);

    // symbol: ?content_hint@VideoTrackInterface@webrtc@@UEBA?AW4ContentHint@12@XZ
    MCVAPI ::webrtc::VideoTrackInterface::ContentHint content_hint() const;

    // symbol: ?set_content_hint@VideoTrackInterface@webrtc@@UEAAXW4ContentHint@12@@Z
    MCVAPI void set_content_hint(::webrtc::VideoTrackInterface::ContentHint);

    // symbol: ??1VideoTrackInterface@webrtc@@MEAA@XZ
    MCVAPI ~VideoTrackInterface();

    // NOLINTEND
};

}; // namespace webrtc
