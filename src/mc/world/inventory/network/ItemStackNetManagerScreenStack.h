#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackNetManagerScreen;
// clang-format on

class ItemStackNetManagerScreenStack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::deque<::std::unique_ptr<::ItemStackNetManagerScreen>>> mStack;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetManagerScreen* push(::std::unique_ptr<::ItemStackNetManagerScreen> screen);
    // NOLINTEND
};
