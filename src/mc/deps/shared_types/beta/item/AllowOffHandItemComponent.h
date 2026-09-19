#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Beta {

struct AllowOffHandItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mAllowOffHand;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::Beta
