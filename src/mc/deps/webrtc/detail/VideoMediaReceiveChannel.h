#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/MediaType.h"
#include "mc/deps/webrtc/detail/VideoMediaReceiveChannelInterface.h"
#include "mc/deps/webrtc/detail/VideoSinkInterface.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class VideoMediaReceiveChannelInterface; }
namespace cricket { struct StreamParams; }
namespace cricket { struct VideoMediaReceiveInfo; }
namespace cricket { struct VideoRecvParameters; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct SentPacket; }
namespace webrtc { class FrameDecryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class RecordableEncodedFrame; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class RtpSource; }
namespace webrtc { class VideoFrame; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace cricket {

class VideoMediaReceiveChannel : public ::cricket::VideoMediaReceiveChannelInterface {
public:
    // prevent constructor by default
    VideoMediaReceiveChannel& operator=(VideoMediaReceiveChannel const&);
    VideoMediaReceiveChannel(VideoMediaReceiveChannel const&);
    VideoMediaReceiveChannel();

public:
    // NOLINTBEGIN
    // symbol: ?AddRecvStream@VideoMediaReceiveChannel@cricket@@UEAA_NAEBUStreamParams@2@@Z
    MCVAPI bool AddRecvStream(struct cricket::StreamParams const&);

    // symbol: ?AsVideoReceiveChannel@VideoMediaReceiveChannel@cricket@@UEAAPEAVVideoMediaReceiveChannelInterface@2@XZ
    MCVAPI class cricket::VideoMediaReceiveChannelInterface* AsVideoReceiveChannel();

    // symbol: ?ClearRecordableEncodedFrameCallback@VideoMediaReceiveChannel@cricket@@UEAAXI@Z
    MCVAPI void ClearRecordableEncodedFrameCallback(uint);

    // symbol: ?ExtmapAllowMixed@VideoMediaReceiveChannel@cricket@@UEBA_NXZ
    MCVAPI bool ExtmapAllowMixed() const;

    // symbol: ?GetBaseMinimumPlayoutDelayMs@VideoMediaReceiveChannel@cricket@@UEBA?AV?$optional@H@std@@I@Z
    MCVAPI std::optional<int> GetBaseMinimumPlayoutDelayMs(uint) const;

    // symbol: ?GetDefaultRtpReceiveParameters@VideoMediaReceiveChannel@cricket@@UEBA?AURtpParameters@webrtc@@XZ
    MCVAPI struct webrtc::RtpParameters GetDefaultRtpReceiveParameters() const;

    // symbol: ?GetRtpReceiveParameters@VideoMediaReceiveChannel@cricket@@UEBA?AURtpParameters@webrtc@@I@Z
    MCVAPI struct webrtc::RtpParameters GetRtpReceiveParameters(uint) const;

    // symbol:
    // ?GetSources@VideoMediaReceiveChannel@cricket@@UEBA?AV?$vector@VRtpSource@webrtc@@V?$allocator@VRtpSource@webrtc@@@std@@@std@@I@Z
    MCVAPI std::vector<class webrtc::RtpSource> GetSources(uint) const;

    // symbol: ?GetStats@VideoMediaReceiveChannel@cricket@@UEAA_NPEAUVideoMediaReceiveInfo@2@@Z
    MCVAPI bool GetStats(struct cricket::VideoMediaReceiveInfo*);

    // symbol: ?GetUnsignaledSsrc@VideoMediaReceiveChannel@cricket@@UEBA?AV?$optional@I@std@@XZ
    MCVAPI std::optional<uint> GetUnsignaledSsrc() const;

    // symbol: ?OnDemuxerCriteriaUpdateComplete@VideoMediaReceiveChannel@cricket@@UEAAXXZ
    MCVAPI void OnDemuxerCriteriaUpdateComplete();

    // symbol: ?OnDemuxerCriteriaUpdatePending@VideoMediaReceiveChannel@cricket@@UEAAXXZ
    MCVAPI void OnDemuxerCriteriaUpdatePending();

    // symbol:
    // ?OnNetworkRouteChanged@VideoMediaReceiveChannel@cricket@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBUNetworkRoute@rtc@@@Z
    MCVAPI void OnNetworkRouteChanged(std::string_view, struct rtc::NetworkRoute const&);

    // symbol: ?OnPacketReceived@VideoMediaReceiveChannel@cricket@@UEAAXAEBVRtpPacketReceived@webrtc@@@Z
    MCVAPI void OnPacketReceived(class webrtc::RtpPacketReceived const&);

    // symbol: ?OnPacketSent@VideoMediaReceiveChannel@cricket@@UEAAXAEBUSentPacket@rtc@@@Z
    MCVAPI void OnPacketSent(struct rtc::SentPacket const&);

    // symbol: ?OnReadyToSend@VideoMediaReceiveChannel@cricket@@UEAAX_N@Z
    MCVAPI void OnReadyToSend(bool);

    // symbol: ?RemoveRecvStream@VideoMediaReceiveChannel@cricket@@UEAA_NI@Z
    MCVAPI bool RemoveRecvStream(uint);

    // symbol: ?RequestRecvKeyFrame@VideoMediaReceiveChannel@cricket@@UEAAXI@Z
    MCVAPI void RequestRecvKeyFrame(uint);

    // symbol: ?ResetUnsignaledRecvStream@VideoMediaReceiveChannel@cricket@@UEAAXXZ
    MCVAPI void ResetUnsignaledRecvStream();

    // symbol: ?SetBaseMinimumPlayoutDelayMs@VideoMediaReceiveChannel@cricket@@UEAA_NIH@Z
    MCVAPI bool SetBaseMinimumPlayoutDelayMs(uint, int);

    // symbol:
    // ?SetDefaultSink@VideoMediaReceiveChannel@cricket@@UEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@rtc@@@Z
    MCVAPI void SetDefaultSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*);

    // symbol:
    // ?SetDepacketizerToDecoderFrameTransformer@VideoMediaReceiveChannel@cricket@@UEAAXIV?$scoped_refptr@VFrameTransformerInterface@webrtc@@@rtc@@@Z
    MCVAPI void
        SetDepacketizerToDecoderFrameTransformer(uint, class rtc::scoped_refptr<class webrtc::FrameTransformerInterface>);

    // symbol: ?SetExtmapAllowMixed@VideoMediaReceiveChannel@cricket@@UEAAX_N@Z
    MCVAPI void SetExtmapAllowMixed(bool);

    // symbol:
    // ?SetFrameDecryptor@VideoMediaReceiveChannel@cricket@@UEAAXIV?$scoped_refptr@VFrameDecryptorInterface@webrtc@@@rtc@@@Z
    MCVAPI void SetFrameDecryptor(uint, class rtc::scoped_refptr<class webrtc::FrameDecryptorInterface>);

    // symbol:
    // ?SetRecordableEncodedFrameCallback@VideoMediaReceiveChannel@cricket@@UEAAXIV?$function@$$A6AXAEBVRecordableEncodedFrame@webrtc@@@Z@std@@@Z
    MCVAPI void
        SetRecordableEncodedFrameCallback(uint, std::function<void(class webrtc::RecordableEncodedFrame const&)>);

    // symbol: ?SetRecvParameters@VideoMediaReceiveChannel@cricket@@UEAA_NAEBUVideoRecvParameters@2@@Z
    MCVAPI bool SetRecvParameters(struct cricket::VideoRecvParameters const&);

    // symbol: ?SetSink@VideoMediaReceiveChannel@cricket@@UEAA_NIPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@rtc@@@Z
    MCVAPI bool SetSink(uint, class rtc::VideoSinkInterface<class webrtc::VideoFrame>*);

    // symbol: ?media_type@VideoMediaReceiveChannel@cricket@@UEBA?AW4MediaType@2@XZ
    MCVAPI ::cricket::MediaType media_type() const;

    // symbol: ??1VideoMediaReceiveChannel@cricket@@UEAA@XZ
    MCVAPI ~VideoMediaReceiveChannel();

    // NOLINTEND
};

}; // namespace cricket
