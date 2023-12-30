#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/MediaType.h"
#include "mc/deps/webrtc/cricket/VoiceMediaReceiveChannelInterface.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace cricket { struct AudioRecvParameters; }
namespace cricket { struct StreamParams; }
namespace cricket { struct VoiceMediaReceiveInfo; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct SentPacket; }
namespace webrtc { class AudioSinkInterface; }
namespace webrtc { class FrameDecryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class RtpSource; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace cricket {

class VoiceMediaReceiveChannel : public ::cricket::VoiceMediaReceiveChannelInterface {
public:
    // prevent constructor by default
    VoiceMediaReceiveChannel& operator=(VoiceMediaReceiveChannel const&);
    VoiceMediaReceiveChannel(VoiceMediaReceiveChannel const&);
    VoiceMediaReceiveChannel();

public:
    // NOLINTBEGIN
    // symbol: ?AddRecvStream@VoiceMediaReceiveChannel@cricket@@UEAA_NAEBUStreamParams@2@@Z
    MCVAPI bool AddRecvStream(struct cricket::StreamParams const&);

    // symbol: ?ExtmapAllowMixed@VoiceMediaReceiveChannel@cricket@@UEBA_NXZ
    MCVAPI bool ExtmapAllowMixed() const;

    // symbol: ?GetBaseMinimumPlayoutDelayMs@VoiceMediaReceiveChannel@cricket@@UEBA?AV?$optional@H@std@@I@Z
    MCVAPI std::optional<int> GetBaseMinimumPlayoutDelayMs(uint) const;

    // symbol: ?GetDefaultRtpReceiveParameters@VoiceMediaReceiveChannel@cricket@@UEBA?AURtpParameters@webrtc@@XZ
    MCVAPI struct webrtc::RtpParameters GetDefaultRtpReceiveParameters() const;

    // symbol: ?GetRtpReceiveParameters@VoiceMediaReceiveChannel@cricket@@UEBA?AURtpParameters@webrtc@@I@Z
    MCVAPI struct webrtc::RtpParameters GetRtpReceiveParameters(uint) const;

    // symbol:
    // ?GetSources@VoiceMediaReceiveChannel@cricket@@UEBA?AV?$vector@VRtpSource@webrtc@@V?$allocator@VRtpSource@webrtc@@@std@@@std@@I@Z
    MCVAPI std::vector<class webrtc::RtpSource> GetSources(uint) const;

    // symbol: ?GetStats@VoiceMediaReceiveChannel@cricket@@UEAA_NPEAUVoiceMediaReceiveInfo@2@_N@Z
    MCVAPI bool GetStats(struct cricket::VoiceMediaReceiveInfo*, bool);

    // symbol: ?GetUnsignaledSsrc@VoiceMediaReceiveChannel@cricket@@UEBA?AV?$optional@I@std@@XZ
    MCVAPI std::optional<uint> GetUnsignaledSsrc() const;

    // symbol: ?OnDemuxerCriteriaUpdateComplete@VoiceMediaReceiveChannel@cricket@@UEAAXXZ
    MCVAPI void OnDemuxerCriteriaUpdateComplete();

    // symbol: ?OnDemuxerCriteriaUpdatePending@VoiceMediaReceiveChannel@cricket@@UEAAXXZ
    MCVAPI void OnDemuxerCriteriaUpdatePending();

    // symbol:
    // ?OnNetworkRouteChanged@VoiceMediaReceiveChannel@cricket@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBUNetworkRoute@rtc@@@Z
    MCVAPI void OnNetworkRouteChanged(std::string_view, struct rtc::NetworkRoute const&);

    // symbol: ?OnPacketReceived@VoiceMediaReceiveChannel@cricket@@UEAAXAEBVRtpPacketReceived@webrtc@@@Z
    MCVAPI void OnPacketReceived(class webrtc::RtpPacketReceived const&);

    // symbol: ?OnPacketSent@VoiceMediaReceiveChannel@cricket@@UEAAXAEBUSentPacket@rtc@@@Z
    MCVAPI void OnPacketSent(struct rtc::SentPacket const&);

    // symbol: ?OnReadyToSend@VoiceMediaReceiveChannel@cricket@@UEAAX_N@Z
    MCVAPI void OnReadyToSend(bool);

    // symbol: ?RemoveRecvStream@VoiceMediaReceiveChannel@cricket@@UEAA_NI@Z
    MCVAPI bool RemoveRecvStream(uint);

    // symbol: ?ResetUnsignaledRecvStream@VoiceMediaReceiveChannel@cricket@@UEAAXXZ
    MCVAPI void ResetUnsignaledRecvStream();

    // symbol: ?SetBaseMinimumPlayoutDelayMs@VoiceMediaReceiveChannel@cricket@@UEAA_NIH@Z
    MCVAPI bool SetBaseMinimumPlayoutDelayMs(uint, int);

    // symbol: ?SetDefaultOutputVolume@VoiceMediaReceiveChannel@cricket@@UEAA_NN@Z
    MCVAPI bool SetDefaultOutputVolume(double);

    // symbol:
    // ?SetDefaultRawAudioSink@VoiceMediaReceiveChannel@cricket@@UEAAXV?$unique_ptr@VAudioSinkInterface@webrtc@@U?$default_delete@VAudioSinkInterface@webrtc@@@std@@@std@@@Z
    MCVAPI void SetDefaultRawAudioSink(std::unique_ptr<class webrtc::AudioSinkInterface>);

    // symbol:
    // ?SetDepacketizerToDecoderFrameTransformer@VoiceMediaReceiveChannel@cricket@@UEAAXIV?$scoped_refptr@VFrameTransformerInterface@webrtc@@@rtc@@@Z
    MCVAPI void
        SetDepacketizerToDecoderFrameTransformer(uint, class rtc::scoped_refptr<class webrtc::FrameTransformerInterface>);

    // symbol: ?SetExtmapAllowMixed@VoiceMediaReceiveChannel@cricket@@UEAAX_N@Z
    MCVAPI void SetExtmapAllowMixed(bool);

    // symbol:
    // ?SetFrameDecryptor@VoiceMediaReceiveChannel@cricket@@UEAAXIV?$scoped_refptr@VFrameDecryptorInterface@webrtc@@@rtc@@@Z
    MCVAPI void SetFrameDecryptor(uint, class rtc::scoped_refptr<class webrtc::FrameDecryptorInterface>);

    // symbol: ?SetOutputVolume@VoiceMediaReceiveChannel@cricket@@UEAA_NIN@Z
    MCVAPI bool SetOutputVolume(uint, double);

    // symbol: ?SetPlayout@VoiceMediaReceiveChannel@cricket@@UEAAX_N@Z
    MCVAPI void SetPlayout(bool);

    // symbol:
    // ?SetRawAudioSink@VoiceMediaReceiveChannel@cricket@@UEAAXIV?$unique_ptr@VAudioSinkInterface@webrtc@@U?$default_delete@VAudioSinkInterface@webrtc@@@std@@@std@@@Z
    MCVAPI void SetRawAudioSink(uint, std::unique_ptr<class webrtc::AudioSinkInterface>);

    // symbol: ?SetRecvParameters@VoiceMediaReceiveChannel@cricket@@UEAA_NAEBUAudioRecvParameters@2@@Z
    MCVAPI bool SetRecvParameters(struct cricket::AudioRecvParameters const&);

    // symbol: ?media_type@VoiceMediaReceiveChannel@cricket@@UEBA?AW4MediaType@2@XZ
    MCVAPI ::cricket::MediaType media_type() const;

    // symbol: ??1VoiceMediaReceiveChannel@cricket@@UEAA@XZ
    MCVAPI ~VoiceMediaReceiveChannel();

    // NOLINTEND
};

}; // namespace cricket
