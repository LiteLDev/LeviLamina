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

class MediaSessionDescriptionFactory {
public:
    // MediaSessionDescriptionFactory inner types declare
    // clang-format off
    struct AudioVideoRtpHeaderExtensions;
    // clang-format on
    
    // MediaSessionDescriptionFactory inner types define
    struct AudioVideoRtpHeaderExtensions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk7fdcd4;
        ::ll::UntypedStorage<8, 24> mUnkad270f;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        AudioVideoRtpHeaderExtensions& operator=(AudioVideoRtpHeaderExtensions const&);
        AudioVideoRtpHeaderExtensions(AudioVideoRtpHeaderExtensions const&);
        AudioVideoRtpHeaderExtensions();
    
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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk15a621;
    ::ll::UntypedStorage<8, 24> mUnk5a0c63;
    ::ll::UntypedStorage<8, 24> mUnk1a3484;
    ::ll::UntypedStorage<8, 24> mUnkecd24d;
    ::ll::UntypedStorage<8, 24> mUnk3eb33c;
    ::ll::UntypedStorage<8, 24> mUnkca3e96;
    ::ll::UntypedStorage<8, 24> mUnk4a3e45;
    ::ll::UntypedStorage<8, 24> mUnka77b06;
    ::ll::UntypedStorage<8, 24> mUnk8a77eb;
    ::ll::UntypedStorage<8, 16> mUnk1f0f2a;
    ::ll::UntypedStorage<1, 1> mUnk75c9cf;
    ::ll::UntypedStorage<8, 8> mUnk6b3133;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaSessionDescriptionFactory& operator=(MediaSessionDescriptionFactory const&);
    MediaSessionDescriptionFactory(MediaSessionDescriptionFactory const&);
    MediaSessionDescriptionFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCError AddDataContentForAnswer(::cricket::MediaDescriptionOptions const& media_description_options, ::cricket::MediaSessionOptions const& session_options, ::cricket::ContentInfo const* offer_content, ::cricket::SessionDescription const* offer_description, ::cricket::ContentInfo const* current_content, ::cricket::SessionDescription const* current_description, ::cricket::TransportInfo const* bundle_transport, ::std::vector<::cricket::StreamParams>* current_streams, ::cricket::SessionDescription* answer, ::cricket::IceCredentialsIterator* ice_credentials) const;

    MCNAPI ::webrtc::RTCError AddDataContentForOffer(::cricket::MediaDescriptionOptions const& media_description_options, ::cricket::MediaSessionOptions const& session_options, ::cricket::ContentInfo const* current_content, ::cricket::SessionDescription const* current_description, ::std::vector<::cricket::StreamParams>* current_streams, ::cricket::SessionDescription* desc, ::cricket::IceCredentialsIterator* ice_credentials) const;

    MCNAPI ::webrtc::RTCError AddRtpContentForAnswer(::cricket::MediaDescriptionOptions const& media_description_options, ::cricket::MediaSessionOptions const& session_options, ::cricket::ContentInfo const* offer_content, ::cricket::SessionDescription const* offer_description, ::cricket::ContentInfo const* current_content, ::cricket::SessionDescription const* current_description, ::cricket::TransportInfo const* bundle_transport, ::std::vector<::cricket::Codec> const& codecs, ::std::vector<::webrtc::RtpExtension> const& header_extensions, ::std::vector<::cricket::StreamParams>* current_streams, ::cricket::SessionDescription* answer, ::cricket::IceCredentialsIterator* ice_credentials) const;

    MCNAPI ::webrtc::RTCError AddRtpContentForOffer(::cricket::MediaDescriptionOptions const& media_description_options, ::cricket::MediaSessionOptions const& session_options, ::cricket::ContentInfo const* current_content, ::cricket::SessionDescription const* current_description, ::std::vector<::webrtc::RtpExtension> const& header_extensions, ::std::vector<::cricket::Codec> const& codecs, ::std::vector<::cricket::StreamParams>* current_streams, ::cricket::SessionDescription* session_description, ::cricket::IceCredentialsIterator* ice_credentials) const;

    MCNAPI ::webrtc::RTCError AddTransportAnswer(::std::string const& content_name, ::cricket::TransportDescription const& transport_desc, ::cricket::SessionDescription* answer_desc) const;

    MCNAPI ::webrtc::RTCError AddTransportOffer(::std::string const& content_name, ::cricket::TransportOptions const& transport_options, ::cricket::SessionDescription const* current_desc, ::cricket::SessionDescription* offer_desc, ::cricket::IceCredentialsIterator* ice_credentials) const;

    MCNAPI ::webrtc::RTCError AddUnsupportedContentForAnswer(::cricket::MediaDescriptionOptions const& media_description_options, ::cricket::MediaSessionOptions const& session_options, ::cricket::ContentInfo const* offer_content, ::cricket::SessionDescription const* offer_description, ::cricket::ContentInfo const* current_content, ::cricket::SessionDescription const* current_description, ::cricket::TransportInfo const* bundle_transport, ::cricket::SessionDescription* answer, ::cricket::IceCredentialsIterator* ice_credentials) const;

    MCNAPI ::webrtc::RTCError AddUnsupportedContentForOffer(::cricket::MediaDescriptionOptions const& media_description_options, ::cricket::MediaSessionOptions const& session_options, ::cricket::ContentInfo const* current_content, ::cricket::SessionDescription const* current_description, ::cricket::SessionDescription* desc, ::cricket::IceCredentialsIterator* ice_credentials) const;

    MCNAPI void ComputeAudioCodecsIntersectionAndUnion();

    MCNAPI void ComputeVideoCodecsIntersectionAndUnion();

    MCNAPI ::webrtc::RTCErrorOr<::std::unique_ptr<::cricket::SessionDescription>> CreateAnswerOrError(::cricket::SessionDescription const* offer, ::cricket::MediaSessionOptions const& session_options, ::cricket::SessionDescription const* current_description) const;

    MCNAPI ::webrtc::RTCErrorOr<::std::unique_ptr<::cricket::SessionDescription>> CreateOfferOrError(::cricket::MediaSessionOptions const& session_options, ::cricket::SessionDescription const* current_description) const;

    MCNAPI ::std::unique_ptr<::cricket::TransportDescription> CreateTransportAnswer(::std::string const& content_name, ::cricket::SessionDescription const* offer_desc, ::cricket::TransportOptions const& transport_options, ::cricket::SessionDescription const* current_desc, bool require_transport_attributes, ::cricket::IceCredentialsIterator* ice_credentials) const;

    MCNAPI ::std::vector<::cricket::Codec> const& GetAudioCodecsForAnswer(::webrtc::RtpTransceiverDirection const& offer, ::webrtc::RtpTransceiverDirection const& answer) const;

    MCNAPI ::std::vector<::cricket::Codec> const& GetAudioCodecsForOffer(::webrtc::RtpTransceiverDirection const& direction) const;

    MCNAPI void GetCodecsForAnswer(::std::vector<::cricket::ContentInfo const*> const& current_active_contents, ::cricket::SessionDescription const& remote_offer, ::std::vector<::cricket::Codec>* audio_codecs, ::std::vector<::cricket::Codec>* video_codecs) const;

    MCNAPI void GetCodecsForOffer(::std::vector<::cricket::ContentInfo const*> const& current_active_contents, ::std::vector<::cricket::Codec>* audio_codecs, ::std::vector<::cricket::Codec>* video_codecs) const;

    MCNAPI ::cricket::MediaSessionDescriptionFactory::AudioVideoRtpHeaderExtensions GetOfferedRtpHeaderExtensionsWithIds(::std::vector<::cricket::ContentInfo const*> const& current_active_contents, bool extmap_allow_mixed, ::std::vector<::cricket::MediaDescriptionOptions> const& media_description_options) const;

    MCNAPI ::std::vector<::cricket::Codec> const& GetVideoCodecsForAnswer(::webrtc::RtpTransceiverDirection const& offer, ::webrtc::RtpTransceiverDirection const& answer) const;

    MCNAPI ::std::vector<::cricket::Codec> const& GetVideoCodecsForOffer(::webrtc::RtpTransceiverDirection const& direction) const;

    MCNAPI MediaSessionDescriptionFactory(::cricket::MediaEngineInterface* media_engine, bool rtx_enabled, ::rtc::UniqueRandomIdGenerator* ssrc_generator, ::cricket::TransportDescriptionFactory const* transport_desc_factory);

    MCNAPI ::std::vector<::webrtc::RtpExtension> filtered_rtp_header_extensions(::std::vector<::webrtc::RtpExtension> extensions) const;

    MCNAPI ~MediaSessionDescriptionFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::MediaEngineInterface* media_engine, bool rtx_enabled, ::rtc::UniqueRandomIdGenerator* ssrc_generator, ::cricket::TransportDescriptionFactory const* transport_desc_factory);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
