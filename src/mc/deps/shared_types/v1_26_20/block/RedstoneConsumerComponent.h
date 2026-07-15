#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct RedstoneConsumerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mPropagatePower;
    ::ll::TypedStorage<1, 1, uchar> mMinPower;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
