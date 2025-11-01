#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ListTag;
// clang-format on

class ListTagIntAdder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ListTag>> mTag;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ListTagIntAdder& operator()(int i);

    MCNAPI ~ListTagIntAdder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
