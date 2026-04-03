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
    AddPage(AddPage const&);
    AddPage();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::BookEditAction::AddPage& operator=(::BookEditAction::AddPage&&);

    MCFOLD ::BookEditAction::AddPage& operator=(::BookEditAction::AddPage const&);

    MCFOLD bool operator==(::BookEditAction::AddPage const&) const;

    MCAPI ~AddPage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace BookEditAction
