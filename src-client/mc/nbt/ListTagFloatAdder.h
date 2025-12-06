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
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ListTagFloatAdder& operator()(float f);

    MCNAPI ~ListTagFloatAdder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
