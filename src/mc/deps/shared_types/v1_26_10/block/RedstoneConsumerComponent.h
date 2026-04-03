#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_10::BlockDefinition {

struct RedstoneConsumerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mPropagatePower;
    ::ll::TypedStorage<1, 1, schar> mMinPower;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& MinPowerId();

    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& PropagatesPowerId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
