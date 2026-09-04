#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/RtcpFeedbackType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioContentDescription; }
namespace webrtc { class SctpDataContentDescription; }
namespace webrtc { class UnsupportedContentDescription; }
namespace webrtc { class VideoContentDescription; }
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace webrtc {

class MediaContentDescription {
public:
    // MediaContentDescription inner types define
    enum class ExtmapAllowMixed : int {
        KNo      = 0,
        KSession = 1,
        KMedia   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk72cf01;
    ::ll::UntypedStorage<1, 1>  mUnkc2a690;
    ::ll::UntypedStorage<1, 1>  mUnkf870f8;
    ::ll::UntypedStorage<1, 1>  mUnk9bc2fd;
    ::ll::UntypedStorage<1, 1>  mUnka1cf1c;
    ::ll::UntypedStorage<4, 4>  mUnk56842a;
    ::ll::UntypedStorage<8, 32> mUnk3dddb9;
    ::ll::UntypedStorage<8, 24> mUnk1421db;
    ::ll::UntypedStorage<8, 24> mUnk28bbd2;
    ::ll::UntypedStorage<1, 1>  mUnk532198;
    ::ll::UntypedStorage<4, 4>  mUnk45fe95;
    ::ll::UntypedStorage<8, 80> mUnkceff53;
    ::ll::UntypedStorage<4, 4>  mUnke9cafb;
    ::ll::UntypedStorage<8, 48> mUnk60995e;
    ::ll::UntypedStorage<8, 24> mUnk931503;
    ::ll::UntypedStorage<8, 24> mUnkfad35f;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaContentDescription& operator=(MediaContentDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MediaContentDescription();

    virtual ::webrtc::MediaType type() const = 0;

    virtual ::webrtc::AudioContentDescription* as_audio();

    virtual ::webrtc::AudioContentDescription const* as_audio() const;

    virtual ::webrtc::VideoContentDescription* as_video();

    virtual ::webrtc::VideoContentDescription const* as_video() const;

    virtual ::webrtc::SctpDataContentDescription* as_sctp();

    virtual ::webrtc::SctpDataContentDescription const* as_sctp() const;

    virtual ::webrtc::UnsupportedContentDescription* as_unsupported();

    virtual ::webrtc::UnsupportedContentDescription const* as_unsupported() const;

    virtual void set_protocol(::std::string_view protocol);

    virtual bool has_codecs() const;

    virtual ::webrtc::MediaContentDescription* CloneInternal() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddRtpHeaderExtension(::webrtc::RtpExtension const& ext);

    MCNAPI MediaContentDescription();

    MCNAPI MediaContentDescription(::webrtc::MediaContentDescription const&);

    MCNAPI ::std::optional<::webrtc::RtcpFeedbackType> preferred_rtcp_cc_ack_type() const;

    MCNAPI void set_extmap_allow_mixed_enum(::webrtc::MediaContentDescription::ExtmapAllowMixed new_extmap_allow_mixed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::MediaContentDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::AudioContentDescription* $as_audio();

    MCNAPI ::webrtc::AudioContentDescription const* $as_audio() const;

    MCNAPI ::webrtc::VideoContentDescription* $as_video();

    MCNAPI ::webrtc::VideoContentDescription const* $as_video() const;

    MCNAPI ::webrtc::SctpDataContentDescription* $as_sctp();

    MCNAPI ::webrtc::SctpDataContentDescription const* $as_sctp() const;

    MCNAPI ::webrtc::UnsupportedContentDescription* $as_unsupported();

    MCNAPI ::webrtc::UnsupportedContentDescription const* $as_unsupported() const;

    MCNAPI void $set_protocol(::std::string_view protocol);

    MCNAPI bool $has_codecs() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
