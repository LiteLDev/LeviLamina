#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IEntitlement;
// clang-format on

class IPremiumCachePackEntitlementValidator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPremiumCachePackEntitlementValidator() = default;

    virtual bool isEntitlementValid(::IEntitlement const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
