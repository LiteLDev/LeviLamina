#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OverloadSyntaxInformation {
public:
    // OverloadSyntaxInformation inner types define
    using CursorPos = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> text;
    ::ll::TypedStorage<4, 4, uint>           start;
    ::ll::TypedStorage<4, 4, uint>           length;
    // NOLINTEND

public:
    // prevent constructor by default
    OverloadSyntaxInformation& operator=(OverloadSyntaxInformation const&);
    OverloadSyntaxInformation(OverloadSyntaxInformation const&);
    OverloadSyntaxInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::OverloadSyntaxInformation& operator=(::OverloadSyntaxInformation&&);
    // NOLINTEND
};
