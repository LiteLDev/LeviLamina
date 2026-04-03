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
    ReplacePage(ReplacePage const&);
    ReplacePage();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::BookEditAction::ReplacePage& operator=(::BookEditAction::ReplacePage&&);

    MCFOLD ::BookEditAction::ReplacePage& operator=(::BookEditAction::ReplacePage const&);

    MCFOLD bool operator==(::BookEditAction::ReplacePage const&) const;

    MCAPI ~ReplacePage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace BookEditAction
