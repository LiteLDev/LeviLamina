#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/MediaSourceInterface.h"
#include "mc/deps/webrtc/detail/MediaType.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaReceiveChannelInterface; }
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace rtc { class Thread; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class FrameDecryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class RtpReceiverObserverInterface; }
namespace webrtc { class RtpSource; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace webrtc {

class AudioRtpReceiver {
public:
    // prevent constructor by default
    AudioRtpReceiver& operator=(AudioRtpReceiver const&);
    AudioRtpReceiver(AudioRtpReceiver const&);
    AudioRtpReceiver();

public:
    // NOLINTBEGIN
    // symbol: ?AttachmentId@AudioRtpReceiver@webrtc@@UEBAHXZ
    MCVAPI int AttachmentId() const;

    // symbol:
    // ?GetFrameDecryptor@AudioRtpReceiver@webrtc@@UEBA?AV?$scoped_refptr@VFrameDecryptorInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::FrameDecryptorInterface> GetFrameDecryptor() const;

    // symbol: ?GetParameters@AudioRtpReceiver@webrtc@@UEBA?AURtpParameters@2@XZ
    MCVAPI struct webrtc::RtpParameters GetParameters() const;

    // symbol:
    // ?GetSources@AudioRtpReceiver@webrtc@@UEBA?AV?$vector@VRtpSource@webrtc@@V?$allocator@VRtpSource@webrtc@@@std@@@std@@XZ
    MCVAPI std::vector<class webrtc::RtpSource> GetSources() const;

    // symbol: ?NotifyFirstPacketReceived@AudioRtpReceiver@webrtc@@UEAAXXZ
    MCVAPI void NotifyFirstPacketReceived();

    // symbol: ?OnChanged@AudioRtpReceiver@webrtc@@UEAAXXZ
    MCVAPI void OnChanged();

    // symbol: ?OnSetVolume@AudioRtpReceiver@webrtc@@UEAAXN@Z
    MCVAPI void OnSetVolume(double);

    // symbol:
    // ?SetDepacketizerToDecoderFrameTransformer@AudioRtpReceiver@webrtc@@UEAAXV?$scoped_refptr@VFrameTransformerInterface@webrtc@@@rtc@@@Z
    MCVAPI void
        SetDepacketizerToDecoderFrameTransformer(class rtc::scoped_refptr<class webrtc::FrameTransformerInterface>);

    // symbol:
    // ?SetFrameDecryptor@AudioRtpReceiver@webrtc@@UEAAXV?$scoped_refptr@VFrameDecryptorInterface@webrtc@@@rtc@@@Z
    MCVAPI void SetFrameDecryptor(class rtc::scoped_refptr<class webrtc::FrameDecryptorInterface>);

    // symbol: ?SetJitterBufferMinimumDelay@AudioRtpReceiver@webrtc@@UEAAXV?$optional@N@std@@@Z
    MCVAPI void SetJitterBufferMinimumDelay(std::optional<double>);

    // symbol: ?SetMediaChannel@AudioRtpReceiver@webrtc@@UEAAXPEAVMediaReceiveChannelInterface@cricket@@@Z
    MCVAPI void SetMediaChannel(class cricket::MediaReceiveChannelInterface*);

    // symbol: ?SetObserver@AudioRtpReceiver@webrtc@@UEAAXPEAVRtpReceiverObserverInterface@2@@Z
    MCVAPI void SetObserver(class webrtc::RtpReceiverObserverInterface*);

    // symbol:
    // ?SetStreams@AudioRtpReceiver@webrtc@@UEAAXAEBV?$vector@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@std@@@std@@@Z
    MCVAPI void SetStreams(std::vector<class rtc::scoped_refptr<class webrtc::MediaStreamInterface>> const&);

    // symbol: ?SetupMediaChannel@AudioRtpReceiver@webrtc@@UEAAXI@Z
    MCVAPI void SetupMediaChannel(uint);

    // symbol: ?SetupUnsignaledMediaChannel@AudioRtpReceiver@webrtc@@UEAAXXZ
    MCVAPI void SetupUnsignaledMediaChannel();

    // symbol: ?Stop@AudioRtpReceiver@webrtc@@UEAAXXZ
    MCVAPI void Stop();

    // symbol: ?dtls_transport@AudioRtpReceiver@webrtc@@UEBA?AV?$scoped_refptr@VDtlsTransportInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::DtlsTransportInterface> dtls_transport() const;

    // symbol: ?id@AudioRtpReceiver@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string id() const;

    // symbol: ?media_type@AudioRtpReceiver@webrtc@@UEBA?AW4MediaType@cricket@@XZ
    MCVAPI ::cricket::MediaType media_type() const;

    // symbol:
    // ?set_stream_ids@AudioRtpReceiver@webrtc@@UEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI void set_stream_ids(std::vector<std::string>);

    // symbol: ?set_transport@AudioRtpReceiver@webrtc@@UEAAXV?$scoped_refptr@VDtlsTransportInterface@webrtc@@@rtc@@@Z
    MCVAPI void set_transport(class rtc::scoped_refptr<class webrtc::DtlsTransportInterface>);

    // symbol: ?ssrc@AudioRtpReceiver@webrtc@@UEBA?AV?$optional@I@std@@XZ
    MCVAPI std::optional<uint> ssrc() const;

    // symbol:
    // ?stream_ids@AudioRtpReceiver@webrtc@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCVAPI std::vector<std::string> stream_ids() const;

    // symbol:
    // ?streams@AudioRtpReceiver@webrtc@@UEBA?AV?$vector@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@std@@@std@@XZ
    MCVAPI std::vector<class rtc::scoped_refptr<class webrtc::MediaStreamInterface>> streams() const;

    // symbol: ?track@AudioRtpReceiver@webrtc@@UEBA?AV?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface> track() const;

    // symbol: ??1AudioRtpReceiver@webrtc@@UEAA@XZ
    MCVAPI ~AudioRtpReceiver();

    // symbol:
    // ??0AudioRtpReceiver@webrtc@@QEAA@PEAVThread@rtc@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@_NPEAVVoiceMediaReceiveChannelInterface@cricket@@@Z
    MCAPI
    AudioRtpReceiver(class rtc::Thread*, std::string, std::vector<std::string>, bool, class cricket::VoiceMediaReceiveChannelInterface*);

    // symbol:
    // ??0AudioRtpReceiver@webrtc@@QEAA@PEAVThread@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@std@@@5@_NPEAVVoiceMediaReceiveChannelInterface@cricket@@@Z
    MCAPI
    AudioRtpReceiver(class rtc::Thread*, std::string const&, std::vector<class rtc::scoped_refptr<class webrtc::MediaStreamInterface>> const&, bool, class cricket::VoiceMediaReceiveChannelInterface*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?Reconfigure@AudioRtpReceiver@webrtc@@AEAAX_N@Z
    MCAPI void Reconfigure(bool);

    // symbol: ?RestartMediaChannel@AudioRtpReceiver@webrtc@@AEAAXV?$optional@I@std@@@Z
    MCAPI void RestartMediaChannel(std::optional<uint>);

    // symbol:
    // ?RestartMediaChannel_w@AudioRtpReceiver@webrtc@@AEAAXV?$optional@I@std@@_NW4SourceState@MediaSourceInterface@2@@Z
    MCAPI void RestartMediaChannel_w(std::optional<uint>, bool, ::webrtc::MediaSourceInterface::SourceState);

    // symbol: ?SetOutputVolume_w@AudioRtpReceiver@webrtc@@AEAAXN@Z
    MCAPI void SetOutputVolume_w(double);

    // NOLINTEND
};

}; // namespace webrtc
