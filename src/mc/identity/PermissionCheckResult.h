#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/identity/PermissionDenyReason.h"

namespace Social {

struct PermissionCheckResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk20e2dd;
    // NOLINTEND

public:
    // prevent constructor by default
    PermissionCheckResult& operator=(PermissionCheckResult const&);
    PermissionCheckResult(PermissionCheckResult const&);
    PermissionCheckResult();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::vector<::Social::PermissionDenyReason> makeDenyReasonList() const;
#endif
    // NOLINTEND
};

} // namespace Social
