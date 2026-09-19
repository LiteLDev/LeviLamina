#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct TouchEvent; }
// clang-format on

namespace OreUI {

struct TouchInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::TouchEvent>> mTouchEvents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TouchInput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
