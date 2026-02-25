#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct TextInputChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> addedChars;
    ::ll::TypedStorage<8, 32, ::std::string> removedChars;
    ::ll::TypedStorage<8, 32, ::std::string> invalidChars;
    ::ll::TypedStorage<8, 8, uint64>         index;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TextInputChange();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
