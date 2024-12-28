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
    // prevent constructor by default
    BundleManager& operator=(BundleManager const&);
    BundleManager(BundleManager const&);
    BundleManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Commit();

    MCAPI void DeleteGroup(::cricket::ContentGroup const*);

    MCAPI void DeleteMid(::cricket::ContentGroup const*, ::std::string const&);

    MCAPI bool IsFirstMidInGroup(::std::string const&) const;

    MCAPI ::cricket::ContentGroup const* LookupGroupByMid(::std::string const&) const;

    MCAPI ::cricket::ContentGroup* LookupGroupByMid(::std::string const&);

    MCAPI void RefreshEstablishedBundleGroupsByMid();

    MCAPI void Rollback();

    MCAPI void Update(::cricket::SessionDescription const*, ::webrtc::SdpType);

    MCAPI ~BundleManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
