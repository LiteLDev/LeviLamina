#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct OverloadSyntaxInformation;
// clang-format on

struct CommandSyntaxInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                        isValid;
    ::ll::TypedStorage<8, 32, ::std::string>                              description;
    ::ll::TypedStorage<8, 24, ::std::vector<::OverloadSyntaxInformation>> possibilities;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CommandSyntaxInformation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
