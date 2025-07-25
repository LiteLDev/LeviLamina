#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class AudioContentDescription; }
namespace cricket { class SctpDataContentDescription; }
namespace cricket { class SimulcastDescription; }
namespace cricket { class UnsupportedContentDescription; }
namespace cricket { class VideoContentDescription; }
namespace cricket { struct Codec; }
namespace cricket { struct RidDescription; }
namespace cricket { struct StreamParams; }
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace cricket {

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
    ::ll::UntypedStorage<8, 32> mUnk8dd454;
    ::ll::UntypedStorage<1, 1>  mUnk9a065d;
    ::ll::UntypedStorage<1, 1>  mUnkd4e967;
    ::ll::UntypedStorage<1, 1>  mUnk320daa;
    ::ll::UntypedStorage<4, 4>  mUnk7cdbca;
    ::ll::UntypedStorage<8, 32> mUnk1e14c0;
    ::ll::UntypedStorage<8, 24> mUnk3bdb9b;
    ::ll::UntypedStorage<1, 1>  mUnk59597a;
    ::ll::UntypedStorage<8, 24> mUnkfc1ca1;
    ::ll::UntypedStorage<1, 1>  mUnkb7a062;
    ::ll::UntypedStorage<4, 4>  mUnk135e61;
    ::ll::UntypedStorage<8, 80> mUnk347a9a;
    ::ll::UntypedStorage<4, 4>  mUnk6d2ecb;
    ::ll::UntypedStorage<8, 48> mUnk66d9f0;
    ::ll::UntypedStorage<8, 24> mUnk7bd07e;
    ::ll::UntypedStorage<8, 24> mUnk14f575;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaContentDescription& operator=(MediaContentDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MediaContentDescription();

    // vIndex: 1
    virtual ::cricket::MediaType type() const = 0;

    // vIndex: 3
    virtual ::cricket::AudioContentDescription* as_audio();

    // vIndex: 2
    virtual ::cricket::AudioContentDescription const* as_audio() const;

    // vIndex: 5
    virtual ::cricket::VideoContentDescription* as_video();

    // vIndex: 4
    virtual ::cricket::VideoContentDescription const* as_video() const;

    // vIndex: 7
    virtual ::cricket::SctpDataContentDescription* as_sctp();

    // vIndex: 6
    virtual ::cricket::SctpDataContentDescription const* as_sctp() const;

    // vIndex: 9
    virtual ::cricket::UnsupportedContentDescription* as_unsupported();

    // vIndex: 8
    virtual ::cricket::UnsupportedContentDescription const* as_unsupported() const;

    // vIndex: 10
    virtual void set_protocol(::std::string_view protocol);

    // vIndex: 11
    virtual bool has_codecs() const;

    // vIndex: 12
    virtual ::cricket::MediaContentDescription* CloneInternal() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddCodecs(::std::vector<::cricket::Codec> const& codecs);

    MCNAPI void AddRtpHeaderExtension(::webrtc::RtpExtension const& ext);

    MCNAPI void AddStream(::cricket::StreamParams const& stream);

    MCNAPI MediaContentDescription();

    MCNAPI MediaContentDescription(::cricket::MediaContentDescription const&);

    MCNAPI void
    set_extmap_allow_mixed_enum(::cricket::MediaContentDescription::ExtmapAllowMixed new_extmap_allow_mixed);

    MCNAPI void set_receive_rids(::std::vector<::cricket::RidDescription> const& rids);

    MCNAPI void set_simulcast_description(::cricket::SimulcastDescription const& simulcast);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::MediaContentDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cricket::AudioContentDescription* $as_audio();

    MCNAPI ::cricket::AudioContentDescription const* $as_audio() const;

    MCNAPI ::cricket::VideoContentDescription* $as_video();

    MCNAPI ::cricket::VideoContentDescription const* $as_video() const;

    MCNAPI ::cricket::SctpDataContentDescription* $as_sctp();

    MCNAPI ::cricket::SctpDataContentDescription const* $as_sctp() const;

    MCNAPI ::cricket::UnsupportedContentDescription* $as_unsupported();

    MCNAPI ::cricket::UnsupportedContentDescription const* $as_unsupported() const;

    MCNAPI void $set_protocol(::std::string_view protocol);

    MCNAPI bool $has_codecs() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
