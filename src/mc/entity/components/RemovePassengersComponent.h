#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
// clang-format on

struct RemovePassengersComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::StrictEntityContext>> mPassengersToRemove;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RemovePassengersComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
