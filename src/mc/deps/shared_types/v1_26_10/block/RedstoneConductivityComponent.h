#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_10::BlockDefinition {

struct RedstoneConductivityComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mRedstoneConductor;
    ::ll::TypedStorage<1, 1, bool> mAllowsWireToStepDown;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& AllowsWireStepDownId();

    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& RedstoneConductorId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
