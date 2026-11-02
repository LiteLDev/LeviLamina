#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_50 {

struct DamageItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mDamage;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
