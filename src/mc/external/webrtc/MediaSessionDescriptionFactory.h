#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CodecLookupHelper; }
namespace webrtc { class ContentInfo; }
namespace webrtc { class IceCredentialsIterator; }
namespace webrtc { class MediaEngineInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class SessionDescription; }
namespace webrtc { class TransportDescriptionFactory; }
namespace webrtc { class UniqueRandomIdGenerator; }
namespace webrtc { struct MediaDescriptionOptions; }
namespace webrtc { struct MediaSessionOptions; }
namespace webrtc { struct RtpExtension; }
namespace webrtc { struct StreamParams; }
namespace webrtc { struct TransportDescription; }
namespace webrtc { struct TransportInfo; }
namespace webrtc { struct TransportOptions; }
// clang-format on

namespace webrtc {

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
        ::ll::UntypedStorage<8, 24> mUnk16f4f8;
        ::ll::UntypedStorage<8, 24> mUnkb87393;
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
    ::ll::UntypedStorage<1, 1>  mUnkafaf68;
    ::ll::UntypedStorage<8, 16> mUnk492b3f;
    ::ll::UntypedStorage<1, 1>  mUnk756cc7;
    ::ll::UntypedStorage<8, 8>  mUnk93c932;
    ::ll::UntypedStorage<8, 8>  mUnk73f0e1;
    ::ll::UntypedStorage<1, 1>  mUnk29be4f;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaSessionDescriptionFactory& operator=(MediaSessionDescriptionFactory const&);
    MediaSessionDescriptionFactory(MediaSessionDescriptionFactory const&);
    MediaSessionDescriptionFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCError AddDataContentForAnswer(
        ::webrtc::MediaDescriptionOptions const& media_description_options,
        ::webrtc::MediaSessionOptions const&     session_options,
        ::webrtc::ContentInfo const*             offer_content,
        ::webrtc::SessionDescription const*      offer_description,
        ::webrtc::ContentInfo const*             current_content,
        ::webrtc::SessionDescription const*      current_description,
        ::webrtc::TransportInfo const*           bundle_transport,
        ::std::vector<::webrtc::StreamParams>*   current_streams,
        ::webrtc::SessionDescription*            answer,
        ::webrtc::IceCredentialsIterator*        ice_credentials
    ) const;

    MCNAPI ::webrtc::RTCError AddDataContentForOffer(
        ::webrtc::MediaDescriptionOptions const& media_description_options,
        ::webrtc::MediaSessionOptions const&     session_options,
        ::webrtc::ContentInfo const*             current_content,
        ::webrtc::SessionDescription const*      current_description,
        ::std::vector<::webrtc::StreamParams>*   current_streams,
        ::webrtc::SessionDescription*            desc,
        ::webrtc::IceCredentialsIterator*        ice_credentials
    ) const;

    MCNAPI ::webrtc::RTCError AddRtpContentForAnswer(
        ::webrtc::MediaDescriptionOptions const&     media_description_options,
        ::webrtc::MediaSessionOptions const&         session_options,
        ::webrtc::ContentInfo const*                 offer_content,
        ::webrtc::SessionDescription const*          offer_description,
        ::webrtc::ContentInfo const*                 current_content,
        ::webrtc::SessionDescription const*          current_description,
        ::webrtc::TransportInfo const*               bundle_transport,
        ::std::vector<::webrtc::RtpExtension> const& header_extensions,
        ::std::vector<::webrtc::StreamParams>*       current_streams,
        ::webrtc::SessionDescription*                answer,
        ::webrtc::IceCredentialsIterator*            ice_credentials
    ) const;

    MCNAPI ::webrtc::RTCError AddRtpContentForOffer(
        ::webrtc::MediaDescriptionOptions const&     media_description_options,
        ::webrtc::MediaSessionOptions const&         session_options,
        ::webrtc::ContentInfo const*                 current_content,
        ::webrtc::SessionDescription const*          current_description,
        ::std::vector<::webrtc::RtpExtension> const& header_extensions,
        ::std::vector<::webrtc::StreamParams>*       current_streams,
        ::webrtc::SessionDescription*                session_description,
        ::webrtc::IceCredentialsIterator*            ice_credentials
    ) const;

    MCNAPI ::webrtc::RTCError AddTransportAnswer(
        ::std::string const&                  content_name,
        ::webrtc::TransportDescription const& transport_desc,
        ::webrtc::SessionDescription*         answer_desc
    ) const;

    MCNAPI ::webrtc::RTCError AddTransportOffer(
        ::std::string const&                content_name,
        ::webrtc::TransportOptions const&   transport_options,
        ::webrtc::SessionDescription const* current_desc,
        ::webrtc::SessionDescription*       offer_desc,
        ::webrtc::IceCredentialsIterator*   ice_credentials
    ) const;

    MCNAPI ::webrtc::RTCError AddUnsupportedContentForAnswer(
        ::webrtc::MediaDescriptionOptions const& media_description_options,
        ::webrtc::MediaSessionOptions const&     session_options,
        ::webrtc::ContentInfo const*             offer_content,
        ::webrtc::SessionDescription const*      offer_description,
        ::webrtc::ContentInfo const*             current_content,
        ::webrtc::SessionDescription const*      current_description,
        ::webrtc::TransportInfo const*           bundle_transport,
        ::webrtc::SessionDescription*            answer,
        ::webrtc::IceCredentialsIterator*        ice_credentials
    ) const;

    MCNAPI ::webrtc::RTCError AddUnsupportedContentForOffer(
        ::webrtc::MediaDescriptionOptions const& media_description_options,
        ::webrtc::MediaSessionOptions const&     session_options,
        ::webrtc::ContentInfo const*             current_content,
        ::webrtc::SessionDescription const*      current_description,
        ::webrtc::SessionDescription*            desc,
        ::webrtc::IceCredentialsIterator*        ice_credentials
    ) const;

    MCNAPI ::webrtc::RTCErrorOr<::std::unique_ptr<::webrtc::SessionDescription>> CreateAnswerOrError(
        ::webrtc::SessionDescription const*  offer,
        ::webrtc::MediaSessionOptions const& session_options,
        ::webrtc::SessionDescription const*  current_description
    ) const;

    MCNAPI ::webrtc::RTCErrorOr<::std::unique_ptr<::webrtc::SessionDescription>> CreateOfferOrError(
        ::webrtc::MediaSessionOptions const& session_options,
        ::webrtc::SessionDescription const*  current_description
    ) const;

    MCNAPI ::webrtc::MediaSessionDescriptionFactory::AudioVideoRtpHeaderExtensions GetOfferedRtpHeaderExtensionsWithIds(
        ::std::vector<::webrtc::ContentInfo const*> const&      current_active_contents,
        bool                                                    extmap_allow_mixed,
        ::std::vector<::webrtc::MediaDescriptionOptions> const& media_description_options
    ) const;

    MCNAPI MediaSessionDescriptionFactory(
        ::webrtc::MediaEngineInterface*              media_engine,
        bool                                         rtx_enabled,
        ::webrtc::UniqueRandomIdGenerator*           ssrc_generator,
        ::webrtc::TransportDescriptionFactory const* transport_desc_factory,
        ::webrtc::CodecLookupHelper*                 codec_lookup_helper
    );

    MCNAPI ::std::vector<::webrtc::RtpExtension>
    filtered_rtp_header_extensions(::std::vector<::webrtc::RtpExtension> extensions) const;

    MCNAPI ~MediaSessionDescriptionFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::MediaEngineInterface*              media_engine,
        bool                                         rtx_enabled,
        ::webrtc::UniqueRandomIdGenerator*           ssrc_generator,
        ::webrtc::TransportDescriptionFactory const* transport_desc_factory,
        ::webrtc::CodecLookupHelper*                 codec_lookup_helper
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
