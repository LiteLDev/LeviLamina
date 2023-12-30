#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/MediaSourceInterface.h"
#include "mc/deps/webrtc/RtpReceiverInternal.h"
#include "mc/deps/webrtc/VideoRtpTrackSource.h"
#include "mc/deps/webrtc/cricket/MediaType.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/rtc/VideoSinkInterface.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaReceiveChannelInterface; }
namespace rtc { class Thread; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class FrameDecryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpReceiverObserverInterface; }
namespace webrtc { class RtpSource; }
namespace webrtc { class VideoFrame; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace webrtc {

class VideoRtpReceiver : public ::webrtc::RtpReceiverInternal {
public:
    // VideoRtpReceiver inner types declare
    // clang-format off
    class SourceCallback;
    // clang-format on

    // VideoRtpReceiver inner types define
    class SourceCallback : public ::webrtc::VideoRtpTrackSource::Callback {
    public:
        // prevent constructor by default
        SourceCallback& operator=(SourceCallback const&);
        SourceCallback(SourceCallback const&);
        SourceCallback();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1SourceCallback@VideoRtpReceiver@webrtc@@UEAA@XZ
        virtual ~SourceCallback() = default;

        // vIndex: 1, symbol: ?OnGenerateKeyFrame@SourceCallback@VideoRtpReceiver@webrtc@@EEAAXXZ
        virtual void OnGenerateKeyFrame();

        // vIndex: 2, symbol: ?OnEncodedSinkEnabled@SourceCallback@VideoRtpReceiver@webrtc@@EEAAX_N@Z
        virtual void OnEncodedSinkEnabled(bool);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    VideoRtpReceiver& operator=(VideoRtpReceiver const&);
    VideoRtpReceiver(VideoRtpReceiver const&);
    VideoRtpReceiver();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1VideoRtpReceiver@webrtc@@UEAA@XZ
    virtual ~VideoRtpReceiver();

    // vIndex: 3, symbol:
    // ?track@VideoRtpReceiver@webrtc@@UEBA?AV?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@rtc@@XZ
    virtual class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface> track() const;

    // vIndex: 4, symbol:
    // ?dtls_transport@VideoRtpReceiver@webrtc@@UEBA?AV?$scoped_refptr@VDtlsTransportInterface@webrtc@@@rtc@@XZ
    virtual class rtc::scoped_refptr<class webrtc::DtlsTransportInterface> dtls_transport() const;

    // vIndex: 5, symbol:
    // ?stream_ids@VideoRtpReceiver@webrtc@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    virtual std::vector<std::string> stream_ids() const;

    // vIndex: 6, symbol:
    // ?streams@VideoRtpReceiver@webrtc@@UEBA?AV?$vector@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@std@@@std@@XZ
    virtual std::vector<class rtc::scoped_refptr<class webrtc::MediaStreamInterface>> streams() const;

    // vIndex: 7, symbol: ?media_type@VideoRtpReceiver@webrtc@@UEBA?AW4MediaType@cricket@@XZ
    virtual ::cricket::MediaType media_type() const;

    // vIndex: 8, symbol:
    // ?id@VideoRtpReceiver@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string id() const;

    // vIndex: 9, symbol: ?GetParameters@VideoRtpReceiver@webrtc@@UEBA?AURtpParameters@2@XZ
    virtual struct webrtc::RtpParameters GetParameters() const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: ?SetObserver@VideoRtpReceiver@webrtc@@UEAAXPEAVRtpReceiverObserverInterface@2@@Z
    virtual void SetObserver(class webrtc::RtpReceiverObserverInterface*);

    // vIndex: 12, symbol: ?SetJitterBufferMinimumDelay@VideoRtpReceiver@webrtc@@UEAAXV?$optional@N@std@@@Z
    virtual void SetJitterBufferMinimumDelay(std::optional<double>);

    // vIndex: 13, symbol:
    // ?GetSources@VideoRtpReceiver@webrtc@@UEBA?AV?$vector@VRtpSource@webrtc@@V?$allocator@VRtpSource@webrtc@@@std@@@std@@XZ
    virtual std::vector<class webrtc::RtpSource> GetSources() const;

    // vIndex: 14, symbol:
    // ?SetFrameDecryptor@VideoRtpReceiver@webrtc@@UEAAXV?$scoped_refptr@VFrameDecryptorInterface@webrtc@@@rtc@@@Z
    virtual void SetFrameDecryptor(class rtc::scoped_refptr<class webrtc::FrameDecryptorInterface>);

    // vIndex: 15, symbol:
    // ?GetFrameDecryptor@VideoRtpReceiver@webrtc@@UEBA?AV?$scoped_refptr@VFrameDecryptorInterface@webrtc@@@rtc@@XZ
    virtual class rtc::scoped_refptr<class webrtc::FrameDecryptorInterface> GetFrameDecryptor() const;

    // vIndex: 16, symbol:
    // ?SetDepacketizerToDecoderFrameTransformer@VideoRtpReceiver@webrtc@@UEAAXV?$scoped_refptr@VFrameTransformerInterface@webrtc@@@rtc@@@Z
    virtual void
        SetDepacketizerToDecoderFrameTransformer(class rtc::scoped_refptr<class webrtc::FrameTransformerInterface>);

    // vIndex: 17, symbol: ?Stop@VideoRtpReceiver@webrtc@@UEAAXXZ
    virtual void Stop();

    // vIndex: 18, symbol: ?SetMediaChannel@VideoRtpReceiver@webrtc@@UEAAXPEAVMediaReceiveChannelInterface@cricket@@@Z
    virtual void SetMediaChannel(class cricket::MediaReceiveChannelInterface*);

    // vIndex: 19, symbol: ?SetupMediaChannel@VideoRtpReceiver@webrtc@@UEAAXI@Z
    virtual void SetupMediaChannel(uint);

    // vIndex: 20, symbol: ?SetupUnsignaledMediaChannel@VideoRtpReceiver@webrtc@@UEAAXXZ
    virtual void SetupUnsignaledMediaChannel();

    // vIndex: 21, symbol:
    // ?set_transport@VideoRtpReceiver@webrtc@@UEAAXV?$scoped_refptr@VDtlsTransportInterface@webrtc@@@rtc@@@Z
    virtual void set_transport(class rtc::scoped_refptr<class webrtc::DtlsTransportInterface>);

    // vIndex: 22, symbol: ?ssrc@VideoRtpReceiver@webrtc@@UEBA?AV?$optional@I@std@@XZ
    virtual std::optional<uint> ssrc() const;

    // vIndex: 23, symbol: ?NotifyFirstPacketReceived@VideoRtpReceiver@webrtc@@UEAAXXZ
    virtual void NotifyFirstPacketReceived();

    // vIndex: 24, symbol:
    // ?set_stream_ids@VideoRtpReceiver@webrtc@@UEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual void set_stream_ids(std::vector<std::string>);

    // vIndex: 25, symbol:
    // ?SetStreams@VideoRtpReceiver@webrtc@@UEAAXAEBV?$vector@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@std@@@std@@@Z
    virtual void SetStreams(std::vector<class rtc::scoped_refptr<class webrtc::MediaStreamInterface>> const&);

    // vIndex: 26, symbol: ?AttachmentId@VideoRtpReceiver@webrtc@@UEBAHXZ
    virtual int AttachmentId() const;

    // symbol:
    // ?SetupMediaChannel@VideoRtpReceiver@webrtc@@QEAAXV?$optional@I@std@@PEAVMediaReceiveChannelInterface@cricket@@@Z
    MCAPI void SetupMediaChannel(std::optional<uint>, class cricket::MediaReceiveChannelInterface*);

    // symbol:
    // ??0VideoRtpReceiver@webrtc@@QEAA@PEAVThread@rtc@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
    MCAPI VideoRtpReceiver(class rtc::Thread*, std::string, std::vector<std::string>);

    // symbol:
    // ??0VideoRtpReceiver@webrtc@@QEAA@PEAVThread@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@std@@@5@@Z
    MCAPI
    VideoRtpReceiver(class rtc::Thread*, std::string const&, std::vector<class rtc::scoped_refptr<class webrtc::MediaStreamInterface>> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?OnEncodedSinkEnabled@VideoRtpReceiver@webrtc@@AEAAX_N@Z
    MCAPI void OnEncodedSinkEnabled(bool);

    // symbol: ?OnGenerateKeyFrame@VideoRtpReceiver@webrtc@@AEAAXXZ
    MCAPI void OnGenerateKeyFrame();

    // symbol: ?RestartMediaChannel@VideoRtpReceiver@webrtc@@AEAAXV?$optional@I@std@@@Z
    MCAPI void RestartMediaChannel(std::optional<uint>);

    // symbol:
    // ?RestartMediaChannel_w@VideoRtpReceiver@webrtc@@AEAAXV?$optional@I@std@@W4SourceState@MediaSourceInterface@2@@Z
    MCAPI void RestartMediaChannel_w(std::optional<uint>, ::webrtc::MediaSourceInterface::SourceState);

    // symbol: ?SetEncodedSinkEnabled@VideoRtpReceiver@webrtc@@AEAAX_N@Z
    MCAPI void SetEncodedSinkEnabled(bool);

    // symbol: ?SetMediaChannel_w@VideoRtpReceiver@webrtc@@AEAAXPEAVMediaReceiveChannelInterface@cricket@@@Z
    MCAPI void SetMediaChannel_w(class cricket::MediaReceiveChannelInterface*);

    // symbol: ?SetSink@VideoRtpReceiver@webrtc@@AEAAXPEAV?$VideoSinkInterface@VVideoFrame@webrtc@@@rtc@@@Z
    MCAPI void SetSink(class rtc::VideoSinkInterface<class webrtc::VideoFrame>*);

    // NOLINTEND
};

}; // namespace webrtc
