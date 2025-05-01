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
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AudioVideoRtpHeaderExtensions();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::
        RTCError
        AddDataContentForAnswer(::cricket::MediaDescriptionOptions const&, ::cricket::MediaSessionOptions const&, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::TransportInfo const*, ::std::vector<::cricket::StreamParams>*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
            const;

    MCNAPI ::webrtc::RTCError
    AddDataContentForOffer(::cricket::MediaDescriptionOptions const&, ::cricket::MediaSessionOptions const&, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::std::vector<::cricket::StreamParams>*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
        const;

    MCNAPI ::webrtc::RTCError AddRtpContentForAnswer(::cricket::MediaDescriptionOptions const&, ::cricket::MediaSessionOptions const&, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::TransportInfo const*, ::std::vector<::cricket::Codec> const&, ::std::vector<::webrtc::RtpExtension> const&, ::std::vector<::cricket::StreamParams>*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
        const;

    MCNAPI ::webrtc::RTCError AddRtpContentForOffer(::cricket::MediaDescriptionOptions const&, ::cricket::MediaSessionOptions const&, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::std::vector<::webrtc::RtpExtension> const&, ::std::vector<::cricket::Codec> const&, ::std::vector<::cricket::StreamParams>*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
        const;

    MCNAPI ::webrtc::RTCError
    AddTransportAnswer(::std::string const&, ::cricket::TransportDescription const&, ::cricket::SessionDescription*)
        const;

    MCNAPI ::webrtc::RTCError
    AddTransportOffer(::std::string const&, ::cricket::TransportOptions const&, ::cricket::SessionDescription const*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
        const;

    MCNAPI ::webrtc::RTCError
    AddUnsupportedContentForAnswer(::cricket::MediaDescriptionOptions const&, ::cricket::MediaSessionOptions const&, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::TransportInfo const*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
        const;

    MCNAPI ::webrtc::RTCError
    AddUnsupportedContentForOffer(::cricket::MediaDescriptionOptions const&, ::cricket::MediaSessionOptions const&, ::cricket::ContentInfo const*, ::cricket::SessionDescription const*, ::cricket::SessionDescription*, ::cricket::IceCredentialsIterator*)
        const;

    MCNAPI void ComputeAudioCodecsIntersectionAndUnion();

    MCNAPI void ComputeVideoCodecsIntersectionAndUnion();

    MCNAPI ::webrtc::RTCErrorOr<::std::unique_ptr<::cricket::SessionDescription>>
    CreateAnswerOrError(::cricket::SessionDescription const*, ::cricket::MediaSessionOptions const&, ::cricket::SessionDescription const*)
        const;

    MCNAPI ::webrtc::RTCErrorOr<::std::unique_ptr<::cricket::SessionDescription>>
    CreateOfferOrError(::cricket::MediaSessionOptions const&, ::cricket::SessionDescription const*) const;

    MCNAPI ::std::unique_ptr<::cricket::TransportDescription>
    CreateTransportAnswer(::std::string const&, ::cricket::SessionDescription const*, ::cricket::TransportOptions const&, ::cricket::SessionDescription const*, bool, ::cricket::IceCredentialsIterator*)
        const;

    MCNAPI ::std::vector<::cricket::Codec> const&
    GetAudioCodecsForAnswer(::webrtc::RtpTransceiverDirection const&, ::webrtc::RtpTransceiverDirection const&) const;

    MCNAPI ::std::vector<::cricket::Codec> const&
    GetAudioCodecsForOffer(::webrtc::RtpTransceiverDirection const&) const;

    MCNAPI void
    GetCodecsForAnswer(::std::vector<::cricket::ContentInfo const*> const&, ::cricket::SessionDescription const&, ::std::vector<::cricket::Codec>*, ::std::vector<::cricket::Codec>*)
        const;

    MCNAPI void
    GetCodecsForOffer(::std::vector<::cricket::ContentInfo const*> const&, ::std::vector<::cricket::Codec>*, ::std::vector<::cricket::Codec>*)
        const;

    MCNAPI ::cricket::MediaSessionDescriptionFactory::AudioVideoRtpHeaderExtensions
    GetOfferedRtpHeaderExtensionsWithIds(::std::vector<::cricket::ContentInfo const*> const&, bool, ::std::vector<::cricket::MediaDescriptionOptions> const&)
        const;

    MCNAPI ::std::vector<::cricket::Codec> const&
    GetVideoCodecsForAnswer(::webrtc::RtpTransceiverDirection const&, ::webrtc::RtpTransceiverDirection const&) const;

    MCNAPI ::std::vector<::cricket::Codec> const&
    GetVideoCodecsForOffer(::webrtc::RtpTransceiverDirection const&) const;

    MCNAPI
    MediaSessionDescriptionFactory(::cricket::MediaEngineInterface*, bool, ::rtc::UniqueRandomIdGenerator*, ::cricket::TransportDescriptionFactory const*);

    MCNAPI ::std::vector<::webrtc::RtpExtension>
        filtered_rtp_header_extensions(::std::vector<::webrtc::RtpExtension>) const;

    MCNAPI ~MediaSessionDescriptionFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::cricket::MediaEngineInterface*, bool, ::rtc::UniqueRandomIdGenerator*, ::cricket::TransportDescriptionFactory const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
