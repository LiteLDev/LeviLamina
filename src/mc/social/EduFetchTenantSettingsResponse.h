#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct EduFetchTenantSettingsResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk3a593a;
    ::ll::UntypedStorage<1, 2>  mUnk55888f;
    ::ll::UntypedStorage<8, 16> mUnk2fc83d;
    // NOLINTEND

public:
    // prevent constructor by default
    EduFetchTenantSettingsResponse& operator=(EduFetchTenantSettingsResponse const&);
    EduFetchTenantSettingsResponse(EduFetchTenantSettingsResponse const&);
    EduFetchTenantSettingsResponse();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~EduFetchTenantSettingsResponse();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Social
