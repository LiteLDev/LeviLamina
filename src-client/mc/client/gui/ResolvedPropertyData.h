#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UI::Resources {

struct ResolvedPropertyData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<8, 32, ::std::string> value;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ResolvedPropertyData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace UI::Resources
