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

struct BundleManager {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Commit();

    MCNAPI void DeleteGroup(::cricket::ContentGroup const*);

    MCNAPI void DeleteMid(::cricket::ContentGroup const*, ::std::string const&);

    MCNAPI bool IsFirstMidInGroup(::std::string const&) const;

    MCNAPI ::cricket::ContentGroup const* LookupGroupByMid(::std::string const&) const;

    MCNAPI ::cricket::ContentGroup* LookupGroupByMid(::std::string const&);

    MCNAPI void RefreshEstablishedBundleGroupsByMid();

    MCNAPI void Rollback();

    MCNAPI void Update(::cricket::SessionDescription const*, ::webrtc::SdpType);

    MCNAPI ~BundleManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
