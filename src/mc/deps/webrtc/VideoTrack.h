#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/MediaStreamTrackInterface.h"
#include "mc/deps/webrtc/VideoTrackInterface.h"
#include "mc/deps/webrtc/VideoTrackSourceProxyWithInternal.h"
#include "mc/deps/webrtc/detail/VideoSinkInterface.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
namespace rtc { struct VideoSinkWants; }
namespace webrtc { class VideoFrame; }
namespace webrtc { class VideoTrackSourceInterface; }
// clang-format on

namespace webrtc {

class VideoTrack {
public:
    // prevent constructor by default
    VideoTrack& operator=(VideoTrack const&);
    VideoTrack(VideoTrack const&);
    VideoTrack();

public:
    // NOLINTBEGIN
    // symbol:
    // ?AddOrUpdateSink@VideoTrack@webrtc@@UEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@rtc@@AEBUVideoSinkWants@4@@Z
    MCVAPI void
    AddOrUpdateSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*, struct rtc::VideoSinkWants const&);

    // symbol: ?GetSource@VideoTrack@webrtc@@UEBAPEAVVideoTrackSourceInterface@2@XZ
    MCVAPI class webrtc::VideoTrackSourceInterface* GetSource() const;

    // symbol: ?OnChanged@VideoTrack@webrtc@@EEAAXXZ
    MCVAPI void OnChanged();

    // symbol: ?RemoveSink@VideoTrack@webrtc@@UEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@rtc@@@Z
    MCVAPI void RemoveSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*);

    // symbol: ?RequestRefreshFrame@VideoTrack@webrtc@@UEAAXXZ
    MCVAPI void RequestRefreshFrame();

    // symbol: ?content_hint@VideoTrack@webrtc@@UEBA?AW4ContentHint@VideoTrackInterface@2@XZ
    MCVAPI ::webrtc::VideoTrackInterface::ContentHint content_hint() const;

    // symbol: ?enabled@VideoTrack@webrtc@@UEBA_NXZ
    MCVAPI bool enabled() const;

    // symbol: ?kind@VideoTrack@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string kind() const;

    // symbol: ?set_content_hint@VideoTrack@webrtc@@UEAAXW4ContentHint@VideoTrackInterface@2@@Z
    MCVAPI void set_content_hint(::webrtc::VideoTrackInterface::ContentHint);

    // symbol: ?set_enabled@VideoTrack@webrtc@@UEAA_N_N@Z
    MCVAPI bool set_enabled(bool);

    // symbol: ?state@VideoTrack@webrtc@@UEBA?AW4TrackState@MediaStreamTrackInterface@2@XZ
    MCVAPI ::webrtc::MediaStreamTrackInterface::TrackState state() const;

    // symbol: ??1VideoTrack@webrtc@@MEAA@XZ
    MCVAPI ~VideoTrack();

    // symbol:
    // ?Create@VideoTrack@webrtc@@SA?AV?$scoped_refptr@VVideoTrack@webrtc@@@rtc@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$scoped_refptr@VVideoTrackSourceInterface@webrtc@@@4@PEAVThread@4@@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::VideoTrack>
    Create(std::string_view, class rtc::scoped_refptr<class webrtc::VideoTrackSourceInterface>, class rtc::Thread*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0VideoTrack@webrtc@@IEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$scoped_refptr@V?$VideoTrackSourceProxyWithInternal@VVideoTrackSourceInterface@webrtc@@@webrtc@@@rtc@@PEAVThread@5@@Z
    MCAPI
    VideoTrack(std::string_view, class rtc::scoped_refptr<class webrtc::VideoTrackSourceProxyWithInternal<class webrtc::VideoTrackSourceInterface>>, class rtc::Thread*);

    // NOLINTEND
};

}; // namespace webrtc
