#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/ObserverInterface.h"
#include "mc/external/webrtc/RtpSenderInternal.h"
#include "mc/external/webrtc/VideoEncoderFactory.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaSendChannelInterface; }
namespace cricket { struct Codec; }
namespace rtc { class Thread; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class FrameEncryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { struct RtpEncodingParameters; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace webrtc {

class RtpSenderBase : public ::webrtc::RtpSenderInternal, public ::webrtc::ObserverInterface {
public:
    // RtpSenderBase inner types declare
    // clang-format off
    class SetStreamsObserver;
    // clang-format on

    // RtpSenderBase inner types define
    class SetStreamsObserver {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~SetStreamsObserver() = default;

        // vIndex: 1
        virtual void OnSetStreams() = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkcfb04f;
    ::ll::UntypedStorage<8, 8>   mUnk4f7245;
    ::ll::UntypedStorage<4, 4>   mUnka71bc1;
    ::ll::UntypedStorage<1, 1>   mUnk3a48da;
    ::ll::UntypedStorage<1, 1>   mUnk6b9467;
    ::ll::UntypedStorage<4, 4>   mUnkec7d87;
    ::ll::UntypedStorage<8, 32>  mUnkeeca2f;
    ::ll::UntypedStorage<8, 24>  mUnkb1c1d7;
    ::ll::UntypedStorage<8, 192> mUnkd68b10;
    ::ll::UntypedStorage<8, 24>  mUnk871216;
    ::ll::UntypedStorage<8, 8>   mUnk1a7b11;
    ::ll::UntypedStorage<8, 8>   mUnkffabe7;
    ::ll::UntypedStorage<8, 8>   mUnk92bc60;
    ::ll::UntypedStorage<8, 8>   mUnke1b367;
    ::ll::UntypedStorage<8, 40>  mUnk2e12f7;
    ::ll::UntypedStorage<8, 24>  mUnk403096;
    ::ll::UntypedStorage<8, 8>   mUnk7d6a99;
    ::ll::UntypedStorage<8, 8>   mUnk3e58b8;
    ::ll::UntypedStorage<8, 8>   mUnk22488a;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpSenderBase& operator=(RtpSenderBase const&);
    RtpSenderBase(RtpSenderBase const&);
    RtpSenderBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 20
    virtual void SetMediaChannel(::cricket::MediaSendChannelInterface* media_channel) /*override*/;

    // vIndex: 3
    virtual bool SetTrack(::webrtc::MediaStreamTrackInterface* track) /*override*/;

    // vIndex: 4
    virtual ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track() const /*override*/;

    // vIndex: 12
    virtual ::webrtc::RtpParameters GetParameters() const /*override*/;

    // vIndex: 13
    virtual ::webrtc::RTCError SetParameters(::webrtc::RtpParameters const& parameters) /*override*/;

    // vIndex: 14
    virtual void SetParametersAsync(
        ::webrtc::RtpParameters const&                    parameters,
        ::absl::AnyInvocable<void(::webrtc::RTCError) &&> callback
    ) /*override*/;

    // vIndex: 26
    virtual ::webrtc::RtpParameters GetParametersInternal() const /*override*/;

    // vIndex: 27
    virtual void SetParametersInternal(
        ::webrtc::RtpParameters const&                    parameters,
        ::absl::AnyInvocable<void(::webrtc::RTCError) &&> callback,
        bool                                              blocking
    ) /*override*/;

    // vIndex: 30
    virtual ::webrtc::RTCError CheckCodecParameters(::webrtc::RtpParameters const& parameters) /*override*/;

    // vIndex: 28
    virtual ::webrtc::RtpParameters GetParametersInternalWithAllLayers() const /*override*/;

    // vIndex: 29
    virtual ::webrtc::RTCError
    SetParametersInternalWithAllLayers(::webrtc::RtpParameters const& parameters) /*override*/;

    // vIndex: 21
    virtual void SetSsrc(uint ssrc) /*override*/;

    // vIndex: 6
    virtual uint ssrc() const /*override*/;

    // vIndex: 9
    virtual ::std::vector<::std::string> stream_ids() const /*override*/;

    // vIndex: 22
    virtual void set_stream_ids(::std::vector<::std::string> const& stream_ids) /*override*/;

    // vIndex: 10
    virtual void SetStreams(::std::vector<::std::string> const& stream_ids) /*override*/;

    // vIndex: 8
    virtual ::std::string id() const /*override*/;

    // vIndex: 23
    virtual void
    set_init_send_encodings(::std::vector<::webrtc::RtpEncodingParameters> const& init_send_encodings) /*override*/;

    // vIndex: 11
    virtual ::std::vector<::webrtc::RtpEncodingParameters> init_send_encodings() const /*override*/;

    // vIndex: 24
    virtual void set_transport(::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport) /*override*/;

    // vIndex: 5
    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport() const /*override*/;

    // vIndex: 16
    virtual void
    SetFrameEncryptor(::webrtc::scoped_refptr<::webrtc::FrameEncryptorInterface> frame_encryptor) /*override*/;

    // vIndex: 17
    virtual ::webrtc::scoped_refptr<::webrtc::FrameEncryptorInterface> GetFrameEncryptor() const /*override*/;

    // vIndex: 25
    virtual void Stop() /*override*/;

    // vIndex: 31
    virtual int AttachmentId() const /*override*/;

    // vIndex: 32
    virtual ::webrtc::RTCError DisableEncodingLayers(::std::vector<::std::string> const& rids) /*override*/;

    // vIndex: 18
    virtual void SetEncoderToPacketizerFrameTransformer(
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer
    ) /*override*/;

    // vIndex: 19
    virtual void SetEncoderSelector(
        ::std::unique_ptr<::webrtc::VideoEncoderFactory::EncoderSelectorInterface> encoder_selector
    ) /*override*/;

    // vIndex: 33
    virtual void SetTransceiverAsStopped() /*override*/;

    // vIndex: 34
    virtual void SetSendCodecs(::std::vector<::cricket::Codec> send_codecs) /*override*/;

    // vIndex: 35
    virtual ::std::string track_kind() const = 0;

    // vIndex: 36
    virtual void SetSend() = 0;

    // vIndex: 37
    virtual void ClearSend() = 0;

    // vIndex: 38
    virtual void AttachTrack();

    // vIndex: 39
    virtual void DetachTrack();

    // vIndex: 40
    virtual void AddTrackToStats();

    // vIndex: 41
    virtual void RemoveTrackFromStats();

    // vIndex: 42
    virtual ::webrtc::RTCError GenerateKeyFrame(::std::vector<::std::string> const&) = 0;

    // vIndex: 1
    virtual ~RtpSenderBase() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCError CheckSetParameters(::webrtc::RtpParameters const& parameters);

    MCNAPI RtpSenderBase(
        ::rtc::Thread*                               worker_thread,
        ::std::string const&                         id,
        ::webrtc::RtpSenderBase::SetStreamsObserver* set_streams_observer
    );

    MCNAPI void SetEncoderSelectorOnChannel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::Thread*                               worker_thread,
        ::std::string const&                         id,
        ::webrtc::RtpSenderBase::SetStreamsObserver* set_streams_observer
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
    MCNAPI void $SetMediaChannel(::cricket::MediaSendChannelInterface* media_channel);

    MCNAPI bool $SetTrack(::webrtc::MediaStreamTrackInterface* track);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> $track() const;

    MCNAPI ::webrtc::RtpParameters $GetParameters() const;

    MCNAPI ::webrtc::RTCError $SetParameters(::webrtc::RtpParameters const& parameters);

    MCNAPI void $SetParametersAsync(
        ::webrtc::RtpParameters const&                    parameters,
        ::absl::AnyInvocable<void(::webrtc::RTCError) &&> callback
    );

    MCNAPI ::webrtc::RtpParameters $GetParametersInternal() const;

    MCNAPI void $SetParametersInternal(
        ::webrtc::RtpParameters const&                    parameters,
        ::absl::AnyInvocable<void(::webrtc::RTCError) &&> callback,
        bool                                              blocking
    );

    MCNAPI ::webrtc::RTCError $CheckCodecParameters(::webrtc::RtpParameters const& parameters);

    MCNAPI ::webrtc::RtpParameters $GetParametersInternalWithAllLayers() const;

    MCNAPI ::webrtc::RTCError $SetParametersInternalWithAllLayers(::webrtc::RtpParameters const& parameters);

    MCNAPI void $SetSsrc(uint ssrc);

    MCNAPI uint $ssrc() const;

    MCNAPI ::std::vector<::std::string> $stream_ids() const;

    MCNAPI void $set_stream_ids(::std::vector<::std::string> const& stream_ids);

    MCNAPI void $SetStreams(::std::vector<::std::string> const& stream_ids);

    MCNAPI ::std::string $id() const;

    MCNAPI void $set_init_send_encodings(::std::vector<::webrtc::RtpEncodingParameters> const& init_send_encodings);

    MCNAPI ::std::vector<::webrtc::RtpEncodingParameters> $init_send_encodings() const;

    MCNAPI void $set_transport(::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> $dtls_transport() const;

    MCNAPI void $SetFrameEncryptor(::webrtc::scoped_refptr<::webrtc::FrameEncryptorInterface> frame_encryptor);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::FrameEncryptorInterface> $GetFrameEncryptor() const;

    MCNAPI void $Stop();

    MCNAPI int $AttachmentId() const;

    MCNAPI ::webrtc::RTCError $DisableEncodingLayers(::std::vector<::std::string> const& rids);

    MCNAPI void $SetEncoderToPacketizerFrameTransformer(
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer
    );

    MCNAPI void
    $SetEncoderSelector(::std::unique_ptr<::webrtc::VideoEncoderFactory::EncoderSelectorInterface> encoder_selector);

    MCNAPI void $SetTransceiverAsStopped();

    MCNAPI void $SetSendCodecs(::std::vector<::cricket::Codec> send_codecs);

    MCNAPI void $AttachTrack();

    MCNAPI void $DetachTrack();

    MCNAPI void $AddTrackToStats();

    MCNAPI void $RemoveTrackFromStats();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRtpSenderInternal();

    MCNAPI static void** $vftableForObserverInterface();
    // NOLINTEND
};

} // namespace webrtc
