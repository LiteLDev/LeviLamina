#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaProtocolType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class ContentGroup; }
namespace cricket { class ContentInfo; }
namespace cricket { class MediaContentDescription; }
namespace cricket { struct TransportInfo; }
// clang-format on

namespace cricket {

class SessionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke64bef;
    ::ll::UntypedStorage<8, 24> mUnk417d8a;
    ::ll::UntypedStorage<8, 24> mUnkfe2896;
    ::ll::UntypedStorage<4, 4> mUnk9e054b;
    ::ll::UntypedStorage<1, 1> mUnke3e683;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionDescription& operator=(SessionDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddContent(::cricket::ContentInfo&& content);

    MCNAPI void AddContent(::std::string const& name, ::cricket::MediaProtocolType type, bool rejected, ::std::unique_ptr<::cricket::MediaContentDescription> description);

    MCNAPI void AddContent(::std::string const& name, ::cricket::MediaProtocolType type, bool rejected, bool bundle_only, ::std::unique_ptr<::cricket::MediaContentDescription> description);

    MCNAPI void AddTransportInfo(::cricket::TransportInfo const& transport_info);

    MCNAPI ::std::unique_ptr<::cricket::SessionDescription> Clone() const;

    MCNAPI ::cricket::ContentInfo const* GetContentByName(::std::string const& name) const;

    MCNAPI ::std::vector<::cricket::ContentGroup const*> GetGroupsByName(::std::string const& name) const;

    MCNAPI ::cricket::TransportInfo const* GetTransportInfoByName(::std::string const&) const;

    MCNAPI ::cricket::TransportInfo* GetTransportInfoByName(::std::string const& name);

    MCNAPI bool HasGroup(::std::string const& name) const;

    MCNAPI SessionDescription();

    MCNAPI SessionDescription(::cricket::SessionDescription const&);

    MCNAPI void set_extmap_allow_mixed(bool supported);

    MCNAPI ~SessionDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::SessionDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
