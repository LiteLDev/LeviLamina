#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/rtc/VideoSinkInterface.h"
#include "mc/external/webrtc/MediaSourceInterface.h"
#include "mc/external/webrtc/RtpReceiverInternal.h"
#include "mc/external/webrtc/VideoRtpTrackSource.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaReceiveChannelInterface; }
namespace rtc { class Thread; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class FrameDecryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk8f0419;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        SourceCallback& operator=(SourceCallback const&);
        SourceCallback(SourceCallback const&);
        SourceCallback();
    
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~SourceCallback() /*override*/ = default;
    
        // vIndex: 1
        virtual void OnGenerateKeyFrame() /*override*/;
    
        // vIndex: 2
        virtual void OnEncodedSinkEnabled(bool enable) /*override*/;
        // NOLINTEND
    
    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $OnGenerateKeyFrame();
    
        MCNAPI void $OnEncodedSinkEnabled(bool enable);
        // NOLINTEND
    
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkcde5a1;
    ::ll::UntypedStorage<1, 1> mUnk6ff6a3;
    ::ll::UntypedStorage<8, 8> mUnk2bb66b;
    ::ll::UntypedStorage<8, 32> mUnk56e8b7;
    ::ll::UntypedStorage<8, 8> mUnka6f11c;
    ::ll::UntypedStorage<4, 8> mUnk9acaf6;
    ::ll::UntypedStorage<8, 8> mUnk440670;
    ::ll::UntypedStorage<8, 8> mUnk8c5c73;
    ::ll::UntypedStorage<8, 24> mUnk4e21ef;
    ::ll::UntypedStorage<8, 8> mUnkb0dc91;
    ::ll::UntypedStorage<1, 1> mUnk195eca;
    ::ll::UntypedStorage<4, 4> mUnkc3d1fa;
    ::ll::UntypedStorage<8, 8> mUnkd0d634;
    ::ll::UntypedStorage<8, 8> mUnkac204d;
    ::ll::UntypedStorage<8, 8> mUnk708183;
    ::ll::UntypedStorage<8, 24> mUnk450de9;
    ::ll::UntypedStorage<1, 1> mUnk7d9c00;
    ::ll::UntypedStorage<1, 1> mUnkdd0d2d;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoRtpReceiver& operator=(VideoRtpReceiver const&);
    VideoRtpReceiver(VideoRtpReceiver const&);
    VideoRtpReceiver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~VideoRtpReceiver() /*override*/;

    // vIndex: 3
    virtual ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track() const /*override*/;

    // vIndex: 4
    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport() const /*override*/;

    // vIndex: 5
    virtual ::std::vector<::std::string> stream_ids() const /*override*/;

    // vIndex: 6
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> streams() const /*override*/;

    // vIndex: 7
    virtual ::cricket::MediaType media_type() const /*override*/;

    // vIndex: 8
    virtual ::std::string id() const /*override*/;

    // vIndex: 9
    virtual ::webrtc::RtpParameters GetParameters() const /*override*/;

    // vIndex: 14
    virtual void SetFrameDecryptor(::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface> frame_decryptor) /*override*/;

    // vIndex: 15
    virtual ::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface> GetFrameDecryptor() const /*override*/;

    // vIndex: 16
    virtual void SetDepacketizerToDecoderFrameTransformer(::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer) /*override*/;

    // vIndex: 17
    virtual void Stop() /*override*/;

    // vIndex: 19
    virtual void SetupMediaChannel(uint ssrc) /*override*/;

    // vIndex: 20
    virtual void SetupUnsignaledMediaChannel() /*override*/;

    // vIndex: 22
    virtual ::std::optional<uint> ssrc() const /*override*/;

    // vIndex: 23
    virtual void NotifyFirstPacketReceived() /*override*/;

    // vIndex: 24
    virtual void set_stream_ids(::std::vector<::std::string> stream_ids) /*override*/;

    // vIndex: 21
    virtual void set_transport(::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport) /*override*/;

    // vIndex: 25
    virtual void SetStreams(::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams) /*override*/;

    // vIndex: 11
    virtual void SetObserver(::webrtc::RtpReceiverObserverInterface* observer) /*override*/;

    // vIndex: 12
    virtual void SetJitterBufferMinimumDelay(::std::optional<double> delay_seconds) /*override*/;

    // vIndex: 18
    virtual void SetMediaChannel(::cricket::MediaReceiveChannelInterface* media_channel) /*override*/;

    // vIndex: 26
    virtual int AttachmentId() const /*override*/;

    // vIndex: 13
    virtual ::std::vector<::webrtc::RtpSource> GetSources() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void OnEncodedSinkEnabled(bool enable);

    MCNAPI void OnGenerateKeyFrame();

    MCNAPI void RestartMediaChannel(::std::optional<uint> ssrc);

    MCNAPI void RestartMediaChannel_w(::std::optional<uint> ssrc, ::webrtc::MediaSourceInterface::SourceState state);

    MCNAPI void SetEncodedSinkEnabled(bool enable);

    MCNAPI void SetMediaChannel_w(::cricket::MediaReceiveChannelInterface* media_channel);

    MCNAPI void SetSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink);

    MCNAPI void SetupMediaChannel(::std::optional<uint> ssrc, ::cricket::MediaReceiveChannelInterface* media_channel);

    MCNAPI VideoRtpReceiver(::rtc::Thread* worker_thread, ::std::string receiver_id, ::std::vector<::std::string> stream_ids);

    MCNAPI VideoRtpReceiver(::rtc::Thread* worker_thread, ::std::string const& receiver_id, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Thread* worker_thread, ::std::string receiver_id, ::std::vector<::std::string> stream_ids);

    MCNAPI void* $ctor(::rtc::Thread* worker_thread, ::std::string const& receiver_id, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> $track() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> $dtls_transport() const;

    MCNAPI ::std::vector<::std::string> $stream_ids() const;

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> $streams() const;

    MCNAPI ::cricket::MediaType $media_type() const;

    MCNAPI ::std::string $id() const;

    MCNAPI ::webrtc::RtpParameters $GetParameters() const;

    MCNAPI void $SetFrameDecryptor(::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface> frame_decryptor);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface> $GetFrameDecryptor() const;

    MCNAPI void $SetDepacketizerToDecoderFrameTransformer(::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer);

    MCNAPI void $Stop();

    MCNAPI void $SetupMediaChannel(uint ssrc);

    MCNAPI void $SetupUnsignaledMediaChannel();

    MCNAPI ::std::optional<uint> $ssrc() const;

    MCNAPI void $NotifyFirstPacketReceived();

    MCNAPI void $set_stream_ids(::std::vector<::std::string> stream_ids);

    MCNAPI void $set_transport(::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport);

    MCNAPI void $SetStreams(::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams);

    MCNAPI void $SetObserver(::webrtc::RtpReceiverObserverInterface* observer);

    MCNAPI void $SetJitterBufferMinimumDelay(::std::optional<double> delay_seconds);

    MCNAPI void $SetMediaChannel(::cricket::MediaReceiveChannelInterface* media_channel);

    MCNAPI int $AttachmentId() const;

    MCNAPI ::std::vector<::webrtc::RtpSource> $GetSources() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
