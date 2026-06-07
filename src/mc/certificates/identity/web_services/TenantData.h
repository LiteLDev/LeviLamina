#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WebServices::EduSignin {

struct TenantData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3f8b0c;
    // NOLINTEND

public:
    // prevent constructor by default
    TenantData& operator=(TenantData const&);
    TenantData(TenantData const&);
    TenantData();
};

} // namespace WebServices::EduSignin
