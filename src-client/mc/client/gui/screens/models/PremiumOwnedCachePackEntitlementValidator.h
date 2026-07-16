#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/IPremiumCachePackEntitlementValidator.h"

// auto generated forward declare list
// clang-format off
class IEntitlement;
// clang-format on

class PremiumOwnedCachePackEntitlementValidator : public ::IPremiumCachePackEntitlementValidator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isEntitlementValid(::IEntitlement const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
