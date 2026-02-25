#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct TextInputResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> addedChars;
    ::ll::TypedStorage<8, 32, ::std::string> removedChars;
    ::ll::TypedStorage<8, 32, ::std::string> invalidChars;
    ::ll::TypedStorage<8, 8, uint64>         index;
    ::ll::TypedStorage<8, 32, ::std::string> text;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TextInputResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
