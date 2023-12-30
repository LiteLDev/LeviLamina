#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/MediaSourceInterface.h"
#include "mc/deps/webrtc/VideoTrackSourceInterface.h"
#include "mc/deps/webrtc/rtc/VideoSinkInterface.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct VideoSinkWants; }
namespace webrtc { class RecordableEncodedFrame; }
namespace webrtc { class VideoFrame; }
// clang-format on

namespace webrtc {

class VideoTrackSource {
public:
    // prevent constructor by default
    VideoTrackSource& operator=(VideoTrackSource const&);
    VideoTrackSource(VideoTrackSource const&);
    VideoTrackSource();

public:
    // NOLINTBEGIN
    // symbol:
    // ?AddEncodedSink@VideoTrackSource@webrtc@@UEAAXPEAV?$VideoSinkInterface@VRecordableEncodedFrame@webrtc@@@rtc@@@Z
    MCVAPI void AddEncodedSink(class rtc::VideoSinkInterface<class webrtc::RecordableEncodedFrame>*);

    // symbol:
    // ?AddOrUpdateSink@VideoTrackSource@webrtc@@UEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@rtc@@AEBUVideoSinkWants@4@@Z
    MCVAPI void
    AddOrUpdateSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*, struct rtc::VideoSinkWants const&);

    // symbol: ?GenerateKeyFrame@VideoTrackSource@webrtc@@UEAAXXZ
    MCVAPI void GenerateKeyFrame();

    // symbol: ?GetStats@VideoTrackSource@webrtc@@UEAA_NPEAUStats@VideoTrackSourceInterface@2@@Z
    MCVAPI bool GetStats(struct webrtc::VideoTrackSourceInterface::Stats*);

    // symbol:
    // ?RemoveEncodedSink@VideoTrackSource@webrtc@@UEAAXPEAV?$VideoSinkInterface@VRecordableEncodedFrame@webrtc@@@rtc@@@Z
    MCVAPI void RemoveEncodedSink(class rtc::VideoSinkInterface<class webrtc::RecordableEncodedFrame>*);

    // symbol: ?RemoveSink@VideoTrackSource@webrtc@@UEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@rtc@@@Z
    MCVAPI void RemoveSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*);

    // symbol: ?SupportsEncodedOutput@VideoTrackSource@webrtc@@UEBA_NXZ
    MCVAPI bool SupportsEncodedOutput() const;

    // symbol: ?is_screencast@VideoTrackSource@webrtc@@UEBA_NXZ
    MCVAPI bool is_screencast() const;

    // symbol: ?needs_denoising@VideoTrackSource@webrtc@@UEBA?AV?$optional@_N@std@@XZ
    MCVAPI std::optional<bool> needs_denoising() const;

    // symbol: ?remote@VideoTrackSource@webrtc@@UEBA_NXZ
    MCVAPI bool remote() const;

    // symbol: ?state@VideoTrackSource@webrtc@@UEBA?AW4SourceState@MediaSourceInterface@2@XZ
    MCVAPI ::webrtc::MediaSourceInterface::SourceState state() const;

    // symbol: ??1VideoTrackSource@webrtc@@UEAA@XZ
    MCVAPI ~VideoTrackSource();

    // symbol: ?SetState@VideoTrackSource@webrtc@@QEAAXW4SourceState@MediaSourceInterface@2@@Z
    MCAPI void SetState(::webrtc::MediaSourceInterface::SourceState);

    // symbol: ??0VideoTrackSource@webrtc@@QEAA@_N@Z
    MCAPI explicit VideoTrackSource(bool);

    // NOLINTEND
};

}; // namespace webrtc
