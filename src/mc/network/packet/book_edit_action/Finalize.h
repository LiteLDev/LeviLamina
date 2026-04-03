#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BookEditAction {

struct Finalize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mTitle;
    ::ll::TypedStorage<8, 32, ::std::string> mAuthor;
    ::ll::TypedStorage<8, 32, ::std::string> mXuid;
    // NOLINTEND

public:
    // prevent constructor by default
    Finalize(Finalize const&);
    Finalize();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::BookEditAction::Finalize& operator=(::BookEditAction::Finalize&&);

    MCFOLD ::BookEditAction::Finalize& operator=(::BookEditAction::Finalize const&);

    MCFOLD bool operator==(::BookEditAction::Finalize const&) const;

    MCAPI ~Finalize();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace BookEditAction
