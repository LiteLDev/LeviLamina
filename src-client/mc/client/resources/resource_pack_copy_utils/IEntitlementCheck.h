#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

namespace ResourcePackCopyUtils {

class IEntitlementCheck {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEntitlementCheck() = default;

    virtual bool isValid(::ContentIdentity const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ResourcePackCopyUtils
