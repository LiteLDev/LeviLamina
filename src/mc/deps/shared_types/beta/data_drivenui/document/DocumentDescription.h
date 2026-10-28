#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Beta::DataDrivenUI {

struct DocumentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DocumentDescription();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::DataDrivenUI
