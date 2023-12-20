#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/VideoSinkInterface.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct VideoSinkWants; }
namespace webrtc { class VideoFrame; }
namespace webrtc { class VideoFrameBuffer; }
// clang-format on

namespace rtc {

class VideoBroadcaster {
public:
    // prevent constructor by default
    VideoBroadcaster& operator=(VideoBroadcaster const&);
    VideoBroadcaster(VideoBroadcaster const&);

public:
    // NOLINTBEGIN
    // symbol:
    // ?AddOrUpdateSink@VideoBroadcaster@rtc@@UEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@2@AEBUVideoSinkWants@2@@Z
    MCVAPI void
    AddOrUpdateSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*, struct rtc::VideoSinkWants const&);

    // symbol: ?OnDiscardedFrame@VideoBroadcaster@rtc@@UEAAXXZ
    MCVAPI void OnDiscardedFrame();

    // symbol: ?OnFrame@VideoBroadcaster@rtc@@UEAAXAEBVVideoFrame@webrtc@@@Z
    MCVAPI void OnFrame(class webrtc::VideoFrame const&);

    // symbol: ?RemoveSink@VideoBroadcaster@rtc@@UEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@2@@Z
    MCVAPI void RemoveSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*);

    // symbol: ??1VideoBroadcaster@rtc@@UEAA@XZ
    MCVAPI ~VideoBroadcaster();

    // symbol: ??0VideoBroadcaster@rtc@@QEAA@XZ
    MCAPI VideoBroadcaster();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?GetBlackFrameBuffer@VideoBroadcaster@rtc@@IEAAAEBV?$scoped_refptr@VVideoFrameBuffer@webrtc@@@2@HH@Z
    MCAPI class rtc::scoped_refptr<class webrtc::VideoFrameBuffer> const& GetBlackFrameBuffer(int, int);

    // symbol: ?UpdateWants@VideoBroadcaster@rtc@@IEAAXXZ
    MCAPI void UpdateWants();

    // NOLINTEND
};

}; // namespace rtc
