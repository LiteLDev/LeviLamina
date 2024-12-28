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
    ::ll::UntypedStorage<4, 4>  mUnk9e054b;
    ::ll::UntypedStorage<1, 1>  mUnke3e683;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionDescription& operator=(SessionDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddContent(::cricket::ContentInfo&&);

    MCAPI void
    AddContent(::std::string const&, ::cricket::MediaProtocolType, bool, ::std::unique_ptr<::cricket::MediaContentDescription>);

    MCAPI void
    AddContent(::std::string const&, ::cricket::MediaProtocolType, bool, bool, ::std::unique_ptr<::cricket::MediaContentDescription>);

    MCAPI void AddTransportInfo(::cricket::TransportInfo const&);

    MCAPI ::std::unique_ptr<::cricket::SessionDescription> Clone() const;

    MCAPI ::cricket::ContentInfo const* GetContentByName(::std::string const&) const;

    MCAPI ::std::vector<::cricket::ContentGroup const*> GetGroupsByName(::std::string const&) const;

    MCAPI ::cricket::TransportInfo const* GetTransportInfoByName(::std::string const&) const;

    MCAPI ::cricket::TransportInfo* GetTransportInfoByName(::std::string const&);

    MCAPI bool HasGroup(::std::string const&) const;

    MCAPI SessionDescription();

    MCAPI SessionDescription(::cricket::SessionDescription const&);

    MCAPI void set_extmap_allow_mixed(bool);

    MCAPI ~SessionDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::SessionDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
