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
    // prevent constructor by default
    MouseInputMapping();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MouseInputMapping(::MouseInputMapping const&);

    MCAPI ::MouseInputMapping& operator=(::MouseInputMapping const&);

    MCAPI ~MouseInputMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MouseInputMapping const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
