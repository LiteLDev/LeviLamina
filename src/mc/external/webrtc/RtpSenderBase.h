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
        virtual ~SetStreamsObserver() = default;

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
    virtual void SetMediaChannel(::cricket::MediaSendChannelInterface* media_channel) /*override*/;

    virtual bool SetTrack(::webrtc::MediaStreamTrackInterface* track) /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track() const /*override*/;

    virtual ::webrtc::RtpParameters GetParameters() const /*override*/;

    virtual ::webrtc::RTCError SetParameters(::webrtc::RtpParameters const& parameters) /*override*/;

    virtual void SetParametersAsync(
        ::webrtc::RtpParameters const&                    parameters,
        ::absl::AnyInvocable<void(::webrtc::RTCError) &&> callback
    ) /*override*/;

    virtual ::webrtc::RtpParameters GetParametersInternal() const /*override*/;

    virtual void SetParametersInternal(
        ::webrtc::RtpParameters const&                    parameters,
        ::absl::AnyInvocable<void(::webrtc::RTCError) &&> callback,
        bool                                              blocking
    ) /*override*/;

    virtual ::webrtc::RTCError CheckCodecParameters(::webrtc::RtpParameters const& parameters) /*override*/;

    virtual ::webrtc::RtpParameters GetParametersInternalWithAllLayers() const /*override*/;

    virtual ::webrtc::RTCError
    SetParametersInternalWithAllLayers(::webrtc::RtpParameters const& parameters) /*override*/;

    virtual void SetSsrc(uint ssrc) /*override*/;

    virtual uint ssrc() const /*override*/;

    virtual ::std::vector<::std::string> stream_ids() const /*override*/;

    virtual void set_stream_ids(::std::vector<::std::string> const& stream_ids) /*override*/;

    virtual void SetStreams(::std::vector<::std::string> const& stream_ids) /*override*/;

    virtual ::std::string id() const /*override*/;

    virtual void
    set_init_send_encodings(::std::vector<::webrtc::RtpEncodingParameters> const& init_send_encodings) /*override*/;

    virtual ::std::vector<::webrtc::RtpEncodingParameters> init_send_encodings() const /*override*/;

    virtual void set_transport(::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport) /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport() const /*override*/;

    virtual void
    SetFrameEncryptor(::webrtc::scoped_refptr<::webrtc::FrameEncryptorInterface> frame_encryptor) /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::FrameEncryptorInterface> GetFrameEncryptor() const /*override*/;

    virtual void Stop() /*override*/;

    virtual int AttachmentId() const /*override*/;

    virtual ::webrtc::RTCError DisableEncodingLayers(::std::vector<::std::string> const& rids) /*override*/;

    virtual void SetEncoderToPacketizerFrameTransformer(
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer
    ) /*override*/;

    virtual void SetEncoderSelector(
        ::std::unique_ptr<::webrtc::VideoEncoderFactory::EncoderSelectorInterface> encoder_selector
    ) /*override*/;

    virtual void SetTransceiverAsStopped() /*override*/;

    virtual void SetSendCodecs(::std::vector<::cricket::Codec> send_codecs) /*override*/;

    virtual ::std::string track_kind() const = 0;

    virtual void SetSend() = 0;

    virtual void ClearSend() = 0;

    virtual void AttachTrack();

    virtual void DetachTrack();

    virtual void AddTrackToStats();

    virtual void RemoveTrackFromStats();

    virtual ::webrtc::RTCError GenerateKeyFrame(::std::vector<::std::string> const&) = 0;

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
