#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/AnyInvocable.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaSendChannelInterface; }
namespace cricket { struct VideoCodec; }
namespace rtc { class Thread; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class FrameEncryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { struct RtpEncodingParameters; }
namespace webrtc { struct RtpParameters; }
namespace webrtc::VideoEncoderFactory { class EncoderSelectorInterface; }
// clang-format on

namespace webrtc {

class RtpSenderBase {
public:
    // RtpSenderBase inner types declare
    // clang-format off
    class SetStreamsObserver;
    // clang-format on

    // RtpSenderBase inner types define
    class SetStreamsObserver {
    public:
        // prevent constructor by default
        SetStreamsObserver& operator=(SetStreamsObserver const&);
        SetStreamsObserver(SetStreamsObserver const&);
        SetStreamsObserver();
    };

public:
    // prevent constructor by default
    RtpSenderBase& operator=(RtpSenderBase const&);
    RtpSenderBase(RtpSenderBase const&);
    RtpSenderBase();

public:
    // NOLINTBEGIN
    // symbol: ?AddTrackToStats@RtpSenderBase@webrtc@@MEAAXXZ
    MCVAPI void AddTrackToStats();

    // symbol: ?AttachTrack@RtpSenderBase@webrtc@@MEAAXXZ
    MCVAPI void AttachTrack();

    // symbol: ?AttachmentId@RtpSenderBase@webrtc@@UEBAHXZ
    MCVAPI int AttachmentId() const;

    // symbol: ?DetachTrack@RtpSenderBase@webrtc@@MEAAXXZ
    MCVAPI void DetachTrack();

    // symbol:
    // ?DisableEncodingLayers@RtpSenderBase@webrtc@@UEAA?AVRTCError@2@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI class webrtc::RTCError DisableEncodingLayers(std::vector<std::string> const&);

    // symbol: ?GetFrameEncryptor@RtpSenderBase@webrtc@@UEBA?AV?$scoped_refptr@VFrameEncryptorInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::FrameEncryptorInterface> GetFrameEncryptor() const;

    // symbol: ?GetParameters@RtpSenderBase@webrtc@@UEBA?AURtpParameters@2@XZ
    MCVAPI struct webrtc::RtpParameters GetParameters() const;

    // symbol: ?GetParametersInternal@RtpSenderBase@webrtc@@UEBA?AURtpParameters@2@XZ
    MCVAPI struct webrtc::RtpParameters GetParametersInternal() const;

    // symbol: ?GetParametersInternalWithAllLayers@RtpSenderBase@webrtc@@UEBA?AURtpParameters@2@XZ
    MCVAPI struct webrtc::RtpParameters GetParametersInternalWithAllLayers() const;

    // symbol: ?RemoveTrackFromStats@RtpSenderBase@webrtc@@MEAAXXZ
    MCVAPI void RemoveTrackFromStats();

    // symbol:
    // ?SetEncoderSelector@RtpSenderBase@webrtc@@UEAAXV?$unique_ptr@VEncoderSelectorInterface@VideoEncoderFactory@webrtc@@U?$default_delete@VEncoderSelectorInterface@VideoEncoderFactory@webrtc@@@std@@@std@@@Z
    MCVAPI void SetEncoderSelector(std::unique_ptr<class webrtc::VideoEncoderFactory::EncoderSelectorInterface>);

    // symbol:
    // ?SetEncoderToPacketizerFrameTransformer@RtpSenderBase@webrtc@@UEAAXV?$scoped_refptr@VFrameTransformerInterface@webrtc@@@rtc@@@Z
    MCVAPI void
        SetEncoderToPacketizerFrameTransformer(class rtc::scoped_refptr<class webrtc::FrameTransformerInterface>);

    // symbol: ?SetFrameEncryptor@RtpSenderBase@webrtc@@UEAAXV?$scoped_refptr@VFrameEncryptorInterface@webrtc@@@rtc@@@Z
    MCVAPI void SetFrameEncryptor(class rtc::scoped_refptr<class webrtc::FrameEncryptorInterface>);

    // symbol: ?SetMediaChannel@RtpSenderBase@webrtc@@UEAAXPEAVMediaSendChannelInterface@cricket@@@Z
    MCVAPI void SetMediaChannel(class cricket::MediaSendChannelInterface*);

    // symbol: ?SetParameters@RtpSenderBase@webrtc@@UEAA?AVRTCError@2@AEBURtpParameters@2@@Z
    MCVAPI class webrtc::RTCError SetParameters(struct webrtc::RtpParameters const&);

    // symbol:
    // ?SetParametersAsync@RtpSenderBase@webrtc@@UEAAXAEBURtpParameters@2@V?$AnyInvocable@$$A8@@EHAAXVRTCError@webrtc@@@Z@absl@@@Z
    MCVAPI void
    SetParametersAsync(struct webrtc::RtpParameters const&, class absl::AnyInvocable<void(class webrtc::RTCError) &&>);

    // symbol:
    // ?SetParametersInternal@RtpSenderBase@webrtc@@UEAAXAEBURtpParameters@2@V?$AnyInvocable@$$A8@@EHAAXVRTCError@webrtc@@@Z@absl@@_N@Z
    MCVAPI void SetParametersInternal(
        struct webrtc::RtpParameters const&,
        class absl::AnyInvocable<void(class webrtc::RTCError) &&>,
        bool
    );

    // symbol: ?SetParametersInternalWithAllLayers@RtpSenderBase@webrtc@@UEAA?AVRTCError@2@AEBURtpParameters@2@@Z
    MCVAPI class webrtc::RTCError SetParametersInternalWithAllLayers(struct webrtc::RtpParameters const&);

    // symbol: ?SetSsrc@RtpSenderBase@webrtc@@UEAAXI@Z
    MCVAPI void SetSsrc(uint);

    // symbol:
    // ?SetStreams@RtpSenderBase@webrtc@@UEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI void SetStreams(std::vector<std::string> const&);

    // symbol: ?SetTrack@RtpSenderBase@webrtc@@UEAA_NPEAVMediaStreamTrackInterface@2@@Z
    MCVAPI bool SetTrack(class webrtc::MediaStreamTrackInterface*);

    // symbol: ?SetTransceiverAsStopped@RtpSenderBase@webrtc@@UEAAXXZ
    MCVAPI void SetTransceiverAsStopped();

    // symbol:
    // ?SetVideoCodecPreferences@RtpSenderBase@webrtc@@UEAAXV?$vector@UVideoCodec@cricket@@V?$allocator@UVideoCodec@cricket@@@std@@@std@@@Z
    MCVAPI void SetVideoCodecPreferences(std::vector<struct cricket::VideoCodec>);

    // symbol: ?Stop@RtpSenderBase@webrtc@@UEAAXXZ
    MCVAPI void Stop();

    // symbol: ?dtls_transport@RtpSenderBase@webrtc@@UEBA?AV?$scoped_refptr@VDtlsTransportInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::DtlsTransportInterface> dtls_transport() const;

    // symbol: ?id@RtpSenderBase@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string id() const;

    // symbol:
    // ?init_send_encodings@RtpSenderBase@webrtc@@UEBA?AV?$vector@URtpEncodingParameters@webrtc@@V?$allocator@URtpEncodingParameters@webrtc@@@std@@@std@@XZ
    MCVAPI std::vector<struct webrtc::RtpEncodingParameters> init_send_encodings() const;

    // symbol:
    // ?set_init_send_encodings@RtpSenderBase@webrtc@@UEAAXAEBV?$vector@URtpEncodingParameters@webrtc@@V?$allocator@URtpEncodingParameters@webrtc@@@std@@@std@@@Z
    MCVAPI void set_init_send_encodings(std::vector<struct webrtc::RtpEncodingParameters> const&);

    // symbol:
    // ?set_stream_ids@RtpSenderBase@webrtc@@UEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI void set_stream_ids(std::vector<std::string> const&);

    // symbol: ?set_transport@RtpSenderBase@webrtc@@UEAAXV?$scoped_refptr@VDtlsTransportInterface@webrtc@@@rtc@@@Z
    MCVAPI void set_transport(class rtc::scoped_refptr<class webrtc::DtlsTransportInterface>);

    // symbol: ?ssrc@RtpSenderBase@webrtc@@UEBAIXZ
    MCVAPI uint ssrc() const;

    // symbol:
    // ?stream_ids@RtpSenderBase@webrtc@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCVAPI std::vector<std::string> stream_ids() const;

    // symbol: ?track@RtpSenderBase@webrtc@@UEBA?AV?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface> track() const;

    // symbol: ??1RtpSenderBase@webrtc@@UEAA@XZ
    MCVAPI ~RtpSenderBase();

    // symbol: ?CheckSetParameters@RtpSenderBase@webrtc@@QEAA?AVRTCError@2@AEBURtpParameters@2@@Z
    MCAPI class webrtc::RTCError CheckSetParameters(struct webrtc::RtpParameters const&);

    // symbol: ?SetEncoderSelectorOnChannel@RtpSenderBase@webrtc@@QEAAXXZ
    MCAPI void SetEncoderSelectorOnChannel();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0RtpSenderBase@webrtc@@IEAA@PEAVThread@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVSetStreamsObserver@01@@Z
    MCAPI RtpSenderBase(class rtc::Thread*, std::string const&, class webrtc::RtpSenderBase::SetStreamsObserver*);

    // NOLINTEND
};

}; // namespace webrtc
