#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class AddRiderComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnkd5d64e;
    // NOLINTEND

public:
    // prevent constructor by default
    AddRiderComponent& operator=(AddRiderComponent const&);
    AddRiderComponent(AddRiderComponent const&);
    AddRiderComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void reloadComponent(::Actor& owner);

    MCAPI ~AddRiderComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
