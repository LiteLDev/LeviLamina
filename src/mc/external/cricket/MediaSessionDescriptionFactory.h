#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class ContentInfo; }
namespace cricket { class IceCredentialsIterator; }
namespace cricket { class MediaEngineInterface; }
namespace cricket { class SessionDescription; }
namespace cricket { class TransportDescriptionFactory; }
namespace cricket { struct Codec; }
namespace cricket { struct MediaDescriptionOptions; }
namespace cricket { struct MediaSessionOptions; }
namespace cricket { struct StreamParams; }
namespace cricket { struct TransportDescription; }
namespace cricket { struct TransportInfo; }
namespace cricket { struct TransportOptions; }
namespace rtc { class UniqueRandomIdGenerator; }
namespace webrtc { class RTCError; }
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace cricket {

struct MediaSessionDescriptionFactory {
public:
    // MediaSessionDescriptionFactory inner types declare
    // clang-format off
    struct AudioVideoRtpHeaderExtensions;
    // clang-format on

    // MediaSessionDescriptionFactory inner types define
    struct AudioVideoRtpHeaderExtensions {
    public:
        // prevent constructor by default
        AudioVideoRtpHeaderExtensions& operator=(AudioVideoRtpHeaderExtensions const&);
        AudioVideoRtpHeaderExtensions(AudioVideoRtpHeaderExtensions const&);
        AudioVideoRtpHeaderExtensions();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~AudioVideoRtpHeaderExtensions();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    MediaSessionDescriptionFactory& operator=(MediaSessionDescriptionFactory const&);
    MediaSessionDescriptionFactory(MediaSessionDescriptionFactory const&);
    MediaSessionDescriptionFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::
        RTCError
        AddDataContentForAnswer(::cricket::MediaDescriptionOptions const&, ::cricket::MediaSessionOptions const&, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::TransportInfo const*, ::std::vector<::cricket::StreamParams>*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
            const;

    MCAPI ::webrtc::RTCError
    AddDataContentForOffer(::cricket::MediaDescriptionOptions const&, ::cricket::MediaSessionOptions const&, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::std::vector<::cricket::StreamParams>*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
        const;

    MCAPI ::webrtc::RTCError AddRtpContentForAnswer(::cricket::MediaDescriptionOptions const&, ::cricket::MediaSessionOptions const&, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::TransportInfo const*, ::std::vector<::cricket::Codec> const&, ::std::vector<::webrtc::RtpExtension> const&, ::std::vector<::cricket::StreamParams>*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
        const;

    MCAPI ::webrtc::RTCError AddRtpContentForOffer(::cricket::MediaDescriptionOptions const&, ::cricket::MediaSessionOptions const&, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::std::vector<::webrtc::RtpExtension> const&, ::std::vector<::cricket::Codec> const&, ::std::vector<::cricket::StreamParams>*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
        const;

    MCAPI ::webrtc::RTCError
    AddTransportAnswer(::std::string const&, ::cricket::TransportDescription const&, ::cricket::SessionDescription*)
        const;

    MCAPI ::webrtc::RTCError
    AddTransportOffer(::std::string const&, ::cricket::TransportOptions const&, ::cricket::SessionDescription const*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
        const;

    MCAPI ::webrtc::RTCError
    AddUnsupportedContentForAnswer(::cricket::MediaDescriptionOptions const&, ::cricket::MediaSessionOptions const&, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::TransportInfo const*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
        const;

    MCAPI ::webrtc::RTCError
    AddUnsupportedContentForOffer(::cricket::MediaDescriptionOptions const&, ::cricket::MediaSessionOptions const&, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
        const;

    MCAPI void ComputeAudioCodecsIntersectionAndUnion();

    MCAPI void ComputeVideoCodecsIntersectionAndUnion();

    MCAPI ::webrtc::RTCErrorOr<::std::unique_ptr<::cricket::SessionDescription>>
    CreateAnswerOrError(::cricket::SessionDescription const*, ::cricket::MediaSessionOptions const&, ::cricket::SessionDescription const*)
        const;

    MCAPI ::webrtc::RTCErrorOr<::std::unique_ptr<::cricket::SessionDescription>>
    CreateOfferOrError(::cricket::MediaSessionOptions const&, ::cricket::SessionDescription const*) const;

    MCAPI ::std::unique_ptr<::cricket::TransportDescription>
    CreateTransportAnswer(::std::string const&, ::cricket::SessionDescription const*, ::cricket::TransportOptions const&, ::cricket::SessionDescription const*, bool, ::cricket::IceCredentialsIterator*)
        const;

    MCAPI ::std::vector<::cricket::Codec> const&
    GetAudioCodecsForAnswer(::webrtc::RtpTransceiverDirection const&, ::webrtc::RtpTransceiverDirection const&) const;

    MCAPI ::std::vector<::cricket::Codec> const& GetAudioCodecsForOffer(::webrtc::RtpTransceiverDirection const&) const;

    MCAPI void
    GetCodecsForAnswer(::std::vector<::cricket::ContentInfo const*> const&, ::cricket::SessionDescription const&, ::std::vector<::cricket::Codec>*, ::std::vector<::cricket::Codec>*)
        const;

    MCAPI void
    GetCodecsForOffer(::std::vector<::cricket::ContentInfo const*> const&, ::std::vector<::cricket::Codec>*, ::std::vector<::cricket::Codec>*)
        const;

    MCAPI ::cricket::MediaSessionDescriptionFactory::AudioVideoRtpHeaderExtensions
    GetOfferedRtpHeaderExtensionsWithIds(::std::vector<::cricket::ContentInfo const*> const&, bool, ::std::vector<::cricket::MediaDescriptionOptions> const&)
        const;

    MCAPI ::std::vector<::cricket::Codec> const&
    GetVideoCodecsForAnswer(::webrtc::RtpTransceiverDirection const&, ::webrtc::RtpTransceiverDirection const&) const;

    MCAPI ::std::vector<::cricket::Codec> const& GetVideoCodecsForOffer(::webrtc::RtpTransceiverDirection const&) const;

    MCAPI
    MediaSessionDescriptionFactory(::cricket::MediaEngineInterface*, bool, ::rtc::UniqueRandomIdGenerator*, ::cricket::TransportDescriptionFactory const*);

    MCAPI ::std::vector<::webrtc::RtpExtension>
        filtered_rtp_header_extensions(::std::vector<::webrtc::RtpExtension>) const;

    MCAPI ~MediaSessionDescriptionFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::cricket::MediaEngineInterface*, bool, ::rtc::UniqueRandomIdGenerator*, ::cricket::TransportDescriptionFactory const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
