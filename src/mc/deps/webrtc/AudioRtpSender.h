#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpSenderBase.h"
#include "mc/deps/webrtc/detail/MediaType.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
namespace webrtc { class DtmfSenderInterface; }
namespace webrtc { class LegacyStatsCollectorInterface; }
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

class AudioRtpSender {
public:
    // prevent constructor by default
    AudioRtpSender& operator=(AudioRtpSender const&);
    AudioRtpSender(AudioRtpSender const&);
    AudioRtpSender();

public:
    // NOLINTBEGIN
    // symbol: ?AddTrackToStats@AudioRtpSender@webrtc@@MEAAXXZ
    MCVAPI void AddTrackToStats();

    // symbol: ?AttachTrack@AudioRtpSender@webrtc@@MEAAXXZ
    MCVAPI void AttachTrack();

    // symbol: ?CanInsertDtmf@AudioRtpSender@webrtc@@UEAA_NXZ
    MCVAPI bool CanInsertDtmf();

    // symbol: ?ClearSend@AudioRtpSender@webrtc@@MEAAXXZ
    MCVAPI void ClearSend();

    // symbol: ?DetachTrack@AudioRtpSender@webrtc@@MEAAXXZ
    MCVAPI void DetachTrack();

    // symbol:
    // ?GenerateKeyFrame@AudioRtpSender@webrtc@@UEAA?AVRTCError@2@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI class webrtc::RTCError GenerateKeyFrame(std::vector<std::string> const&);

    // symbol: ?GetDtmfSender@AudioRtpSender@webrtc@@UEBA?AV?$scoped_refptr@VDtmfSenderInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::DtmfSenderInterface> GetDtmfSender() const;

    // symbol: ?InsertDtmf@AudioRtpSender@webrtc@@UEAA_NHH@Z
    MCVAPI bool InsertDtmf(int, int);

    // symbol: ?OnChanged@AudioRtpSender@webrtc@@UEAAXXZ
    MCVAPI void OnChanged();

    // symbol: ?RemoveTrackFromStats@AudioRtpSender@webrtc@@MEAAXXZ
    MCVAPI void RemoveTrackFromStats();

    // symbol: ?SetSend@AudioRtpSender@webrtc@@MEAAXXZ
    MCVAPI void SetSend();

    // symbol: ?media_type@AudioRtpSender@webrtc@@UEBA?AW4MediaType@cricket@@XZ
    MCVAPI ::cricket::MediaType media_type() const;

    // symbol: ?track_kind@AudioRtpSender@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string track_kind() const;

    // symbol: ??1AudioRtpSender@webrtc@@UEAA@XZ
    MCVAPI ~AudioRtpSender();

    // symbol:
    // ?Create@AudioRtpSender@webrtc@@SA?AV?$scoped_refptr@VAudioRtpSender@webrtc@@@rtc@@PEAVThread@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLegacyStatsCollectorInterface@2@PEAVSetStreamsObserver@RtpSenderBase@2@@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::AudioRtpSender>
    Create(class rtc::Thread*, std::string const&, class webrtc::LegacyStatsCollectorInterface*, class webrtc::RtpSenderBase::SetStreamsObserver*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0AudioRtpSender@webrtc@@IEAA@PEAVThread@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLegacyStatsCollectorInterface@1@PEAVSetStreamsObserver@RtpSenderBase@1@@Z
    MCAPI
    AudioRtpSender(class rtc::Thread*, std::string const&, class webrtc::LegacyStatsCollectorInterface*, class webrtc::RtpSenderBase::SetStreamsObserver*);

    // NOLINTEND
};

}; // namespace webrtc
