#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct TextInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mUtf8Characters;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>           mCaretUpdates;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TextInput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
