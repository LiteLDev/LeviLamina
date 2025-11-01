#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/AudioSourceInterface.h"
#include "mc/external/webrtc/MediaSourceInterface.h"
#include "mc/external/webrtc/ObserverInterface.h"
#include "mc/external/webrtc/RtpReceiverInternal.h"
#include "mc/external/webrtc/scoped_refptr.h"

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

class AudioRtpReceiver : public ::webrtc::ObserverInterface,
                         public ::webrtc::AudioSourceInterface::AudioObserver,
                         public ::webrtc::RtpReceiverInternal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk14aa39;
    ::ll::UntypedStorage<8, 8>  mUnk82ccea;
    ::ll::UntypedStorage<8, 32> mUnk88ab15;
    ::ll::UntypedStorage<8, 8>  mUnk40ee5a;
    ::ll::UntypedStorage<8, 8>  mUnke945c6;
    ::ll::UntypedStorage<8, 8>  mUnk4f90e9;
    ::ll::UntypedStorage<4, 8>  mUnk9e29a4;
    ::ll::UntypedStorage<8, 24> mUnkc767e7;
    ::ll::UntypedStorage<1, 1>  mUnk5c7f82;
    ::ll::UntypedStorage<8, 8>  mUnk11ae2e;
    ::ll::UntypedStorage<8, 8>  mUnka0a6ee;
    ::ll::UntypedStorage<1, 1>  mUnk6a1869;
    ::ll::UntypedStorage<4, 4>  mUnk85ffda;
    ::ll::UntypedStorage<8, 8>  mUnk184b1d;
    ::ll::UntypedStorage<8, 8>  mUnk32eabd;
    ::ll::UntypedStorage<8, 24> mUnk5908ad;
    ::ll::UntypedStorage<8, 8>  mUnk36d93d;
    ::ll::UntypedStorage<8, 8>  mUnk20684a;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioRtpReceiver& operator=(AudioRtpReceiver const&);
    AudioRtpReceiver(AudioRtpReceiver const&);
    AudioRtpReceiver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~AudioRtpReceiver() /*override*/;

    // vIndex: 0
    virtual void OnChanged() /*override*/;

    // vIndex: 0
    virtual void OnSetVolume(double volume) /*override*/;

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
    virtual void
    SetFrameDecryptor(::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface> frame_decryptor) /*override*/;

    // vIndex: 15
    virtual ::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface> GetFrameDecryptor() const /*override*/;

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
    virtual void
    SetStreams(::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams) /*override*/;

    // vIndex: 11
    virtual void SetObserver(::webrtc::RtpReceiverObserverInterface* observer) /*override*/;

    // vIndex: 12
    virtual void SetJitterBufferMinimumDelay(::std::optional<double> delay_seconds) /*override*/;

    // vIndex: 18
    virtual void SetMediaChannel(::cricket::MediaReceiveChannelInterface* media_channel) /*override*/;

    // vIndex: 13
    virtual ::std::vector<::webrtc::RtpSource> GetSources() const /*override*/;

    // vIndex: 26
    virtual int AttachmentId() const /*override*/;

    // vIndex: 16
    virtual void SetDepacketizerToDecoderFrameTransformer(
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AudioRtpReceiver(
        ::rtc::Thread*                                worker_thread,
        ::std::string                                 receiver_id,
        ::std::vector<::std::string>                  stream_ids,
        bool                                          is_unified_plan,
        ::cricket::VoiceMediaReceiveChannelInterface* voice_channel
    );

    MCNAPI AudioRtpReceiver(
        ::rtc::Thread*                                                                worker_thread,
        ::std::string const&                                                          receiver_id,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams,
        bool                                                                          is_unified_plan,
        ::cricket::VoiceMediaReceiveChannelInterface*                                 voice_channel
    );

    MCNAPI void Reconfigure(bool track_enabled);

    MCNAPI void RestartMediaChannel(::std::optional<uint> ssrc);

    MCNAPI void RestartMediaChannel_w(
        ::std::optional<uint>                       ssrc,
        bool                                        track_enabled,
        ::webrtc::MediaSourceInterface::SourceState state
    );

    MCNAPI void SetOutputVolume_w(double volume);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::Thread*                                worker_thread,
        ::std::string                                 receiver_id,
        ::std::vector<::std::string>                  stream_ids,
        bool                                          is_unified_plan,
        ::cricket::VoiceMediaReceiveChannelInterface* voice_channel
    );

    MCNAPI void* $ctor(
        ::rtc::Thread*                                                                worker_thread,
        ::std::string const&                                                          receiver_id,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams,
        bool                                                                          is_unified_plan,
        ::cricket::VoiceMediaReceiveChannelInterface*                                 voice_channel
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
    MCNAPI void $OnChanged();

    MCNAPI void $OnSetVolume(double volume);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> $track() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> $dtls_transport() const;

    MCNAPI ::std::vector<::std::string> $stream_ids() const;

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> $streams() const;

    MCNAPI ::cricket::MediaType $media_type() const;

    MCNAPI ::std::string $id() const;

    MCNAPI ::webrtc::RtpParameters $GetParameters() const;

    MCNAPI void $SetFrameDecryptor(::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface> frame_decryptor);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface> $GetFrameDecryptor() const;

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

    MCNAPI ::std::vector<::webrtc::RtpSource> $GetSources() const;

    MCNAPI int $AttachmentId() const;

    MCNAPI void $SetDepacketizerToDecoderFrameTransformer(
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForAudioObserver();

    MCNAPI static void** $vftableForRtpReceiverInternal();

    MCNAPI static void** $vftableForObserverInterface();
    // NOLINTEND
};

} // namespace webrtc
