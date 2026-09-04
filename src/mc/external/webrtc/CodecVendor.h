#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CodecList; }
namespace webrtc { class ContentInfo; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class MediaEngineInterface; }
namespace webrtc { class PayloadTypeSuggester; }
namespace webrtc { struct Codec; }
namespace webrtc { struct MediaDescriptionOptions; }
namespace webrtc { struct MediaSessionOptions; }
// clang-format on

namespace webrtc {

class CodecVendor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4eed55;
    ::ll::UntypedStorage<8, 24> mUnk5bdd6b;
    ::ll::UntypedStorage<8, 24> mUnka0d50e;
    ::ll::UntypedStorage<8, 24> mUnk897f8c;
    // NOLINTEND

public:
    // prevent constructor by default
    CodecVendor& operator=(CodecVendor const&);
    CodecVendor(CodecVendor const&);
    CodecVendor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CodecVendor(
        ::webrtc::MediaEngineInterface*  media_engine,
        bool                             rtx_enabled,
        ::webrtc::FieldTrialsView const& trials
    );

    MCNAPI ::webrtc::CodecList GetAudioCodecsForOffer(::webrtc::RtpTransceiverDirection const& direction) const;

    MCNAPI ::webrtc::RTCErrorOr<::std::vector<::webrtc::Codec>> GetNegotiatedCodecsForAnswer(
        ::webrtc::MediaDescriptionOptions const& media_description_options,
        ::webrtc::MediaSessionOptions const&     session_options,
        ::webrtc::RtpTransceiverDirection        offer_rtd,
        ::webrtc::RtpTransceiverDirection        answer_rtd,
        ::webrtc::ContentInfo const*             current_content,
        ::std::vector<::webrtc::Codec>           codecs_from_offer,
        ::webrtc::PayloadTypeSuggester&          pt_suggester
    );

    MCNAPI ::webrtc::RTCErrorOr<::std::vector<::webrtc::Codec>> GetNegotiatedCodecsForOffer(
        ::webrtc::MediaDescriptionOptions const& media_description_options,
        ::webrtc::MediaSessionOptions const&     session_options,
        ::webrtc::ContentInfo const*             current_content,
        ::webrtc::PayloadTypeSuggester&          pt_suggester
    );

    MCNAPI ::webrtc::CodecList GetVideoCodecsForOffer(::webrtc::RtpTransceiverDirection const& direction) const;

    MCNAPI void ModifyVideoCodecs(::std::vector<::std::pair<::webrtc::Codec, ::webrtc::Codec>> changes);

    MCNAPI ::webrtc::CodecList all_audio_codecs() const;

    MCNAPI ::webrtc::CodecList all_video_codecs() const;

    MCNAPI ::webrtc::CodecList const& audio_recv_codecs() const;

    MCNAPI ::webrtc::CodecList const& audio_send_codecs() const;

    MCNAPI ::webrtc::CodecList const& video_recv_codecs() const;

    MCNAPI ::webrtc::CodecList const& video_send_codecs() const;

    MCNAPI ~CodecVendor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::webrtc::MediaEngineInterface* media_engine, bool rtx_enabled, ::webrtc::FieldTrialsView const& trials);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
