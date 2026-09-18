#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_50 {

struct BarterComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mBarterItemsTable;
    ::ll::TypedStorage<4, 4, int>            mCooldown;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& DEFAULT_COOLDOWN();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
