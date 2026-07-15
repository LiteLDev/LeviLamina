#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct DisplayNameComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDisplayName;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
