#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

struct LocStringData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                id;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> parameters;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LocStringData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Settings
