#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ListTag;
// clang-format on

class ListTagFloatAdder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ListTag>> mTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ListTagFloatAdder& operator=(ListTagFloatAdder const&);
    ListTagFloatAdder(ListTagFloatAdder const&);
    ListTagFloatAdder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ListTagFloatAdder& operator()(float f);

    MCAPI ~ListTagFloatAdder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
