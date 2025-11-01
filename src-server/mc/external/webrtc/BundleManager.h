#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SdpType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class ContentGroup; }
namespace cricket { class SessionDescription; }
// clang-format on

namespace webrtc {

class BundleManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkec5072;
    ::ll::UntypedStorage<4, 4> mUnkd745be;
    ::ll::UntypedStorage<8, 24> mUnkc15033;
    ::ll::UntypedStorage<8, 24> mUnk169382;
    ::ll::UntypedStorage<8, 16> mUnk912948;
    // NOLINTEND

public:
    // prevent constructor by default
    BundleManager& operator=(BundleManager const&);
    BundleManager(BundleManager const&);
    BundleManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Commit();

    MCNAPI void DeleteGroup(::cricket::ContentGroup const* bundle_group);

    MCNAPI void DeleteMid(::cricket::ContentGroup const* bundle_group, ::std::string const& mid);

    MCNAPI bool IsFirstMidInGroup(::std::string const& mid) const;

    MCNAPI ::cricket::ContentGroup const* LookupGroupByMid(::std::string const&) const;

    MCNAPI ::cricket::ContentGroup* LookupGroupByMid(::std::string const& mid);

    MCNAPI void RefreshEstablishedBundleGroupsByMid();

    MCNAPI void Rollback();

    MCNAPI void Update(::cricket::SessionDescription const* description, ::webrtc::SdpType type);

    MCNAPI ~BundleManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
