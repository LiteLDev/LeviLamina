#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BookEditAction {

struct ReplacePage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mPageIndex;
    ::ll::TypedStorage<8, 32, ::std::string> mPageText;
    ::ll::TypedStorage<8, 32, ::std::string> mPhotoName;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplacePage& operator=(ReplacePage const&);
    ReplacePage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ReplacePage(::BookEditAction::ReplacePage const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::BookEditAction::ReplacePage const&);
    // NOLINTEND
};

} // namespace BookEditAction
