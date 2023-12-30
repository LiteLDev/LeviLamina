#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpReceiverProxyWithInternal.h"
#include "mc/deps/webrtc/RtpSenderProxyWithInternal.h"
#include "mc/deps/webrtc/RtpTransceiverDirection.h"
#include "mc/deps/webrtc/SdpType.h"
#include "mc/deps/webrtc/cricket/MediaType.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class ChannelInterface; }
namespace cricket { class MediaContentDescription; }
namespace cricket { struct AudioOptions; }
namespace cricket { struct MediaConfig; }
namespace cricket { struct VideoOptions; }
namespace webrtc { class Call; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class RtpSenderInternal; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { class VideoBitrateAllocatorFactory; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct RtpCodecCapability; }
namespace webrtc { struct RtpHeaderExtensionCapability; }
// clang-format on

namespace webrtc {

class RtpTransceiver {
public:
    // prevent constructor by default
    RtpTransceiver& operator=(RtpTransceiver const&);
    RtpTransceiver(RtpTransceiver const&);
    RtpTransceiver();

public:
    // NOLINTBEGIN
    // symbol:
    // ?HeaderExtensionsNegotiated@RtpTransceiver@webrtc@@UEBA?AV?$vector@URtpHeaderExtensionCapability@webrtc@@V?$allocator@URtpHeaderExtensionCapability@webrtc@@@std@@@std@@XZ
    MCVAPI std::vector<struct webrtc::RtpHeaderExtensionCapability> HeaderExtensionsNegotiated() const;

    // symbol:
    // ?HeaderExtensionsToOffer@RtpTransceiver@webrtc@@UEBA?AV?$vector@URtpHeaderExtensionCapability@webrtc@@V?$allocator@URtpHeaderExtensionCapability@webrtc@@@std@@@std@@XZ
    MCVAPI std::vector<struct webrtc::RtpHeaderExtensionCapability> HeaderExtensionsToOffer() const;

    // symbol:
    // ?SetCodecPreferences@RtpTransceiver@webrtc@@UEAA?AVRTCError@2@V?$ArrayView@URtpCodecCapability@webrtc@@$0?BCGH@@rtc@@@Z
    MCVAPI class webrtc::RTCError SetCodecPreferences(class rtc::ArrayView<struct webrtc::RtpCodecCapability, -4711>);

    // symbol: ?SetDirectionWithError@RtpTransceiver@webrtc@@UEAA?AVRTCError@2@W4RtpTransceiverDirection@2@@Z
    MCVAPI class webrtc::RTCError SetDirectionWithError(::webrtc::RtpTransceiverDirection);

    // symbol:
    // ?SetOfferedRtpHeaderExtensions@RtpTransceiver@webrtc@@UEAA?AVRTCError@2@V?$ArrayView@$$CBURtpHeaderExtensionCapability@webrtc@@$0?BCGH@@rtc@@@Z
    MCVAPI class webrtc::RTCError
        SetOfferedRtpHeaderExtensions(class rtc::ArrayView<struct webrtc::RtpHeaderExtensionCapability const, -4711>);

    // symbol: ?StopInternal@RtpTransceiver@webrtc@@UEAAXXZ
    MCVAPI void StopInternal();

    // symbol: ?StopStandard@RtpTransceiver@webrtc@@UEAA?AVRTCError@2@XZ
    MCVAPI class webrtc::RTCError StopStandard();

    // symbol:
    // ?codec_preferences@RtpTransceiver@webrtc@@UEBA?AV?$vector@URtpCodecCapability@webrtc@@V?$allocator@URtpCodecCapability@webrtc@@@std@@@std@@XZ
    MCVAPI std::vector<struct webrtc::RtpCodecCapability> codec_preferences() const;

    // symbol: ?current_direction@RtpTransceiver@webrtc@@UEBA?AV?$optional@W4RtpTransceiverDirection@webrtc@@@std@@XZ
    MCVAPI std::optional<::webrtc::RtpTransceiverDirection> current_direction() const;

    // symbol: ?direction@RtpTransceiver@webrtc@@UEBA?AW4RtpTransceiverDirection@2@XZ
    MCVAPI ::webrtc::RtpTransceiverDirection direction() const;

    // symbol: ?fired_direction@RtpTransceiver@webrtc@@UEBA?AV?$optional@W4RtpTransceiverDirection@webrtc@@@std@@XZ
    MCVAPI std::optional<::webrtc::RtpTransceiverDirection> fired_direction() const;

    // symbol: ?media_type@RtpTransceiver@webrtc@@UEBA?AW4MediaType@cricket@@XZ
    MCVAPI ::cricket::MediaType media_type() const;

    // symbol:
    // ?mid@RtpTransceiver@webrtc@@UEBA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@XZ
    MCVAPI std::optional<std::string> mid() const;

    // symbol: ?receiver@RtpTransceiver@webrtc@@UEBA?AV?$scoped_refptr@VRtpReceiverInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::RtpReceiverInterface> receiver() const;

    // symbol: ?sender@RtpTransceiver@webrtc@@UEBA?AV?$scoped_refptr@VRtpSenderInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::RtpSenderInterface> sender() const;

    // symbol: ?stopped@RtpTransceiver@webrtc@@UEBA_NXZ
    MCVAPI bool stopped() const;

    // symbol: ?stopping@RtpTransceiver@webrtc@@UEBA_NXZ
    MCVAPI bool stopping() const;

    // symbol: ??1RtpTransceiver@webrtc@@UEAA@XZ
    MCVAPI ~RtpTransceiver();

    // symbol:
    // ?AddReceiver@RtpTransceiver@webrtc@@QEAAXV?$scoped_refptr@V?$RtpReceiverProxyWithInternal@VRtpReceiverInternal@webrtc@@@webrtc@@@rtc@@@Z
    MCAPI void AddReceiver(class rtc::scoped_refptr<
                           class webrtc::RtpReceiverProxyWithInternal<class webrtc::RtpReceiverInternal>>);

    // symbol:
    // ?AddSender@RtpTransceiver@webrtc@@QEAAXV?$scoped_refptr@V?$RtpSenderProxyWithInternal@VRtpSenderInternal@webrtc@@@webrtc@@@rtc@@@Z
    MCAPI void
        AddSender(class rtc::scoped_refptr<class webrtc::RtpSenderProxyWithInternal<class webrtc::RtpSenderInternal>>);

    // symbol: ?ClearChannel@RtpTransceiver@webrtc@@QEAAXXZ
    MCAPI void ClearChannel();

    // symbol:
    // ?CreateChannel@RtpTransceiver@webrtc@@QEAA?AVRTCError@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVCall@2@AEBUMediaConfig@cricket@@_NUCryptoOptions@2@AEBUAudioOptions@8@AEBUVideoOptions@8@PEAVVideoBitrateAllocatorFactory@2@V?$function@$$A6APEAVRtpTransportInternal@webrtc@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z@5@@Z
    MCAPI class webrtc::RTCError CreateChannel(std::string_view, class webrtc::Call*, struct cricket::MediaConfig const&, bool, struct webrtc::CryptoOptions, struct cricket::AudioOptions const&, struct cricket::VideoOptions const&, class webrtc::VideoBitrateAllocatorFactory*, std::function<class webrtc::RtpTransportInternal*(std::string_view)>);

    // symbol: ?OnNegotiationUpdate@RtpTransceiver@webrtc@@QEAAXW4SdpType@2@PEBVMediaContentDescription@cricket@@@Z
    MCAPI void OnNegotiationUpdate(::webrtc::SdpType, class cricket::MediaContentDescription const*);

    // symbol: ?RemoveReceiver@RtpTransceiver@webrtc@@QEAA_NPEAVRtpReceiverInterface@2@@Z
    MCAPI bool RemoveReceiver(class webrtc::RtpReceiverInterface*);

    // symbol: ?RemoveSender@RtpTransceiver@webrtc@@QEAA_NPEAVRtpSenderInterface@2@@Z
    MCAPI bool RemoveSender(class webrtc::RtpSenderInterface*);

    // symbol: ??0RtpTransceiver@webrtc@@QEAA@W4MediaType@cricket@@PEAVConnectionContext@1@@Z
    MCAPI RtpTransceiver(::cricket::MediaType, class webrtc::ConnectionContext*);

    // symbol:
    // ??0RtpTransceiver@webrtc@@QEAA@V?$scoped_refptr@V?$RtpSenderProxyWithInternal@VRtpSenderInternal@webrtc@@@webrtc@@@rtc@@V?$scoped_refptr@V?$RtpReceiverProxyWithInternal@VRtpReceiverInternal@webrtc@@@webrtc@@@3@PEAVConnectionContext@1@V?$vector@URtpHeaderExtensionCapability@webrtc@@V?$allocator@URtpHeaderExtensionCapability@webrtc@@@std@@@std@@V?$function@$$A6AXXZ@7@@Z
    MCAPI
    RtpTransceiver(class rtc::scoped_refptr<class webrtc::RtpSenderProxyWithInternal<class webrtc::RtpSenderInternal>>, class rtc::scoped_refptr<class webrtc::RtpReceiverProxyWithInternal<class webrtc::RtpReceiverInternal>>, class webrtc::ConnectionContext*, std::vector<struct webrtc::RtpHeaderExtensionCapability>, std::function<void(void)>);

    // symbol:
    // ?SetChannel@RtpTransceiver@webrtc@@QEAAXV?$unique_ptr@VChannelInterface@cricket@@U?$default_delete@VChannelInterface@cricket@@@std@@@std@@V?$function@$$A6APEAVRtpTransportInternal@webrtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@4@@Z
    MCAPI void
        SetChannel(std::unique_ptr<class cricket::ChannelInterface>, std::function<class webrtc::RtpTransportInternal*(std::string const&)>);

    // symbol: ?SetPeerConnectionClosed@RtpTransceiver@webrtc@@QEAAXXZ
    MCAPI void SetPeerConnectionClosed();

    // symbol: ?StopTransceiverProcedure@RtpTransceiver@webrtc@@QEAAXXZ
    MCAPI void StopTransceiverProcedure();

    // symbol: ?receiver_internal@RtpTransceiver@webrtc@@QEBA?AV?$scoped_refptr@VRtpReceiverInternal@webrtc@@@rtc@@XZ
    MCAPI class rtc::scoped_refptr<class webrtc::RtpReceiverInternal> receiver_internal() const;

    // symbol: ?sender_internal@RtpTransceiver@webrtc@@QEBA?AV?$scoped_refptr@VRtpSenderInternal@webrtc@@@rtc@@XZ
    MCAPI class rtc::scoped_refptr<class webrtc::RtpSenderInternal> sender_internal() const;

    // symbol:
    // ?senders@RtpTransceiver@webrtc@@QEBA?AV?$vector@V?$scoped_refptr@V?$RtpSenderProxyWithInternal@VRtpSenderInternal@webrtc@@@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@V?$RtpSenderProxyWithInternal@VRtpSenderInternal@webrtc@@@webrtc@@@rtc@@@std@@@std@@XZ
    MCAPI
    std::vector<class rtc::scoped_refptr<class webrtc::RtpSenderProxyWithInternal<class webrtc::RtpSenderInternal>>>
    senders() const;

    // symbol: ?set_current_direction@RtpTransceiver@webrtc@@QEAAXW4RtpTransceiverDirection@2@@Z
    MCAPI void set_current_direction(::webrtc::RtpTransceiverDirection);

    // symbol: ?set_fired_direction@RtpTransceiver@webrtc@@QEAAXV?$optional@W4RtpTransceiverDirection@webrtc@@@std@@@Z
    MCAPI void set_fired_direction(std::optional<::webrtc::RtpTransceiverDirection>);

    // symbol:
    // ?set_mid@RtpTransceiver@webrtc@@QEAAXAEBV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI void set_mid(std::optional<std::string> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?OnFirstPacketReceived@RtpTransceiver@webrtc@@AEAAXXZ
    MCAPI void OnFirstPacketReceived();

    // symbol:
    // ?PushNewMediaChannelAndDeleteChannel@RtpTransceiver@webrtc@@AEAAXV?$unique_ptr@VChannelInterface@cricket@@U?$default_delete@VChannelInterface@cricket@@@std@@@std@@@Z
    MCAPI void PushNewMediaChannelAndDeleteChannel(std::unique_ptr<class cricket::ChannelInterface>);

    // symbol: ?StopSendingAndReceiving@RtpTransceiver@webrtc@@AEAAXXZ
    MCAPI void StopSendingAndReceiving();

    // NOLINTEND
};

}; // namespace webrtc
