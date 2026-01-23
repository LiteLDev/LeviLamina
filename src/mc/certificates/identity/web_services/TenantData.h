#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WebServices::EduSignin {

struct TenantData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd2c4ca;
    // NOLINTEND

public:
    // prevent constructor by default
    TenantData& operator=(TenantData const&);
    TenantData(TenantData const&);
    TenantData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~TenantData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace WebServices::EduSignin
