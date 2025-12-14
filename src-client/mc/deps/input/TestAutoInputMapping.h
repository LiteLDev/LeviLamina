#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TestAutoInputBinding;
// clang-format on

struct TestAutoInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::TestAutoInputBinding>> inputBindings;
    // NOLINTEND

public:
    // prevent constructor by default
    TestAutoInputMapping& operator=(TestAutoInputMapping const&);
    TestAutoInputMapping();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TestAutoInputMapping(::TestAutoInputMapping const&);

    MCAPI ~TestAutoInputMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TestAutoInputMapping const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
