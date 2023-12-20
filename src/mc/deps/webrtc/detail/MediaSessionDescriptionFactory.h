#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpTransceiverDirection.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class ContentInfo; }
namespace cricket { class IceCredentialsIterator; }
namespace cricket { class MediaEngineInterface; }
namespace cricket { class SessionDescription; }
namespace cricket { class TransportDescriptionFactory; }
namespace cricket { struct AudioCodec; }
namespace cricket { struct MediaDescriptionOptions; }
namespace cricket { struct MediaSessionOptions; }
namespace cricket { struct StreamParams; }
namespace cricket { struct TransportDescription; }
namespace cricket { struct TransportInfo; }
namespace cricket { struct TransportOptions; }
namespace cricket { struct VideoCodec; }
namespace rtc { class UniqueRandomIdGenerator; }
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
        // prevent constructor by default
        AudioVideoRtpHeaderExtensions& operator=(AudioVideoRtpHeaderExtensions const&);
        AudioVideoRtpHeaderExtensions(AudioVideoRtpHeaderExtensions const&);
        AudioVideoRtpHeaderExtensions();

    public:
        // NOLINTBEGIN
        // symbol: ??1AudioVideoRtpHeaderExtensions@MediaSessionDescriptionFactory@cricket@@QEAA@XZ
        MCAPI ~AudioVideoRtpHeaderExtensions();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    MediaSessionDescriptionFactory& operator=(MediaSessionDescriptionFactory const&);
    MediaSessionDescriptionFactory(MediaSessionDescriptionFactory const&);
    MediaSessionDescriptionFactory();

public:
    // NOLINTBEGIN
    // symbol:
    // ?CreateAnswer@MediaSessionDescriptionFactory@cricket@@QEBA?AV?$unique_ptr@VSessionDescription@cricket@@U?$default_delete@VSessionDescription@cricket@@@std@@@std@@PEBVSessionDescription@2@AEBUMediaSessionOptions@2@0@Z
    MCAPI std::unique_ptr<class cricket::SessionDescription>
    CreateAnswer(class cricket::SessionDescription const*, struct cricket::MediaSessionOptions const&, class cricket::SessionDescription const*)
        const;

    // symbol:
    // ?CreateOffer@MediaSessionDescriptionFactory@cricket@@QEBA?AV?$unique_ptr@VSessionDescription@cricket@@U?$default_delete@VSessionDescription@cricket@@@std@@@std@@AEBUMediaSessionOptions@2@PEBVSessionDescription@2@@Z
    MCAPI std::unique_ptr<class cricket::SessionDescription>
          CreateOffer(struct cricket::MediaSessionOptions const&, class cricket::SessionDescription const*) const;

    // symbol:
    // ??0MediaSessionDescriptionFactory@cricket@@QEAA@PEBVTransportDescriptionFactory@1@PEAVUniqueRandomIdGenerator@rtc@@@Z
    MCAPI
    MediaSessionDescriptionFactory(class cricket::TransportDescriptionFactory const*, class rtc::UniqueRandomIdGenerator*);

    // symbol:
    // ??0MediaSessionDescriptionFactory@cricket@@QEAA@PEAVMediaEngineInterface@1@_NPEAVUniqueRandomIdGenerator@rtc@@PEBVTransportDescriptionFactory@1@@Z
    MCAPI
    MediaSessionDescriptionFactory(class cricket::MediaEngineInterface*, bool, class rtc::UniqueRandomIdGenerator*, class cricket::TransportDescriptionFactory const*);

    // symbol:
    // ?filtered_rtp_header_extensions@MediaSessionDescriptionFactory@cricket@@QEBA?AV?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@std@@V34@@Z
    MCAPI std::vector<struct webrtc::RtpExtension>
          filtered_rtp_header_extensions(std::vector<struct webrtc::RtpExtension>) const;

    // symbol: ??1MediaSessionDescriptionFactory@cricket@@QEAA@XZ
    MCAPI ~MediaSessionDescriptionFactory();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?AddAudioContentForAnswer@MediaSessionDescriptionFactory@cricket@@AEBA_NAEBUMediaDescriptionOptions@2@AEBUMediaSessionOptions@2@PEBVContentInfo@2@PEBVSessionDescription@2@23PEBUTransportInfo@2@AEBV?$vector@UAudioCodec@cricket@@V?$allocator@UAudioCodec@cricket@@@std@@@std@@AEBV?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@9@PEAV?$vector@UStreamParams@cricket@@V?$allocator@UStreamParams@cricket@@@std@@@9@PEAV62@PEAVIceCredentialsIterator@2@@Z
    MCAPI bool AddAudioContentForAnswer(struct cricket::MediaDescriptionOptions const&, struct cricket::MediaSessionOptions const&, class cricket::ContentInfo const*, class cricket::SessionDescription const*, class cricket::ContentInfo const*, class cricket::SessionDescription const*, struct cricket::TransportInfo const*, std::vector<struct cricket::AudioCodec> const&, std::vector<struct webrtc::RtpExtension> const&, std::vector<struct cricket::StreamParams>*, class cricket::SessionDescription*, class cricket::IceCredentialsIterator*)
        const;

    // symbol:
    // ?AddAudioContentForOffer@MediaSessionDescriptionFactory@cricket@@AEBA_NAEBUMediaDescriptionOptions@2@AEBUMediaSessionOptions@2@PEBVContentInfo@2@PEBVSessionDescription@2@AEBV?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@std@@AEBV?$vector@UAudioCodec@cricket@@V?$allocator@UAudioCodec@cricket@@@std@@@8@PEAV?$vector@UStreamParams@cricket@@V?$allocator@UStreamParams@cricket@@@std@@@8@PEAV62@PEAVIceCredentialsIterator@2@@Z
    MCAPI bool AddAudioContentForOffer(struct cricket::MediaDescriptionOptions const&, struct cricket::MediaSessionOptions const&, class cricket::ContentInfo const*, class cricket::SessionDescription const*, std::vector<struct webrtc::RtpExtension> const&, std::vector<struct cricket::AudioCodec> const&, std::vector<struct cricket::StreamParams>*, class cricket::SessionDescription*, class cricket::IceCredentialsIterator*)
        const;

    // symbol:
    // ?AddDataContentForAnswer@MediaSessionDescriptionFactory@cricket@@AEBA_NAEBUMediaDescriptionOptions@2@AEBUMediaSessionOptions@2@PEBVContentInfo@2@PEBVSessionDescription@2@23PEBUTransportInfo@2@PEAV?$vector@UStreamParams@cricket@@V?$allocator@UStreamParams@cricket@@@std@@@std@@PEAV62@PEAVIceCredentialsIterator@2@@Z
    MCAPI bool
    AddDataContentForAnswer(struct cricket::MediaDescriptionOptions const&, struct cricket::MediaSessionOptions const&, class cricket::ContentInfo const*, class cricket::SessionDescription const*, class cricket::ContentInfo const*, class cricket::SessionDescription const*, struct cricket::TransportInfo const*, std::vector<struct cricket::StreamParams>*, class cricket::SessionDescription*, class cricket::IceCredentialsIterator*)
        const;

    // symbol:
    // ?AddDataContentForOffer@MediaSessionDescriptionFactory@cricket@@AEBA_NAEBUMediaDescriptionOptions@2@AEBUMediaSessionOptions@2@PEBVContentInfo@2@PEBVSessionDescription@2@PEAV?$vector@UStreamParams@cricket@@V?$allocator@UStreamParams@cricket@@@std@@@std@@PEAV62@PEAVIceCredentialsIterator@2@@Z
    MCAPI bool
    AddDataContentForOffer(struct cricket::MediaDescriptionOptions const&, struct cricket::MediaSessionOptions const&, class cricket::ContentInfo const*, class cricket::SessionDescription const*, std::vector<struct cricket::StreamParams>*, class cricket::SessionDescription*, class cricket::IceCredentialsIterator*)
        const;

    // symbol:
    // ?AddTransportAnswer@MediaSessionDescriptionFactory@cricket@@AEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUTransportDescription@2@PEAVSessionDescription@2@@Z
    MCAPI bool
    AddTransportAnswer(std::string const&, struct cricket::TransportDescription const&, class cricket::SessionDescription*)
        const;

    // symbol:
    // ?AddTransportOffer@MediaSessionDescriptionFactory@cricket@@AEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUTransportOptions@2@PEBVSessionDescription@2@PEAV62@PEAVIceCredentialsIterator@2@@Z
    MCAPI bool
    AddTransportOffer(std::string const&, struct cricket::TransportOptions const&, class cricket::SessionDescription const*, class cricket::SessionDescription*, class cricket::IceCredentialsIterator*)
        const;

    // symbol:
    // ?AddUnsupportedContentForAnswer@MediaSessionDescriptionFactory@cricket@@AEBA_NAEBUMediaDescriptionOptions@2@AEBUMediaSessionOptions@2@PEBVContentInfo@2@PEBVSessionDescription@2@23PEBUTransportInfo@2@PEAV62@PEAVIceCredentialsIterator@2@@Z
    MCAPI bool
    AddUnsupportedContentForAnswer(struct cricket::MediaDescriptionOptions const&, struct cricket::MediaSessionOptions const&, class cricket::ContentInfo const*, class cricket::SessionDescription const*, class cricket::ContentInfo const*, class cricket::SessionDescription const*, struct cricket::TransportInfo const*, class cricket::SessionDescription*, class cricket::IceCredentialsIterator*)
        const;

    // symbol:
    // ?AddUnsupportedContentForOffer@MediaSessionDescriptionFactory@cricket@@AEBA_NAEBUMediaDescriptionOptions@2@AEBUMediaSessionOptions@2@PEBVContentInfo@2@PEBVSessionDescription@2@PEAV62@PEAVIceCredentialsIterator@2@@Z
    MCAPI bool
    AddUnsupportedContentForOffer(struct cricket::MediaDescriptionOptions const&, struct cricket::MediaSessionOptions const&, class cricket::ContentInfo const*, class cricket::SessionDescription const*, class cricket::SessionDescription*, class cricket::IceCredentialsIterator*)
        const;

    // symbol:
    // ?AddVideoContentForAnswer@MediaSessionDescriptionFactory@cricket@@AEBA_NAEBUMediaDescriptionOptions@2@AEBUMediaSessionOptions@2@PEBVContentInfo@2@PEBVSessionDescription@2@23PEBUTransportInfo@2@AEBV?$vector@UVideoCodec@cricket@@V?$allocator@UVideoCodec@cricket@@@std@@@std@@AEBV?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@9@PEAV?$vector@UStreamParams@cricket@@V?$allocator@UStreamParams@cricket@@@std@@@9@PEAV62@PEAVIceCredentialsIterator@2@@Z
    MCAPI bool AddVideoContentForAnswer(struct cricket::MediaDescriptionOptions const&, struct cricket::MediaSessionOptions const&, class cricket::ContentInfo const*, class cricket::SessionDescription const*, class cricket::ContentInfo const*, class cricket::SessionDescription const*, struct cricket::TransportInfo const*, std::vector<struct cricket::VideoCodec> const&, std::vector<struct webrtc::RtpExtension> const&, std::vector<struct cricket::StreamParams>*, class cricket::SessionDescription*, class cricket::IceCredentialsIterator*)
        const;

    // symbol:
    // ?AddVideoContentForOffer@MediaSessionDescriptionFactory@cricket@@AEBA_NAEBUMediaDescriptionOptions@2@AEBUMediaSessionOptions@2@PEBVContentInfo@2@PEBVSessionDescription@2@AEBV?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@std@@AEBV?$vector@UVideoCodec@cricket@@V?$allocator@UVideoCodec@cricket@@@std@@@8@PEAV?$vector@UStreamParams@cricket@@V?$allocator@UStreamParams@cricket@@@std@@@8@PEAV62@PEAVIceCredentialsIterator@2@@Z
    MCAPI bool AddVideoContentForOffer(struct cricket::MediaDescriptionOptions const&, struct cricket::MediaSessionOptions const&, class cricket::ContentInfo const*, class cricket::SessionDescription const*, std::vector<struct webrtc::RtpExtension> const&, std::vector<struct cricket::VideoCodec> const&, std::vector<struct cricket::StreamParams>*, class cricket::SessionDescription*, class cricket::IceCredentialsIterator*)
        const;

    // symbol: ?ComputeAudioCodecsIntersectionAndUnion@MediaSessionDescriptionFactory@cricket@@AEAAXXZ
    MCAPI void ComputeAudioCodecsIntersectionAndUnion();

    // symbol: ?ComputeVideoCodecsIntersectionAndUnion@MediaSessionDescriptionFactory@cricket@@AEAAXXZ
    MCAPI void ComputeVideoCodecsIntersectionAndUnion();

    // symbol:
    // ?CreateTransportAnswer@MediaSessionDescriptionFactory@cricket@@AEBA?AV?$unique_ptr@UTransportDescription@cricket@@U?$default_delete@UTransportDescription@cricket@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@PEBVSessionDescription@2@AEBUTransportOptions@2@1_NPEAVIceCredentialsIterator@2@@Z
    MCAPI std::unique_ptr<struct cricket::TransportDescription>
    CreateTransportAnswer(std::string const&, class cricket::SessionDescription const*, struct cricket::TransportOptions const&, class cricket::SessionDescription const*, bool, class cricket::IceCredentialsIterator*)
        const;

    // symbol:
    // ?GetAudioCodecsForAnswer@MediaSessionDescriptionFactory@cricket@@AEBAAEBV?$vector@UAudioCodec@cricket@@V?$allocator@UAudioCodec@cricket@@@std@@@std@@AEBW4RtpTransceiverDirection@webrtc@@0@Z
    MCAPI std::vector<struct cricket::AudioCodec> const&
    GetAudioCodecsForAnswer(::webrtc::RtpTransceiverDirection const&, ::webrtc::RtpTransceiverDirection const&) const;

    // symbol:
    // ?GetAudioCodecsForOffer@MediaSessionDescriptionFactory@cricket@@AEBAAEBV?$vector@UAudioCodec@cricket@@V?$allocator@UAudioCodec@cricket@@@std@@@std@@AEBW4RtpTransceiverDirection@webrtc@@@Z
    MCAPI std::vector<struct cricket::AudioCodec> const&
          GetAudioCodecsForOffer(::webrtc::RtpTransceiverDirection const&) const;

    // symbol:
    // ?GetCodecsForAnswer@MediaSessionDescriptionFactory@cricket@@AEBAXAEBV?$vector@PEBVContentInfo@cricket@@V?$allocator@PEBVContentInfo@cricket@@@std@@@std@@AEBVSessionDescription@2@PEAV?$vector@UAudioCodec@cricket@@V?$allocator@UAudioCodec@cricket@@@std@@@4@PEAV?$vector@UVideoCodec@cricket@@V?$allocator@UVideoCodec@cricket@@@std@@@4@@Z
    MCAPI void
    GetCodecsForAnswer(std::vector<class cricket::ContentInfo const*> const&, class cricket::SessionDescription const&, std::vector<struct cricket::AudioCodec>*, std::vector<struct cricket::VideoCodec>*)
        const;

    // symbol:
    // ?GetCodecsForOffer@MediaSessionDescriptionFactory@cricket@@AEBAXAEBV?$vector@PEBVContentInfo@cricket@@V?$allocator@PEBVContentInfo@cricket@@@std@@@std@@PEAV?$vector@UAudioCodec@cricket@@V?$allocator@UAudioCodec@cricket@@@std@@@4@PEAV?$vector@UVideoCodec@cricket@@V?$allocator@UVideoCodec@cricket@@@std@@@4@@Z
    MCAPI void
    GetCodecsForOffer(std::vector<class cricket::ContentInfo const*> const&, std::vector<struct cricket::AudioCodec>*, std::vector<struct cricket::VideoCodec>*)
        const;

    // symbol:
    // ?GetOfferedRtpHeaderExtensionsWithIds@MediaSessionDescriptionFactory@cricket@@AEBA?AUAudioVideoRtpHeaderExtensions@12@AEBV?$vector@PEBVContentInfo@cricket@@V?$allocator@PEBVContentInfo@cricket@@@std@@@std@@_NAEBV?$vector@UMediaDescriptionOptions@cricket@@V?$allocator@UMediaDescriptionOptions@cricket@@@std@@@5@@Z
    MCAPI struct cricket::MediaSessionDescriptionFactory::AudioVideoRtpHeaderExtensions
    GetOfferedRtpHeaderExtensionsWithIds(std::vector<class cricket::ContentInfo const*> const&, bool, std::vector<struct cricket::MediaDescriptionOptions> const&)
        const;

    // symbol:
    // ?GetVideoCodecsForAnswer@MediaSessionDescriptionFactory@cricket@@AEBAAEBV?$vector@UVideoCodec@cricket@@V?$allocator@UVideoCodec@cricket@@@std@@@std@@AEBW4RtpTransceiverDirection@webrtc@@0@Z
    MCAPI std::vector<struct cricket::VideoCodec> const&
    GetVideoCodecsForAnswer(::webrtc::RtpTransceiverDirection const&, ::webrtc::RtpTransceiverDirection const&) const;

    // symbol:
    // ?GetVideoCodecsForOffer@MediaSessionDescriptionFactory@cricket@@AEBAAEBV?$vector@UVideoCodec@cricket@@V?$allocator@UVideoCodec@cricket@@@std@@@std@@AEBW4RtpTransceiverDirection@webrtc@@@Z
    MCAPI std::vector<struct cricket::VideoCodec> const&
          GetVideoCodecsForOffer(::webrtc::RtpTransceiverDirection const&) const;

    // NOLINTEND
};

}; // namespace cricket
