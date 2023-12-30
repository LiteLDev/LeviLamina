#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/absl/AnyInvocable.h"
#include "mc/deps/webrtc/cricket/MediaType.h"
#include "mc/deps/webrtc/cricket/VoiceMediaSendChannelInterface.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class AudioSource; }
namespace cricket { class VideoMediaSendChannelInterface; }
namespace cricket { class VoiceMediaSendChannelInterface; }
namespace cricket { struct AudioOptions; }
namespace cricket { struct AudioSendParameters; }
namespace cricket { struct StreamParams; }
namespace cricket { struct VoiceMediaSendInfo; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct SentPacket; }
namespace webrtc { class FrameEncryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { struct RtpParameters; }
namespace webrtc::VideoEncoderFactory { class EncoderSelectorInterface; }
// clang-format on

namespace cricket {

class VoiceMediaSendChannel : public ::cricket::VoiceMediaSendChannelInterface {
public:
    // prevent constructor by default
    VoiceMediaSendChannel& operator=(VoiceMediaSendChannel const&);
    VoiceMediaSendChannel(VoiceMediaSendChannel const&);
    VoiceMediaSendChannel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1VoiceMediaSendChannel@cricket@@UEAA@XZ
    virtual ~VoiceMediaSendChannel();

    // vIndex: 1, symbol: ?media_type@VoiceMediaSendChannel@cricket@@UEBA?AW4MediaType@2@XZ
    virtual ::cricket::MediaType media_type() const;

    // vIndex: 2, symbol: ?OnPacketReceived@VoiceMediaSendChannel@cricket@@UEAAXAEBVRtpPacketReceived@webrtc@@@Z
    virtual void OnPacketReceived(class webrtc::RtpPacketReceived const&);

    // vIndex: 3, symbol: ?OnPacketSent@VoiceMediaSendChannel@cricket@@UEAAXAEBUSentPacket@rtc@@@Z
    virtual void OnPacketSent(struct rtc::SentPacket const&);

    // vIndex: 4, symbol: ?OnReadyToSend@VoiceMediaSendChannel@cricket@@UEAAX_N@Z
    virtual void OnReadyToSend(bool);

    // vIndex: 5, symbol:
    // ?OnNetworkRouteChanged@VoiceMediaSendChannel@cricket@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBUNetworkRoute@rtc@@@Z
    virtual void OnNetworkRouteChanged(std::string_view, struct rtc::NetworkRoute const&);

    // vIndex: 6, symbol: ?SetExtmapAllowMixed@VoiceMediaSendChannel@cricket@@UEAAX_N@Z
    virtual void SetExtmapAllowMixed(bool);

    // vIndex: 7, symbol: ?ExtmapAllowMixed@VoiceMediaSendChannel@cricket@@UEBA_NXZ
    virtual bool ExtmapAllowMixed() const;

    // vIndex: 8, symbol: ?AsVideoSendChannel@VoiceMediaSendChannel@cricket@@UEAAPEAVVideoMediaSendChannelInterface@2@XZ
    virtual class cricket::VideoMediaSendChannelInterface* AsVideoSendChannel();

    // vIndex: 9, symbol: ?AsVoiceSendChannel@VoiceMediaSendChannel@cricket@@UEAAPEAVVoiceMediaSendChannelInterface@2@XZ
    virtual class cricket::VoiceMediaSendChannelInterface* AsVoiceSendChannel();

    // vIndex: 10, symbol: ?AddSendStream@VoiceMediaSendChannel@cricket@@UEAA_NAEBUStreamParams@2@@Z
    virtual bool AddSendStream(struct cricket::StreamParams const&);

    // vIndex: 11, symbol: ?RemoveSendStream@VoiceMediaSendChannel@cricket@@UEAA_NI@Z
    virtual bool RemoveSendStream(uint);

    // vIndex: 12, symbol:
    // ?SetFrameEncryptor@VoiceMediaSendChannel@cricket@@UEAAXIV?$scoped_refptr@VFrameEncryptorInterface@webrtc@@@rtc@@@Z
    virtual void SetFrameEncryptor(uint, class rtc::scoped_refptr<class webrtc::FrameEncryptorInterface>);

    // vIndex: 13, symbol:
    // ?SetRtpSendParameters@VoiceMediaSendChannel@cricket@@UEAA?AVRTCError@webrtc@@IAEBURtpParameters@4@V?$AnyInvocable@$$A8@@EHAAXVRTCError@webrtc@@@Z@absl@@@Z
    virtual class webrtc::RTCError
    SetRtpSendParameters(uint, struct webrtc::RtpParameters const&, class absl::AnyInvocable<void(class webrtc::RTCError) &&>);

    // vIndex: 14, symbol:
    // ?SetEncoderToPacketizerFrameTransformer@VoiceMediaSendChannel@cricket@@UEAAXIV?$scoped_refptr@VFrameTransformerInterface@webrtc@@@rtc@@@Z
    virtual void
        SetEncoderToPacketizerFrameTransformer(uint, class rtc::scoped_refptr<class webrtc::FrameTransformerInterface>);

    // vIndex: 15, symbol:
    // ?SetEncoderSelector@VoiceMediaSendChannel@cricket@@UEAAXIPEAVEncoderSelectorInterface@VideoEncoderFactory@webrtc@@@Z
    virtual void SetEncoderSelector(uint, class webrtc::VideoEncoderFactory::EncoderSelectorInterface*);

    // vIndex: 16, symbol: ?GetRtpSendParameters@VoiceMediaSendChannel@cricket@@UEBA?AURtpParameters@webrtc@@I@Z
    virtual struct webrtc::RtpParameters GetRtpSendParameters(uint) const;

    // vIndex: 17, symbol: ?SetSendParameters@VoiceMediaSendChannel@cricket@@UEAA_NAEBUAudioSendParameters@2@@Z
    virtual bool SetSendParameters(struct cricket::AudioSendParameters const&);

    // vIndex: 18, symbol: ?SetSend@VoiceMediaSendChannel@cricket@@UEAAX_N@Z
    virtual void SetSend(bool);

    // vIndex: 19, symbol: ?SetAudioSend@VoiceMediaSendChannel@cricket@@UEAA_NI_NPEBUAudioOptions@2@PEAVAudioSource@2@@Z
    virtual bool SetAudioSend(uint, bool, struct cricket::AudioOptions const*, class cricket::AudioSource*);

    // vIndex: 20, symbol: ?CanInsertDtmf@VoiceMediaSendChannel@cricket@@UEAA_NXZ
    virtual bool CanInsertDtmf();

    // vIndex: 21, symbol: ?InsertDtmf@VoiceMediaSendChannel@cricket@@UEAA_NIHH@Z
    virtual bool InsertDtmf(uint, int, int);

    // vIndex: 22, symbol: ?GetStats@VoiceMediaSendChannel@cricket@@UEAA_NPEAUVoiceMediaSendInfo@2@@Z
    virtual bool GetStats(struct cricket::VoiceMediaSendInfo*);

    // NOLINTEND
};

}; // namespace cricket
