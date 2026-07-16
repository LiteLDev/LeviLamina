#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BookEditAction {

struct AddPage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mPageIndex;
    ::ll::TypedStorage<8, 32, ::std::string> mPageText;
    ::ll::TypedStorage<8, 32, ::std::string> mPhotoName;
    // NOLINTEND

public:
    // prevent constructor by default
    AddPage& operator=(AddPage const&);
    AddPage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddPage(::BookEditAction::AddPage const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::BookEditAction::AddPage const&);
    // NOLINTEND
};

} // namespace BookEditAction
