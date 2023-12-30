#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/absl/AnyInvocable.h"
#include "mc/deps/webrtc/cricket/MediaType.h"
#include "mc/deps/webrtc/cricket/VideoMediaSendChannelInterface.h"
#include "mc/deps/webrtc/rtc/VideoSourceInterface.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class VideoMediaSendChannelInterface; }
namespace cricket { class VoiceMediaSendChannelInterface; }
namespace cricket { struct BandwidthEstimationInfo; }
namespace cricket { struct StreamParams; }
namespace cricket { struct VideoCodec; }
namespace cricket { struct VideoMediaSendInfo; }
namespace cricket { struct VideoOptions; }
namespace cricket { struct VideoSendParameters; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct SentPacket; }
namespace webrtc { class FrameEncryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class VideoFrame; }
namespace webrtc { struct RtpParameters; }
namespace webrtc::VideoEncoderFactory { class EncoderSelectorInterface; }
// clang-format on

namespace cricket {

class VideoMediaSendChannel : public ::cricket::VideoMediaSendChannelInterface {
public:
    // prevent constructor by default
    VideoMediaSendChannel& operator=(VideoMediaSendChannel const&);
    VideoMediaSendChannel(VideoMediaSendChannel const&);
    VideoMediaSendChannel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VideoMediaSendChannel@cricket@@UEAA@XZ
    virtual ~VideoMediaSendChannel() = default;

    // vIndex: 1, symbol: ?media_type@VideoMediaSendChannel@cricket@@UEBA?AW4MediaType@2@XZ
    virtual ::cricket::MediaType media_type() const;

    // vIndex: 2, symbol: ?OnPacketReceived@VideoMediaSendChannel@cricket@@UEAAXAEBVRtpPacketReceived@webrtc@@@Z
    virtual void OnPacketReceived(class webrtc::RtpPacketReceived const&);

    // vIndex: 3, symbol: ?OnPacketSent@VideoMediaSendChannel@cricket@@UEAAXAEBUSentPacket@rtc@@@Z
    virtual void OnPacketSent(struct rtc::SentPacket const&);

    // vIndex: 4, symbol: ?OnReadyToSend@VideoMediaSendChannel@cricket@@UEAAX_N@Z
    virtual void OnReadyToSend(bool);

    // vIndex: 5, symbol:
    // ?OnNetworkRouteChanged@VideoMediaSendChannel@cricket@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBUNetworkRoute@rtc@@@Z
    virtual void OnNetworkRouteChanged(std::string_view, struct rtc::NetworkRoute const&);

    // vIndex: 6, symbol: ?SetExtmapAllowMixed@VideoMediaSendChannel@cricket@@UEAAX_N@Z
    virtual void SetExtmapAllowMixed(bool);

    // vIndex: 7, symbol: ?ExtmapAllowMixed@VideoMediaSendChannel@cricket@@UEBA_NXZ
    virtual bool ExtmapAllowMixed() const;

    // vIndex: 8, symbol: ?AsVideoSendChannel@VideoMediaSendChannel@cricket@@UEAAPEAVVideoMediaSendChannelInterface@2@XZ
    virtual class cricket::VideoMediaSendChannelInterface* AsVideoSendChannel();

    // vIndex: 9, symbol: ?AsVoiceSendChannel@VideoMediaSendChannel@cricket@@UEAAPEAVVoiceMediaSendChannelInterface@2@XZ
    virtual class cricket::VoiceMediaSendChannelInterface* AsVoiceSendChannel();

    // vIndex: 10, symbol: ?AddSendStream@VideoMediaSendChannel@cricket@@UEAA_NAEBUStreamParams@2@@Z
    virtual bool AddSendStream(struct cricket::StreamParams const&);

    // vIndex: 11, symbol: ?RemoveSendStream@VideoMediaSendChannel@cricket@@UEAA_NI@Z
    virtual bool RemoveSendStream(uint);

    // vIndex: 12, symbol:
    // ?SetFrameEncryptor@VideoMediaSendChannel@cricket@@UEAAXIV?$scoped_refptr@VFrameEncryptorInterface@webrtc@@@rtc@@@Z
    virtual void SetFrameEncryptor(uint, class rtc::scoped_refptr<class webrtc::FrameEncryptorInterface>);

    // vIndex: 13, symbol:
    // ?SetRtpSendParameters@VideoMediaSendChannel@cricket@@UEAA?AVRTCError@webrtc@@IAEBURtpParameters@4@V?$AnyInvocable@$$A8@@EHAAXVRTCError@webrtc@@@Z@absl@@@Z
    virtual class webrtc::RTCError
    SetRtpSendParameters(uint, struct webrtc::RtpParameters const&, class absl::AnyInvocable<void(class webrtc::RTCError) &&>);

    // vIndex: 14, symbol:
    // ?SetEncoderToPacketizerFrameTransformer@VideoMediaSendChannel@cricket@@UEAAXIV?$scoped_refptr@VFrameTransformerInterface@webrtc@@@rtc@@@Z
    virtual void
        SetEncoderToPacketizerFrameTransformer(uint, class rtc::scoped_refptr<class webrtc::FrameTransformerInterface>);

    // vIndex: 15, symbol:
    // ?SetEncoderSelector@VideoMediaSendChannel@cricket@@UEAAXIPEAVEncoderSelectorInterface@VideoEncoderFactory@webrtc@@@Z
    virtual void SetEncoderSelector(uint, class webrtc::VideoEncoderFactory::EncoderSelectorInterface*);

    // vIndex: 16, symbol: ?GetRtpSendParameters@VideoMediaSendChannel@cricket@@UEBA?AURtpParameters@webrtc@@I@Z
    virtual struct webrtc::RtpParameters GetRtpSendParameters(uint) const;

    // vIndex: 17, symbol: ?SetSendParameters@VideoMediaSendChannel@cricket@@UEAA_NAEBUVideoSendParameters@2@@Z
    virtual bool SetSendParameters(struct cricket::VideoSendParameters const&);

    // vIndex: 18, symbol: ?GetSendCodec@VideoMediaSendChannel@cricket@@UEAA_NPEAUVideoCodec@2@@Z
    virtual bool GetSendCodec(struct cricket::VideoCodec*);

    // vIndex: 19, symbol: ?SetSend@VideoMediaSendChannel@cricket@@UEAA_N_N@Z
    virtual bool SetSend(bool);

    // vIndex: 20, symbol:
    // ?SetVideoSend@VideoMediaSendChannel@cricket@@UEAA_NIPEBUVideoOptions@2@PEAV?$VideoSourceInterface@VVideoFrame@webrtc@@@rtc@@@Z
    virtual bool
    SetVideoSend(uint, struct cricket::VideoOptions const*, class rtc::VideoSourceInterface<class webrtc::VideoFrame>*);

    // vIndex: 21, symbol:
    // ?GenerateSendKeyFrame@VideoMediaSendChannel@cricket@@UEAAXIAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual void GenerateSendKeyFrame(uint, std::vector<std::string> const&);

    // vIndex: 22, symbol: ?SetVideoCodecSwitchingEnabled@VideoMediaSendChannel@cricket@@UEAAX_N@Z
    virtual void SetVideoCodecSwitchingEnabled(bool);

    // vIndex: 23, symbol: ?GetStats@VideoMediaSendChannel@cricket@@UEAA_NPEAUVideoMediaSendInfo@2@@Z
    virtual bool GetStats(struct cricket::VideoMediaSendInfo*);

    // vIndex: 24, symbol: ?FillBitrateInfo@VideoMediaSendChannel@cricket@@UEAAXPEAUBandwidthEstimationInfo@2@@Z
    virtual void FillBitrateInfo(struct cricket::BandwidthEstimationInfo*);

    // NOLINTEND
};

}; // namespace cricket
