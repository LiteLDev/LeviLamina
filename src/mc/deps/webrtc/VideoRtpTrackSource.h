#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/VideoTrackSource.h"
#include "mc/deps/webrtc/detail/VideoSinkInterface.h"
#include "mc/deps/webrtc/detail/VideoSourceInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RecordableEncodedFrame; }
namespace webrtc { class VideoFrame; }
namespace webrtc { class VideoTrackSource; }
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
        // prevent constructor by default
        Callback& operator=(Callback const&);
        Callback(Callback const&);
        Callback();
    };

public:
    // prevent constructor by default
    VideoRtpTrackSource& operator=(VideoRtpTrackSource const&);
    VideoRtpTrackSource(VideoRtpTrackSource const&);
    VideoRtpTrackSource();

public:
    // NOLINTBEGIN
    // symbol:
    // ?AddEncodedSink@VideoRtpTrackSource@webrtc@@UEAAXPEAV?$VideoSinkInterface@VRecordableEncodedFrame@webrtc@@@rtc@@@Z
    MCVAPI void AddEncodedSink(class rtc::VideoSinkInterface<class webrtc::RecordableEncodedFrame>*);

    // symbol: ?GenerateKeyFrame@VideoRtpTrackSource@webrtc@@UEAAXXZ
    MCVAPI void GenerateKeyFrame();

    // symbol:
    // ?RemoveEncodedSink@VideoRtpTrackSource@webrtc@@UEAAXPEAV?$VideoSinkInterface@VRecordableEncodedFrame@webrtc@@@rtc@@@Z
    MCVAPI void RemoveEncodedSink(class rtc::VideoSinkInterface<class webrtc::RecordableEncodedFrame>*);

    // symbol: ?SupportsEncodedOutput@VideoRtpTrackSource@webrtc@@UEBA_NXZ
    MCVAPI bool SupportsEncodedOutput() const;

    // symbol: ?source@VideoRtpTrackSource@webrtc@@UEAAPEAV?$VideoSourceInterface@VVideoFrame@webrtc@@@rtc@@XZ
    MCVAPI class rtc::VideoSourceInterface<class webrtc::VideoFrame>* source();

    // symbol: ??1VideoRtpTrackSource@webrtc@@UEAA@XZ
    MCVAPI ~VideoRtpTrackSource();

    // symbol: ?BroadcastRecordableEncodedFrame@VideoRtpTrackSource@webrtc@@QEBAXAEBVRecordableEncodedFrame@2@@Z
    MCAPI void BroadcastRecordableEncodedFrame(class webrtc::RecordableEncodedFrame const&) const;

    // symbol: ?ClearCallback@VideoRtpTrackSource@webrtc@@QEAAXXZ
    MCAPI void ClearCallback();

    // symbol: ??0VideoRtpTrackSource@webrtc@@QEAA@PEAVCallback@01@@Z
    MCAPI explicit VideoRtpTrackSource(class webrtc::VideoRtpTrackSource::Callback*);

    // symbol: ?sink@VideoRtpTrackSource@webrtc@@QEAAPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@rtc@@XZ
    MCAPI class rtc::VideoSinkInterface<class webrtc::VideoFrame>* sink();

    // NOLINTEND
};

}; // namespace webrtc
