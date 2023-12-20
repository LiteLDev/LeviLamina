#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/SdpType.h"
#include "mc/deps/webrtc/detail/MediaChannelNetworkInterface.h"
#include "mc/deps/webrtc/detail/Socket.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaChannel; }
namespace cricket { class MediaContentDescription; }
namespace cricket { class VideoMediaReceiveChannelInterface; }
namespace cricket { class VideoMediaSendChannelInterface; }
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace cricket { class VoiceMediaSendChannelInterface; }
namespace cricket { struct StreamParams; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class Thread; }
namespace rtc { class UniqueRandomIdGenerator; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct SentPacket; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace cricket {

class BaseChannel {
public:
    // prevent constructor by default
    BaseChannel& operator=(BaseChannel const&);
    BaseChannel(BaseChannel const&);
    BaseChannel();

public:
    // NOLINTBEGIN
    // symbol: ?Enable@BaseChannel@cricket@@UEAAX_N@Z
    MCVAPI void Enable(bool);

    // symbol: ?OnRtpPacket@BaseChannel@cricket@@UEAAXAEBVRtpPacketReceived@webrtc@@@Z
    MCVAPI void OnRtpPacket(class webrtc::RtpPacketReceived const&);

    // symbol: ?SendPacket@BaseChannel@cricket@@MEAA_NPEAVCopyOnWriteBuffer@rtc@@AEBUPacketOptions@4@@Z
    MCVAPI bool SendPacket(class rtc::CopyOnWriteBuffer*, struct rtc::PacketOptions const&);

    // symbol: ?SendRtcp@BaseChannel@cricket@@MEAA_NPEAVCopyOnWriteBuffer@rtc@@AEBUPacketOptions@4@@Z
    MCVAPI bool SendRtcp(class rtc::CopyOnWriteBuffer*, struct rtc::PacketOptions const&);

    // symbol: ?SetFirstPacketReceivedCallback@BaseChannel@cricket@@UEAAXV?$function@$$A6AXXZ@std@@@Z
    MCVAPI void SetFirstPacketReceivedCallback(std::function<void(void)>);

    // symbol:
    // ?SetLocalContent@BaseChannel@cricket@@UEAA_NPEBVMediaContentDescription@2@W4SdpType@webrtc@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool SetLocalContent(class cricket::MediaContentDescription const*, ::webrtc::SdpType, std::string&);

    // symbol: ?SetOption@BaseChannel@cricket@@UEAAHW4SocketType@MediaChannelNetworkInterface@2@W4Option@Socket@rtc@@H@Z
    MCVAPI int SetOption(::cricket::MediaChannelNetworkInterface::SocketType, ::rtc::Socket::Option, int);

    // symbol: ?SetPayloadTypeDemuxingEnabled@BaseChannel@cricket@@UEAA_N_N@Z
    MCVAPI bool SetPayloadTypeDemuxingEnabled(bool);

    // symbol:
    // ?SetRemoteContent@BaseChannel@cricket@@UEAA_NPEBVMediaContentDescription@2@W4SdpType@webrtc@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool SetRemoteContent(class cricket::MediaContentDescription const*, ::webrtc::SdpType, std::string&);

    // symbol: ?SetRtpTransport@BaseChannel@cricket@@UEAA_NPEAVRtpTransportInternal@webrtc@@@Z
    MCVAPI bool SetRtpTransport(class webrtc::RtpTransportInternal*);

    // symbol:
    // ?local_streams@BaseChannel@cricket@@UEBAAEBV?$vector@UStreamParams@cricket@@V?$allocator@UStreamParams@cricket@@@std@@@std@@XZ
    MCVAPI std::vector<struct cricket::StreamParams> const& local_streams() const;

    // symbol: ?media_channel@BaseChannel@cricket@@UEAAPEAVMediaChannel@2@XZ
    MCVAPI class cricket::MediaChannel* media_channel();

    // symbol: ?mid@BaseChannel@cricket@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string const& mid() const;

    // symbol:
    // ?remote_streams@BaseChannel@cricket@@UEBAAEBV?$vector@UStreamParams@cricket@@V?$allocator@UStreamParams@cricket@@@std@@@std@@XZ
    MCVAPI std::vector<struct cricket::StreamParams> const& remote_streams() const;

    // symbol: ?transport_name@BaseChannel@cricket@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    MCVAPI std::string_view transport_name() const;

    // symbol: ?video_media_receive_channel@BaseChannel@cricket@@UEAAPEAVVideoMediaReceiveChannelInterface@2@XZ
    MCVAPI class cricket::VideoMediaReceiveChannelInterface* video_media_receive_channel();

    // symbol: ?video_media_send_channel@BaseChannel@cricket@@UEAAPEAVVideoMediaSendChannelInterface@2@XZ
    MCVAPI class cricket::VideoMediaSendChannelInterface* video_media_send_channel();

    // symbol: ?voice_media_receive_channel@BaseChannel@cricket@@UEAAPEAVVoiceMediaReceiveChannelInterface@2@XZ
    MCVAPI class cricket::VoiceMediaReceiveChannelInterface* voice_media_receive_channel();

    // symbol: ?voice_media_send_channel@BaseChannel@cricket@@UEAAPEAVVoiceMediaSendChannelInterface@2@XZ
    MCVAPI class cricket::VoiceMediaSendChannelInterface* voice_media_send_channel();

    // symbol: ??1BaseChannel@cricket@@UEAA@XZ
    MCVAPI ~BaseChannel();

    // symbol:
    // ??0BaseChannel@cricket@@QEAA@PEAVThread@rtc@@00V?$unique_ptr@VMediaChannel@cricket@@U?$default_delete@VMediaChannel@cricket@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@5@_NUCryptoOptions@webrtc@@PEAVUniqueRandomIdGenerator@3@@Z
    MCAPI
    BaseChannel(class rtc::Thread*, class rtc::Thread*, class rtc::Thread*, std::unique_ptr<class cricket::MediaChannel>, std::string_view, bool, struct webrtc::CryptoOptions, class rtc::UniqueRandomIdGenerator*);

    // symbol: ?OnTransportReadyToSend@BaseChannel@cricket@@QEAAX_N@Z
    MCAPI void OnTransportReadyToSend(bool);

    // symbol: ?srtp_active@BaseChannel@cricket@@QEBA_NXZ
    MCAPI bool srtp_active() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?ChannelNotWritable_n@BaseChannel@cricket@@IEAAXXZ
    MCAPI void ChannelNotWritable_n();

    // symbol: ?ChannelWritable_n@BaseChannel@cricket@@IEAAXXZ
    MCAPI void ChannelWritable_n();

    // symbol: ?ClearHandledPayloadTypes@BaseChannel@cricket@@IEAA_NXZ
    MCAPI bool ClearHandledPayloadTypes();

    // symbol: ?DisableMedia_w@BaseChannel@cricket@@IEAAXXZ
    MCAPI void DisableMedia_w();

    // symbol: ?EnableMedia_w@BaseChannel@cricket@@IEAAXXZ
    MCAPI void EnableMedia_w();

    // symbol:
    // ?GetDeduplicatedRtpHeaderExtensions@BaseChannel@cricket@@IEAA?AV?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@std@@AEBV34@@Z
    MCAPI std::vector<struct webrtc::RtpExtension>
          GetDeduplicatedRtpHeaderExtensions(std::vector<struct webrtc::RtpExtension> const&);

    // symbol: ?IsReadyToSendMedia_w@BaseChannel@cricket@@IEBA_NXZ
    MCAPI bool IsReadyToSendMedia_w() const;

    // symbol: ?MaybeAddHandledPayloadType@BaseChannel@cricket@@IEAA_NH@Z
    MCAPI bool MaybeAddHandledPayloadType(int);

    // symbol:
    // ?MaybeUpdateDemuxerAndRtpExtensions_w@BaseChannel@cricket@@IEAA_N_NV?$optional@V?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@std@@@std@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI bool
    MaybeUpdateDemuxerAndRtpExtensions_w(bool, std::optional<std::vector<struct webrtc::RtpExtension>>, std::string&);

    // symbol: ?OnNetworkRouteChanged@BaseChannel@cricket@@IEAAXV?$optional@UNetworkRoute@rtc@@@std@@@Z
    MCAPI void OnNetworkRouteChanged(std::optional<struct rtc::NetworkRoute>);

    // symbol: ?OnWritableState@BaseChannel@cricket@@IEAAX_N@Z
    MCAPI void OnWritableState(bool);

    // symbol: ?RegisterRtpDemuxerSink_w@BaseChannel@cricket@@IEAA_NXZ
    MCAPI bool RegisterRtpDemuxerSink_w();

    // symbol: ?SendPacket@BaseChannel@cricket@@IEAA_N_NPEAVCopyOnWriteBuffer@rtc@@AEBUPacketOptions@4@@Z
    MCAPI bool SendPacket(bool, class rtc::CopyOnWriteBuffer*, struct rtc::PacketOptions const&);

    // symbol: ?SetPayloadTypeDemuxingEnabled_w@BaseChannel@cricket@@IEAA_N_N@Z
    MCAPI bool SetPayloadTypeDemuxingEnabled_w(bool);

    // symbol: ?ToString@BaseChannel@cricket@@IEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol:
    // ?UpdateLocalStreams_w@BaseChannel@cricket@@IEAA_NAEBV?$vector@UStreamParams@cricket@@V?$allocator@UStreamParams@cricket@@@std@@@std@@W4SdpType@webrtc@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI bool UpdateLocalStreams_w(std::vector<struct cricket::StreamParams> const&, ::webrtc::SdpType, std::string&);

    // symbol:
    // ?UpdateRemoteStreams_w@BaseChannel@cricket@@IEAA_NPEBVMediaContentDescription@2@W4SdpType@webrtc@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool UpdateRemoteStreams_w(class cricket::MediaContentDescription const*, ::webrtc::SdpType, std::string&);

    // symbol: ?UpdateWritableState_n@BaseChannel@cricket@@IEAAXXZ
    MCAPI void UpdateWritableState_n();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ConnectToRtpTransport_n@BaseChannel@cricket@@AEAA_NXZ
    MCAPI bool ConnectToRtpTransport_n();

    // symbol: ?DisconnectFromRtpTransport_n@BaseChannel@cricket@@AEAAXXZ
    MCAPI void DisconnectFromRtpTransport_n();

    // symbol: ?SignalSentPacket_n@BaseChannel@cricket@@AEAAXAEBUSentPacket@rtc@@@Z
    MCAPI void SignalSentPacket_n(struct rtc::SentPacket const&);

    // NOLINTEND
};

}; // namespace cricket
