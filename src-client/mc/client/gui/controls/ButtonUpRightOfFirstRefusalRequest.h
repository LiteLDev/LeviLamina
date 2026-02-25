#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct ButtonUpRightOfFirstRefusalRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                          buttonId;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> control;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ButtonUpRightOfFirstRefusalRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
