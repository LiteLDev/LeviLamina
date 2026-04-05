#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"

// auto generated forward declare list
// clang-format off
class IActiveDirectoryIdentityTelemetry;
// clang-format on

class ADPopupTelemetryEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mStage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void tryFireSignInEvent(
        ::IActiveDirectoryIdentityTelemetry& eventing,
        ::std::string const&                 mutsUserId,
        ::edu::Role                          role,
        ::std::string const&                 tenantType
    ) const;

    MCNAPI ~ADPopupTelemetryEvent();
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
