#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpSenderBase.h"
#include "mc/deps/webrtc/cricket/MediaType.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
namespace webrtc { class DtmfSenderInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpSenderBase; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace webrtc {

class VideoRtpSender : public ::webrtc::RtpSenderBase {
public:
    // prevent constructor by default
    VideoRtpSender& operator=(VideoRtpSender const&);
    VideoRtpSender(VideoRtpSender const&);
    VideoRtpSender();

public:
    // NOLINTBEGIN
    // symbol: ?AttachTrack@VideoRtpSender@webrtc@@MEAAXXZ
    MCVAPI void AttachTrack();

    // symbol: ?CheckSVCParameters@VideoRtpSender@webrtc@@UEAA?AVRTCError@2@AEBURtpParameters@2@@Z
    MCVAPI class webrtc::RTCError CheckSVCParameters(struct webrtc::RtpParameters const&);

    // symbol: ?ClearSend@VideoRtpSender@webrtc@@MEAAXXZ
    MCVAPI void ClearSend();

    // symbol:
    // ?GenerateKeyFrame@VideoRtpSender@webrtc@@UEAA?AVRTCError@2@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI class webrtc::RTCError GenerateKeyFrame(std::vector<std::string> const&);

    // symbol: ?GetDtmfSender@VideoRtpSender@webrtc@@UEBA?AV?$scoped_refptr@VDtmfSenderInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::DtmfSenderInterface> GetDtmfSender() const;

    // symbol: ?OnChanged@VideoRtpSender@webrtc@@UEAAXXZ
    MCVAPI void OnChanged();

    // symbol: ?SetSend@VideoRtpSender@webrtc@@MEAAXXZ
    MCVAPI void SetSend();

    // symbol: ?media_type@VideoRtpSender@webrtc@@UEBA?AW4MediaType@cricket@@XZ
    MCVAPI ::cricket::MediaType media_type() const;

    // symbol: ?track_kind@VideoRtpSender@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string track_kind() const;

    // symbol: ??1VideoRtpSender@webrtc@@UEAA@XZ
    MCVAPI ~VideoRtpSender();

    // symbol:
    // ?Create@VideoRtpSender@webrtc@@SA?AV?$scoped_refptr@VVideoRtpSender@webrtc@@@rtc@@PEAVThread@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVSetStreamsObserver@RtpSenderBase@2@@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::VideoRtpSender>
    Create(class rtc::Thread*, std::string const&, class webrtc::RtpSenderBase::SetStreamsObserver*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0VideoRtpSender@webrtc@@IEAA@PEAVThread@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVSetStreamsObserver@RtpSenderBase@1@@Z
    MCAPI VideoRtpSender(class rtc::Thread*, std::string const&, class webrtc::RtpSenderBase::SetStreamsObserver*);

    // NOLINTEND
};

}; // namespace webrtc
