#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MouseButtonBinding;
// clang-format on

struct MouseInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::MouseButtonBinding>> buttonBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        wheelUpButtonNames;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        wheelDownButtonNames;
    ::ll::TypedStorage<1, 1, bool>                                 invertYAxis;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MouseInputMapping();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
