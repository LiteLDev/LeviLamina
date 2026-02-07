#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/IPremiumCachePackEntitlementValidator.h"

// auto generated forward declare list
// clang-format off
struct IEntitlement;
// clang-format on

class PremiumPurchasableCachePackEntitlementValidator : public ::IPremiumCachePackEntitlementValidator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isEntitlementValid(::IEntitlement const& entitlement) const /*override*/;

    virtual ~PremiumPurchasableCachePackEntitlementValidator() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isEntitlementValid(::IEntitlement const& entitlement) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
