#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaProtocolType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ContentGroup; }
namespace webrtc { class ContentInfo; }
namespace webrtc { class MediaContentDescription; }
namespace webrtc { struct TransportInfo; }
// clang-format on

namespace webrtc {

class SessionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb2aaf0;
    ::ll::UntypedStorage<8, 24> mUnk435af6;
    ::ll::UntypedStorage<8, 24> mUnk4bbc70;
    ::ll::UntypedStorage<4, 4>  mUnk1445d3;
    ::ll::UntypedStorage<1, 1>  mUnkc733d1;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionDescription& operator=(SessionDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddContent(::webrtc::ContentInfo&& content);

    MCNAPI void AddContent(
        ::std::string const&                                 name,
        ::webrtc::MediaProtocolType                          type,
        bool                                                 rejected,
        ::std::unique_ptr<::webrtc::MediaContentDescription> description
    );

    MCNAPI void AddContent(
        ::std::string const&                                 name,
        ::webrtc::MediaProtocolType                          type,
        bool                                                 rejected,
        bool                                                 bundle_only,
        ::std::unique_ptr<::webrtc::MediaContentDescription> description
    );

    MCNAPI void AddTransportInfo(::webrtc::TransportInfo const& transport_info);

    MCNAPI ::std::unique_ptr<::webrtc::SessionDescription> Clone() const;

    MCNAPI ::webrtc::ContentInfo const* GetContentByName(::std::string const& name) const;

    MCNAPI ::std::vector<::webrtc::ContentGroup const*> GetGroupsByName(::std::string const& name) const;

    MCNAPI ::webrtc::TransportInfo const* GetTransportInfoByName(::std::string const& name) const;

    MCNAPI ::webrtc::TransportInfo* GetTransportInfoByName(::std::string const& name);

    MCNAPI bool HasGroup(::std::string const& name) const;

    MCNAPI SessionDescription();

    MCNAPI SessionDescription(::webrtc::SessionDescription const&);

    MCNAPI void set_extmap_allow_mixed(bool supported);

    MCNAPI ~SessionDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::SessionDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
