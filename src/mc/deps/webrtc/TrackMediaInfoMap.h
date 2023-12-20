#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct VideoMediaInfo; }
namespace cricket { struct VideoReceiverInfo; }
namespace cricket { struct VideoSenderInfo; }
namespace cricket { struct VoiceMediaInfo; }
namespace cricket { struct VoiceReceiverInfo; }
namespace cricket { struct VoiceSenderInfo; }
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpSenderInternal; }
namespace webrtc { class VideoTrackInterface; }
// clang-format on

namespace webrtc {

class TrackMediaInfoMap {
public:
    // prevent constructor by default
    TrackMediaInfoMap& operator=(TrackMediaInfoMap const&);

public:
    // NOLINTBEGIN
    // symbol:
    // ?GetAttachmentIdByTrack@TrackMediaInfoMap@webrtc@@QEBA?AV?$optional@H@std@@PEBVMediaStreamTrackInterface@2@@Z
    MCAPI std::optional<int> GetAttachmentIdByTrack(class webrtc::MediaStreamTrackInterface const*) const;

    // symbol:
    // ?GetAudioTrack@TrackMediaInfoMap@webrtc@@QEBA?AV?$scoped_refptr@VAudioTrackInterface@webrtc@@@rtc@@AEBUVoiceReceiverInfo@cricket@@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::AudioTrackInterface>
    GetAudioTrack(struct cricket::VoiceReceiverInfo const&) const;

    // symbol:
    // ?GetAudioTrack@TrackMediaInfoMap@webrtc@@QEBA?AV?$scoped_refptr@VAudioTrackInterface@webrtc@@@rtc@@AEBUVoiceSenderInfo@cricket@@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::AudioTrackInterface>
    GetAudioTrack(struct cricket::VoiceSenderInfo const&) const;

    // symbol:
    // ?GetVideoReceiverInfo@TrackMediaInfoMap@webrtc@@QEBAPEBUVideoReceiverInfo@cricket@@AEBVVideoTrackInterface@2@@Z
    MCAPI struct cricket::VideoReceiverInfo const* GetVideoReceiverInfo(class webrtc::VideoTrackInterface const&) const;

    // symbol: ?GetVideoSenderInfoBySsrc@TrackMediaInfoMap@webrtc@@QEBAPEBUVideoSenderInfo@cricket@@I@Z
    MCAPI struct cricket::VideoSenderInfo const* GetVideoSenderInfoBySsrc(uint) const;

    // symbol:
    // ?GetVideoTrack@TrackMediaInfoMap@webrtc@@QEBA?AV?$scoped_refptr@VVideoTrackInterface@webrtc@@@rtc@@AEBUVideoReceiverInfo@cricket@@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::VideoTrackInterface>
    GetVideoTrack(struct cricket::VideoReceiverInfo const&) const;

    // symbol:
    // ?GetVideoTrack@TrackMediaInfoMap@webrtc@@QEBA?AV?$scoped_refptr@VVideoTrackInterface@webrtc@@@rtc@@AEBUVideoSenderInfo@cricket@@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::VideoTrackInterface>
    GetVideoTrack(struct cricket::VideoSenderInfo const&) const;

    // symbol:
    // ?GetVoiceReceiverInfo@TrackMediaInfoMap@webrtc@@QEBAPEBUVoiceReceiverInfo@cricket@@AEBVAudioTrackInterface@2@@Z
    MCAPI struct cricket::VoiceReceiverInfo const* GetVoiceReceiverInfo(class webrtc::AudioTrackInterface const&) const;

    // symbol: ?GetVoiceSenderInfoBySsrc@TrackMediaInfoMap@webrtc@@QEBAPEBUVoiceSenderInfo@cricket@@I@Z
    MCAPI struct cricket::VoiceSenderInfo const* GetVoiceSenderInfoBySsrc(uint) const;

    // symbol:
    // ?Initialize@TrackMediaInfoMap@webrtc@@QEAAXV?$optional@UVoiceMediaInfo@cricket@@@std@@V?$optional@UVideoMediaInfo@cricket@@@4@V?$ArrayView@V?$scoped_refptr@VRtpSenderInternal@webrtc@@@rtc@@$0?BCGH@@rtc@@V?$ArrayView@V?$scoped_refptr@VRtpReceiverInternal@webrtc@@@rtc@@$0?BCGH@@7@@Z
    MCAPI void
        Initialize(std::optional<struct cricket::VoiceMediaInfo>, std::optional<struct cricket::VideoMediaInfo>, class rtc::ArrayView<class rtc::scoped_refptr<class webrtc::RtpSenderInternal>, -4711>, class rtc::ArrayView<class rtc::scoped_refptr<class webrtc::RtpReceiverInternal>, -4711>);

    // symbol: ??0TrackMediaInfoMap@webrtc@@QEAA@XZ
    MCAPI TrackMediaInfoMap();

    // symbol: ??0TrackMediaInfoMap@webrtc@@QEAA@$$QEAV01@@Z
    MCAPI TrackMediaInfoMap(class webrtc::TrackMediaInfoMap&&);

    // symbol: ??0TrackMediaInfoMap@webrtc@@QEAA@AEBV01@@Z
    MCAPI TrackMediaInfoMap(class webrtc::TrackMediaInfoMap const&);

    // symbol: ??1TrackMediaInfoMap@webrtc@@QEAA@XZ
    MCAPI ~TrackMediaInfoMap();

    // NOLINTEND
};

}; // namespace webrtc
