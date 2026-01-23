#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
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
        virtual ~SourceCallback() /*override*/ = default;

        virtual void OnGenerateKeyFrame() /*override*/;

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
    ::ll::UntypedStorage<1, 1>  mUnk6ff6a3;
    ::ll::UntypedStorage<8, 8>  mUnk2bb66b;
    ::ll::UntypedStorage<8, 32> mUnk56e8b7;
    ::ll::UntypedStorage<8, 8>  mUnka6f11c;
    ::ll::UntypedStorage<4, 8>  mUnk9acaf6;
    ::ll::UntypedStorage<8, 8>  mUnk440670;
    ::ll::UntypedStorage<8, 8>  mUnk8c5c73;
    ::ll::UntypedStorage<8, 24> mUnk4e21ef;
    ::ll::UntypedStorage<8, 8>  mUnkb0dc91;
    ::ll::UntypedStorage<1, 1>  mUnk195eca;
    ::ll::UntypedStorage<4, 4>  mUnkc3d1fa;
    ::ll::UntypedStorage<8, 8>  mUnkd0d634;
    ::ll::UntypedStorage<8, 8>  mUnkac204d;
    ::ll::UntypedStorage<8, 8>  mUnk708183;
    ::ll::UntypedStorage<8, 24> mUnk450de9;
    ::ll::UntypedStorage<1, 1>  mUnk7d9c00;
    ::ll::UntypedStorage<1, 1>  mUnkdd0d2d;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoRtpReceiver& operator=(VideoRtpReceiver const&);
    VideoRtpReceiver(VideoRtpReceiver const&);
    VideoRtpReceiver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoRtpReceiver() /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track() const /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport() const /*override*/;

    virtual ::std::vector<::std::string> stream_ids() const /*override*/;

    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> streams() const /*override*/;

    virtual ::cricket::MediaType media_type() const /*override*/;

    virtual ::std::string id() const /*override*/;

    virtual ::webrtc::RtpParameters GetParameters() const /*override*/;

    virtual void
    SetFrameDecryptor(::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface> frame_decryptor) /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface> GetFrameDecryptor() const /*override*/;

    virtual void SetDepacketizerToDecoderFrameTransformer(
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer
    ) /*override*/;

    virtual void Stop() /*override*/;

    virtual void SetupMediaChannel(uint ssrc) /*override*/;

    virtual void SetupUnsignaledMediaChannel() /*override*/;

    virtual ::std::optional<uint> ssrc() const /*override*/;

    virtual void NotifyFirstPacketReceived() /*override*/;

    virtual void set_stream_ids(::std::vector<::std::string> stream_ids) /*override*/;

    virtual void set_transport(::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport) /*override*/;

    virtual void
    SetStreams(::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams) /*override*/;

    virtual void SetObserver(::webrtc::RtpReceiverObserverInterface* observer) /*override*/;

    virtual void SetJitterBufferMinimumDelay(::std::optional<double> delay_seconds) /*override*/;

    virtual void SetMediaChannel(::cricket::MediaReceiveChannelInterface* media_channel) /*override*/;

    virtual int AttachmentId() const /*override*/;

    virtual ::std::vector<::webrtc::RtpSource> GetSources() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void RestartMediaChannel(::std::optional<uint> ssrc);

    MCNAPI void RestartMediaChannel_w(::std::optional<uint> ssrc, ::webrtc::MediaSourceInterface::SourceState state);

    MCNAPI void SetEncodedSinkEnabled(bool enable);

    MCNAPI void SetMediaChannel_w(::cricket::MediaReceiveChannelInterface* media_channel);

    MCNAPI void SetupMediaChannel(::std::optional<uint> ssrc, ::cricket::MediaReceiveChannelInterface* media_channel);

    MCNAPI
    VideoRtpReceiver(::rtc::Thread* worker_thread, ::std::string receiver_id, ::std::vector<::std::string> stream_ids);

    MCNAPI VideoRtpReceiver(
        ::rtc::Thread*                                                                worker_thread,
        ::std::string const&                                                          receiver_id,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::rtc::Thread* worker_thread, ::std::string receiver_id, ::std::vector<::std::string> stream_ids);

    MCNAPI void* $ctor(
        ::rtc::Thread*                                                                worker_thread,
        ::std::string const&                                                          receiver_id,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams
    );
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

    MCNAPI void $SetDepacketizerToDecoderFrameTransformer(
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer
    );

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

} // namespace webrtc
