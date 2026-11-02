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
    Finalize& operator=(Finalize const&);
    Finalize();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Finalize(::BookEditAction::Finalize const&);

    MCNAPI bool operator==(::BookEditAction::Finalize const&) const;

    MCNAPI ~Finalize();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BookEditAction::Finalize const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace BookEditAction
